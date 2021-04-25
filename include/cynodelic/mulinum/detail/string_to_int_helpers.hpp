// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file string_to_int_helpers.hpp
 *
 * @brief Defines helpers for `string_to_int`.
 */


#ifndef CYNODELIC_MULINUM_DETAIL_STRING_TO_INT_HELPERS_HPP
#define CYNODELIC_MULINUM_DETAIL_STRING_TO_INT_HELPERS_HPP


#include <cstddef>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/string.hpp>


namespace cynodelic { namespace mulinum {

namespace detail
{
	/**
	 * @brief Helper for @ref string_to_int.
	 */
	template <typename>
	struct has_digits {};


	/**
	 * @brief Helper for @ref string_to_int.
	 */
	template <char First, char... Others>
	struct has_digits<string<First, Others...>> :
		bool_c<(First >= '0' && First <= '9') && has_digits<string<Others...>>::value>
	{};


	/**
	 * @brief Helper for @ref string_to_int.
	 */
	template <char Last>
	struct has_digits<string<Last>> :
		bool_c<(Last >= '0' && Last <= '9')>
	{};


	/**
	 * @brief Helper for @ref string_to_int.
	 */
	template <typename IntType, typename, std::size_t, IntType, bool>
	struct make_int_from_string;


	/**
	 * @brief Helper for @ref string_to_int.
	 */
	template <typename IntType, char... Chars, std::size_t Pos, IntType Factor>
	struct make_int_from_string<IntType, string<Chars...>, Pos, Factor, false> :
		integer_c<
			IntType,
			Factor*static_cast<IntType>(string<Chars...>::data[Pos] - '0') +
			make_int_from_string<
				IntType,
				string<Chars...>,
				Pos - 1,
				static_cast<IntType>(10)*Factor,
				(Pos - 1) == 0
			>::value
		>
	{};
	

	/**
	 * @brief Helper for @ref string_to_int.
	 */
	template <typename IntType, char... Chars, std::size_t Pos, IntType Factor>
	struct make_int_from_string<IntType, string<Chars...>, Pos, Factor, true> :
		integer_c<
			IntType,
			Factor*static_cast<IntType>(string<Chars...>::data[Pos] - '0')
		>
	{};
} // end of "detail" namespace

}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_DETAIL_STRING_TO_INT_HELPERS_HPP
