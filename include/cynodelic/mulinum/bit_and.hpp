// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file bit_and.hpp
 *
 * @brief Defines the `bit_and` metafunction.
 */


#ifndef CYNODELIC_MULINUM_BIT_AND_HPP
#define CYNODELIC_MULINUM_BIT_AND_HPP


#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/integer_c.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `bit_and`.
 */
template <typename...>
struct bit_and_impl {};


/**
 * @brief Helper for `bit_and`.
 */
template <
	typename IntType,
	IntType ValueL,IntType ValueR
>
struct bit_and_impl<
	integer_c<IntType,ValueL>,
	integer_c<IntType,ValueR>
> :
	integer_c<IntType,ValueL & ValueR>
{};


/**
 * @brief Helper for `bit_and`.
 */
template <
	typename IntType,
	IntType ValueL,IntType ValueR,
	typename... Others
	>
struct bit_and_impl<
	integer_c<IntType,ValueL>,
	integer_c<IntType,ValueR>,
	Others...
> :
	bit_and_impl<integer_c<IntType,ValueL & ValueR>,Others...>
{};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup arithmeticops
 * @brief Bitwise AND.
 *
 * Performs bitwise AND of integer types of the same type (@ref integer_c s).
 *
 * @param Integers... All the types.
 */
template <typename... Integers>
using bit_and = typename bit_and_impl<Integers...>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_BIT_AND_HPP
