// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file rational.hpp
 *
 * @brief Defines the `rational` type.
 */


#ifndef CYNODELIC_MULINUM_RATIONAL_HPP
#define CYNODELIC_MULINUM_RATIONAL_HPP


#include <cstddef>
#include <cstdint>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/tags.hpp>
#include <cynodelic/mulinum/detail/special_functions.hpp>


namespace cynodelic { namespace mulinum {


/**
 * @ingroup arithmetictypes
 * @brief Rational type.
 *
 * A rational (fraction) type.
 *
 * @param Num The numerator.
 * @param Den The denominator (default: `1`).
 */
template <std::intmax_t Num, std::intmax_t Den = 1>
struct rational
{
	/// @brief Reference to itself.
	using type = rational;

	/// @brief Value type of numerator and denominator.
	using value_type = std::intmax_t;

	/// @brief The simplified numerator.
	static constexpr value_type num = detail::simplify_num(Num, Den);

	/// @brief The simplified denominator.
	static constexpr value_type den = detail::simplify_den(Num, Den);

	/// @brief Type tag.
	using type_tag = rational_tag;

	/// @brief Casts to `float`.
	constexpr operator float() const
	{
		return static_cast<float>(num)/static_cast<float>(den);
	}

	/// @brief Casts to `double`.
	constexpr operator double() const
	{
		return static_cast<double>(num)/static_cast<double>(den);
	}

	template <typename FloatType>
	static inline constexpr FloatType to_floating_point()
	{
		return static_cast<FloatType>(num)/static_cast<FloatType>(den);
	}
};

template <std::intmax_t Num, std::intmax_t Den>
constexpr std::intmax_t rational<Num, Den>::num;

template <std::intmax_t Num, std::intmax_t Den>
constexpr std::intmax_t rational<Num, Den>::den;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_RATIONAL_HPP
