// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file less.hpp
 *
 * @brief Defines the `less` comparator.
 */


#ifndef CYNODELIC_MULINUM_LESS_HPP
#define CYNODELIC_MULINUM_LESS_HPP


#include <cstdint>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/rational.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief helper for `less`.
 */
template <typename Lhs,typename Rhs>
struct less_impl {};


/**
 * @brief helper for `less`.
 */
template <
	typename IntType,
	IntType Lhs,
	IntType Rhs
>
struct less_impl<integer_c<IntType,Lhs>,integer_c<IntType,Rhs>> :
	bool_c<(Lhs < Rhs)>
{};


/**
 * @brief helper for `less`.
 */
template <
	std::intmax_t LhsNum,std::intmax_t LhsDen,
	std::intmax_t RhsNum,std::intmax_t RhsDen
>
struct less_impl<rational<LhsNum,LhsDen>,rational<RhsNum,RhsDen>> :
	bool_c<(LhsNum*RhsDen < RhsNum*LhsDen)>
{};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup comparators
 * @brief "Less-than" comparator
 *
 * Checks if the value of `Lhs` is smaller than the one in `Rhs`.
 */
template <typename Lhs,typename Rhs>
using less = typename less_impl<Lhs,Rhs>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_LESS_HPP
