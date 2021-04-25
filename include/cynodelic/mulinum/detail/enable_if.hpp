// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file enable_if.hpp
 *
 * @brief Defines the `enable_if` template alias.
 */


#ifndef CYNODELIC_MULINUM_DETAIL_ENABLE_IF_HPP
#define CYNODELIC_MULINUM_DETAIL_ENABLE_IF_HPP


#include <cynodelic/mulinum/config.hpp>


namespace cynodelic { namespace mulinum {

namespace detail
{
	/**
	 * @brief Helper for @ref enable_if.
	 */
	template <bool X, typename = void>
	struct enable_if_impl;


	/**
	 * @brief Helper for @ref enable_if.
	 */
	template <typename T>
	struct enable_if_impl<true, T>
	{
		using type = T;
	};


	/**
	 * @brief Helper metafunction for overloading and SFINAE.
	 */
	template <bool Cond, typename T = void>
	using enable_if = typename enable_if_impl<Cond, T>::type;
} // end of "detail" namespace

}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_DETAIL_ENABLE_IF_HPP
