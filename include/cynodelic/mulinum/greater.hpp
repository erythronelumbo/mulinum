// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file greater.hpp
 *
 * @brief Defines the `greater` comparator.
 */


#ifndef CYNODELIC_MULINUM_GREATER_HPP
#define CYNODELIC_MULINUM_GREATER_HPP


#include <cstdint>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/rational.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `greater`.
 */
template <typename Lhs,typename Rhs>
struct greater_impl {};


/**
 * @brief Helper for `greater`.
 */
template <
	typename IntType,
	IntType Lhs,
	IntType Rhs
>
struct greater_impl<integer_c<IntType,Lhs>,integer_c<IntType,Rhs>> :
	bool_c<(Lhs > Rhs)>
{};


/**
 * @brief Helper for `greater`.
 */
template <
	std::intmax_t LhsNum,std::intmax_t LhsDen,
	std::intmax_t RhsNum,std::intmax_t RhsDen
>
struct greater_impl<rational<LhsNum,LhsDen>,rational<RhsNum,RhsDen>> :
	bool_c<(LhsNum*RhsDen > RhsNum*LhsDen)>
{};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup comparators
 * @brief "Greater-than" comparator
 *
 * Checks if the value of `Lhs` is greater than the one in `Rhs`.
 */
template <typename Lhs,typename Rhs>
using greater = typename greater_impl<Lhs,Rhs>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_GREATER_HPP
