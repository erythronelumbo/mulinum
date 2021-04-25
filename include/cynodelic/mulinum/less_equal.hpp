// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file less_equal.hpp
 *
 * @brief Defines the `less_equal` comparator.
 */


#ifndef CYNODELIC_MULINUM_LESS_EQUAL_HPP
#define CYNODELIC_MULINUM_LESS_EQUAL_HPP


#include <cstdint>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/rational.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `less_equal`.
 */
template <typename Lhs, typename Rhs>
struct less_equal_impl {};


/**
 * @brief Helper for `less_equal`.
 */
template <
	typename IntType,
	IntType Lhs,
	IntType Rhs
>
struct less_equal_impl<integer_c<IntType, Lhs>, integer_c<IntType, Rhs>> :
	bool_c<(Lhs <= Rhs)>
{};


/**
 * @brief Helper for `less_equal`.
 */
template <
	std::intmax_t LhsNum, std::intmax_t LhsDen,
	std::intmax_t RhsNum, std::intmax_t RhsDen
>
struct less_equal_impl<rational<LhsNum, LhsDen>, rational<RhsNum, RhsDen>> :
	bool_c<(LhsNum*RhsDen <= RhsNum*LhsDen)>
{};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup comparators
 * @brief "Less-or-equal" comparator
 *
 * Checks if the value of `Lhs` is smaller than or equals with the one in
 * `Rhs`, resulting in @ref true_ or @ref false_ .
 */
template <typename Lhs, typename Rhs>
using less_equal = typename less_equal_impl<Lhs, Rhs>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_LESS_EQUAL_HPP
