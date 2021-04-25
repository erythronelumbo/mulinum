// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file bit_not.hpp
 *
 * @brief Defines the `bit_not` metfunction.
 */


#ifndef CYNODELIC_MULINUM_BIT_NOT_HPP
#define CYNODELIC_MULINUM_BIT_NOT_HPP


#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/integer_c.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `bit_not`.
 */
template <typename>
struct bit_not_impl {};


/**
 * @brief Helper for `bit_not`.
 */
template <typename IntType, IntType Value>
struct bit_not_impl<integer_c<IntType, Value>> : integer_c<IntType, ~Value>
{};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup arithmeticops
 * @brief Bitwise NOT.
 *
 * Inverts the bits of an integer type (@ref integer_c).
 *
 * @param IntegerC The integer.
 */
template <typename IntegerC>
using bit_not = typename bit_not_impl<IntegerC>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_BIT_NOT_HPP
