// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file string_to_int.hpp
 *
 * @brief Provides the `string_to_int` metafunction.
 */


#ifndef CYNODELIC_MULINUM_STRING_TO_INT_HPP
#define CYNODELIC_MULINUM_STRING_TO_INT_HPP


#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/if.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/string.hpp>
#include <cynodelic/mulinum/detail/enable_if.hpp>
#include <cynodelic/mulinum/detail/integer_traits.hpp>
#include <cynodelic/mulinum/detail/string_to_int_helpers.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `string_to_int`.
 */
template <typename,typename,typename = void>
struct string_to_int_impl {};


/**
 * @brief Helper for `string_to_int`.
 */
template <typename IntType,char First,char... Others>
struct string_to_int_impl<
	IntType,
	string<First,Others...>,
	detail::enable_if<detail::is_signed<IntType>::value && (First == '-')>
> :
	detail::enable_if<
		detail::has_digits<string<Others...>>::value,
		negate<
			typename detail::make_int_from_string<
				IntType,
				string<Others...>,
				string<Others...>::size - 1,
				1,
				(string<Others...>::size - 1) == 0
			>::type
		>
	>
{};


/**
 * @brief Helper for `string_to_int`.
 */
template <typename IntType,char First,char... Others>
struct string_to_int_impl<
	IntType,
	string<First,Others...>,
	detail::enable_if<detail::is_signed<IntType>::value && (First != '-')>
> :
	detail::enable_if<
		detail::has_digits<string<First,Others...>>::value,
		typename detail::make_int_from_string<
			IntType,
			string<First,Others...>,
			string<First,Others...>::size - 1,
			1,
			string<Others...>::size == 0
		>::type
	>
{};


/**
 * @brief Helper for `string_to_int`.
 */
template <typename IntType,char First,char... Others>
struct string_to_int_impl<
	IntType,
	string<First,Others...>,
	detail::enable_if<detail::is_unsigned<IntType>::value>
> :
	detail::enable_if<
		detail::has_digits<string<First,Others...>>::value,
		typename detail::make_int_from_string<
			IntType,
			string<First,Others...>,
			string<First,Others...>::size - 1,
			1,
			string<Others...>::size == 0
		>::type
	>
{};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup stringops
 * @brief String to integer.
 *
 * Converts a string with decimal digits, that may have an initial minus sign
 * (`-`) to an integer, yielding the result as an @ref integer_c.
 *
 * @param IntType The type of the result (an integer).
 * @param StringT The input string (a @ref string).
 */
template <typename IntType,typename StringT>
using string_to_int = typename string_to_int_impl<IntType,StringT>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_STRING_TO_INT_HPP
