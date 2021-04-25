// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file negate.hpp
 *
 * @brief Defines the `negate` metafunction.
 */


#ifndef CYNODELIC_MULINUM_NEGATE_HPP
#define CYNODELIC_MULINUM_NEGATE_HPP


#include <cstdint>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/rational.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `negate`.
 */
template <typename>
struct negate_impl {};


/**
 * @brief Helper for `negate`.
 */
template <typename IntType, IntType Value>
struct negate_impl<integer_c<IntType, Value>> :
	integer_c<IntType, -Value>
{};


/**
 * @brief Helper for `negate`.
 */
template <std::intmax_t Num, std::intmax_t Den>
struct negate_impl<rational<Num, Den>> :
	rational<
		-rational<Num, Den>::num,
		rational<Num, Den>::den
	>
{};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup arithmeticops
 * @brief Negation
 *
 * Returns the negative of an arithmetic type (similar to `-value`).
 *
 * @param ArithmeticType Any arithmetic type.
 */
template <typename ArithmeticType>
using negate = typename negate_impl<ArithmeticType>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_NEGATE_HPP
