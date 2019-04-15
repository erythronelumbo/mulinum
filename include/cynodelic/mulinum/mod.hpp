// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file mod.hpp
 *
 * @brief Defines the `mod` metafunction.
 */


#ifndef CYNODELIC_MULINUM_MOD_HPP
#define CYNODELIC_MULINUM_MOD_HPP


#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/integer_c.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `mod`.
 */
template <typename...>
struct mod_impl {};


/**
 * @brief Helper for `mod`.
 */
template <
	typename IntType,
	IntType ValueL,IntType ValueR
>
struct mod_impl<
	integer_c<IntType,ValueL>,
	integer_c<IntType,ValueR>
> :
	integer_c<IntType,ValueL % ValueR>
{};


/**
 * @brief Helper for `mod`.
 */
template <
	typename IntType,
	IntType ValueL,IntType ValueR,
	typename... Others
	>
struct mod_impl<
	integer_c<IntType,ValueL>,
	integer_c<IntType,ValueR>,
	Others...
> :
	mod_impl<integer_c<IntType,ValueL % ValueR>,Others...>
{};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup arithmeticops
 * @brief Modulus.
 *
 * Performs modulus of integer types of the same type (@ref integer_c s).
 *
 * @param Integers... All the types.
 */
template <typename... Integers>
using mod = typename mod_impl<Integers...>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_MOD_HPP
