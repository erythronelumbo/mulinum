// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file special_functions.hpp
 *
 * @brief Defines special functions.
 */


#ifndef CYNODELIC_MULINUM_DETAIL_SPECIAL_FUNCTIONS_HPP
#define CYNODELIC_MULINUM_DETAIL_SPECIAL_FUNCTIONS_HPP


#include <cstdlib>
#include <cstddef>
#include <cstdint>

#include <cynodelic/mulinum/config.hpp>


namespace cynodelic { namespace mulinum {

namespace detail
{
	/**
	 * @brief Greatest common divisor.
	 +
	 * Calculates the greatest common divisor of two numbers.
	 */
	inline constexpr std::intmax_t gcd(const std::intmax_t& val_a,const std::intmax_t& val_b)
	{
		return (val_b == 0) ? val_a : gcd(val_b,val_a % val_b);
	}

	
	/**
	 * @brief Sign.
	 +
	 * Gives the sign of a number.
	 */
	inline constexpr std::intmax_t sign(const std::intmax_t& x)
	{
		return (x < 0) ? -1 : 1;
	}


	/**
	 * @brief Absolute value.
	 +
	 * Calculates the absolute value of a number.
	 */
	inline constexpr std::intmax_t iabs(const std::intmax_t& x)
	{
		return (x < 0) ? -x : x;
	}

	
	/**
	 * @brief Simplify the numerator.
	 +
	 * Simplifies a numerator, given a numerator and a denuminator.
	 */
	inline constexpr std::intmax_t simplify_num(const std::intmax_t& num,const std::intmax_t& den)
	{
		return (sign(den)*num)/gcd(iabs(num),iabs(den));
	}

	
	/**
	 * @brief Simplify the denominator.
	 +
	 * Simplifies a denominator, given a numerator and a denuminator.
	 */
	inline constexpr std::intmax_t simplify_den(const std::intmax_t& num,const std::intmax_t& den)
	{
		return iabs(den)/gcd(iabs(num),iabs(den));
	}
} // end of "detail" namespace


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_DETAIL_SPECIAL_FUNCTIONS_HPP
