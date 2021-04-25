// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file bit_xor.hpp
 *
 * @brief Defines the `bit_xor` metafunction.
 */


#ifndef CYNODELIC_MULINUM_BIT_XOR_HPP
#define CYNODELIC_MULINUM_BIT_XOR_HPP


#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/integer_c.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `bit_xor`.
 */
template <typename...>
struct bit_xor_impl {};


/**
 * @brief Helper for `bit_xor`.
 */
template <
	typename IntType,
	IntType ValueL, IntType ValueR
>
struct bit_xor_impl<
	integer_c<IntType, ValueL>,
	integer_c<IntType, ValueR>
> :
	integer_c<IntType, ValueL ^ ValueR>
{};


/**
 * @brief Helper for `bit_xor`.
 */
template <
	typename IntType, 
	IntType ValueL, IntType ValueR,
	typename... Others
	>
struct bit_xor_impl<
	integer_c<IntType, ValueL>,
	integer_c<IntType, ValueR>,
	Others...
> :
	bit_xor_impl<integer_c<IntType, ValueL ^ ValueR>, Others...>
{};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup arithmeticops
 * @brief Bitwise XOR.
 *
 * Performs bitwise XOR (exclusive OR) of at least two integer types of the
 * same type (@ref integer_c s).
 *
 * @param Integers... Integer types.
 */
template <typename... Integers>
using bit_xor = typename bit_xor_impl<Integers...>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_BIT_XOR_HPP
