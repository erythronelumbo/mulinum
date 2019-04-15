// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file remove_zeroes.hpp
 *
 * @brief Defines helper types for removal of zeroes in `string` s.
 */

#ifndef CYNODELIC_MULINUM_DETAIL_REMOVE_ZEROES_HPP
#define CYNODELIC_MULINUM_DETAIL_REMOVE_ZEROES_HPP


#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/if.hpp>
#include <cynodelic/mulinum/string.hpp>


namespace cynodelic { namespace mulinum {

namespace detail
{
	/**
	 * @brief Helper for @ref CYNODELIC_MULINUM_STRING.
	 */
	template <typename,typename>
	struct str_cat_two;


	/**
	 * @brief Helper for @ref CYNODELIC_MULINUM_STRING.
	 */
	template <char... CharsL,char... CharsR>
	struct str_cat_two<string<CharsL...>,string<CharsR...>> : string<CharsL...,CharsR...> {};


	/**
	 * @brief Helper for @ref CYNODELIC_MULINUM_STRING.
	 */
	template <typename>
	struct remove_zeroes_impl;


	/**
	 * @brief Helper for @ref remove_zeroes.
	 */
	template <char First,char... Others>
	struct remove_zeroes_impl<string<First,Others...>>
	{

		using type = if_<
			First == '\0',
			string<>,
			typename str_cat_two<
				string<First>,
				typename remove_zeroes_impl<string<Others...>>::type
			>::type
		>;
	};


	/**
	 * @brief Helper for @ref remove_zeroes.
	 */
	template <>
	struct remove_zeroes_impl<string<>>
	{
		using type = string<>;
	};


	/**
	 * @brief Helper for removal of zeroes in strings.
	 */
	template <typename StringT>
	using remove_zeroes = typename remove_zeroes_impl<StringT>::type;
} // end of "detail" namespace


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_DETAIL_REMOVE_ZEROES_HPP
