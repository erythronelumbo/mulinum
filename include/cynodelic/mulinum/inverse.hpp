// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file inverse.hpp
 *
 * @brief Defines the `inverse` metafunction.
 */


#ifndef CYNODELIC_MULINUM_INVERSE_HPP
#define CYNODELIC_MULINUM_INVERSE_HPP


#include <cstdint>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/rational.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `inverse`.
 */	
template <typename>
struct inverse_impl {};


/**
 * @brief Helper for `inverse`.
 */
template <std::intmax_t Num, std::intmax_t Den>
struct inverse_impl<rational<Num, Den>> :
	rational<
		rational<Num, Den>::den,
		rational<Num, Den>::num
	>
{};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup arithmeticops
 * @brief Rational inverse.
 *
 * Inverts the numerator and denominator of a fraction (@ref rational).
 *
 * @param Rational A fraction (@ref rational).
 */
template <typename Rational>
using inverse = typename inverse_impl<Rational>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_INVERSE_HPP
