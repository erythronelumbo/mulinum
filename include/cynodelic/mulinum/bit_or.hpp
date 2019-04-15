// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file bit_or.hpp
 *
 * @brief Defines the `bit_or` metafunction.
 */


#ifndef CYNODELIC_MULINUM_BIT_OR_HPP
#define CYNODELIC_MULINUM_BIT_OR_HPP


#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/integer_c.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `bit_or`.
 */
template <typename...>
struct bit_or_impl {};


/**
 * @brief Helper for `bit_or`.
 */
template <
	typename IntType,
	IntType ValueL,IntType ValueR
>
struct bit_or_impl<
	integer_c<IntType,ValueL>,
	integer_c<IntType,ValueR>
> :
	integer_c<IntType,ValueL | ValueR>
{};


/**
 * @brief Helper for `bit_or`.
 */
template <
	typename IntType,
	IntType ValueL,IntType ValueR,
	typename... Others
	>
struct bit_or_impl<
	integer_c<IntType,ValueL>,
	integer_c<IntType,ValueR>,
	Others...
> :
	bit_or_impl<integer_c<IntType,ValueL | ValueR>,Others...>
{};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup arithmeticops
 * @brief Bitwise OR.
 *
 * Performs bitwise OR of integer types of the same type (@ref integer_c s).
 *
 * @param Integers... All the types.
 */
template <typename... Integers>
using bit_or = typename bit_or_impl<Integers...>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_BIT_OR_HPP
