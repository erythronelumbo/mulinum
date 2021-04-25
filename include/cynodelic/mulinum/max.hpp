// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file max.hpp
 *
 * @brief Defines the `max` metafunction.
 */


#ifndef CYNODELIC_MULINUM_MAX_HPP
#define CYNODELIC_MULINUM_MAX_HPP


#include <cstdint>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/if.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/rational.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief helper for `max`.
 */
template <typename Lhs, typename Rhs>
struct max_impl {};


/**
 * @brief Helper for `max`.
 */
template <
	typename IntType,
	IntType  Lhs,
	IntType  Rhs
>
struct max_impl<integer_c<IntType, Lhs>, integer_c<IntType, Rhs>>
{
	using type = if_<
		(Lhs < Rhs),
		integer_c<IntType, Rhs>,
		integer_c<IntType, Lhs>
	>;
};


/**
 * @brief Helper for `max`.
 */
template <
	std::intmax_t LhsNum, std::intmax_t LhsDen,
	std::intmax_t RhsNum, std::intmax_t RhsDen
>
struct max_impl<rational<LhsNum, LhsDen>, rational<RhsNum, RhsDen>>
{
	using type = if_<
		(LhsNum*RhsDen < RhsNum*LhsDen),
		rational<RhsNum, RhsDen>,
		rational<LhsNum, LhsDen>
	>;
};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup arithmeticops
 * @brief Greatest of two arithmetic types
 *
 * Returns the greatest (maximum) of two arithmetic types.
 */
template <typename Lhs, typename Rhs>
using max = typename max_impl<Lhs, Rhs>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_MAX_HPP
