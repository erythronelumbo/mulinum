// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file integer_traits.hpp
 *
 * @brief Traits for integer types.
 */


#ifndef CYNODELIC_MULINUM_DETAIL_INTEGER_TRAITS_HPP
#define CYNODELIC_MULINUM_DETAIL_INTEGER_TRAITS_HPP


#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/equals.hpp>


namespace cynodelic { namespace mulinum {

namespace detail
{
	/**
	 * @brief Checks if a type is a signed integer.
	 */
	template <typename IntType>
	struct is_signed :
		bool_c<
			equals<IntType, char>::value ||
			equals<IntType, signed char>::value ||
			equals<IntType, short>::value ||
			equals<IntType, int>::value ||
			equals<IntType, long>::value ||
			equals<IntType, long long>::value
		>
	{};


	/**
	 * @brief Checks if a type is an unsigned integer.
	 */
	template <typename UIntType>
	struct is_unsigned :
		bool_c<
			equals<UIntType, unsigned char>::value ||
			equals<UIntType, unsigned short>::value ||
			equals<UIntType, unsigned int>::value ||
			equals<UIntType, unsigned long>::value ||
			equals<UIntType, unsigned long long>::value
		>
	{};


	/**
	 * @brief Checks if a type is an integer.
	 */
	template <typename IntType>
	struct is_integer : bool_c<is_signed<IntType>::value || is_unsigned<IntType>::value> {};
} // end of "detail" namespace

}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_DETAIL_INTEGER_TRAITS_HPP
