// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file integer_c.hpp
 *
 * @brief Defines the `integer_c` type.
 */


#ifndef CYNODELIC_MULINUM_INTEGER_C_HPP
#define CYNODELIC_MULINUM_INTEGER_C_HPP


#include <cstddef>
#include <cstdint>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/tags.hpp>


namespace cynodelic { namespace mulinum {


/**
 * @ingroup arithmetictypes
 * @brief Integer wrapper.
 *
 * Wraps an integral value as a type.
 *
 * @param IntType The type of the wrapped value.
 * @param Value   The wrapped value.
 */
template <typename IntType,IntType Value>
struct integer_c
{
	/// @brief Reference to itself.
	using type = integer_c;

	/// @brief Type of the wrapped value.
	using value_type = IntType;

	/// @brief Type tag for this type.
	using type_tag = integer_tag<IntType>;
	
	/// @brief Wrapped value.
	static constexpr IntType value = Value;

	/// @brief Casts to an integer type.
	constexpr operator IntType() const
	{
		return value;
	}
};

template <typename IntType,IntType Value>
constexpr IntType integer_c<IntType,Value>::value;


/**
 * @ingroup arithmetictypes
 * @brief Same as `integer_c<char,Value>`.
 */
template <char Value>
using char_c = integer_c<char,Value>;

/**
 * @ingroup arithmetictypes
 * @brief Same as `integer_c<unsigned char,Value>`.
 */
template <unsigned char Value>
using uchar_c = integer_c<unsigned char,Value>;

/**
 * @ingroup arithmetictypes
 * @brief Same as `integer_c<short,Value>`.
 */
template <short Value>
using short_c = integer_c<short,Value>;

/**
 * @ingroup arithmetictypes
 * @brief Same as `integer_c<unsigned short,Value>`.
 */
template <unsigned short Value>
using ushort_c = integer_c<unsigned short,Value>;

/**
 * @ingroup arithmetictypes
 * @brief Same as `integer_c<int,Value>`.
 */
template <int Value>
using int_c = integer_c<int,Value>;

/**
 * @ingroup arithmetictypes
 * @brief Same as `integer_c<unsigned int,Value>`.
 */
template <unsigned int Value>
using uint_c = integer_c<unsigned int,Value>;

/**
 * @ingroup arithmetictypes
 * @brief Same as `integer_c<long,Value>`.
 */
template <long Value>
using long_c = integer_c<long,Value>;

/**
 * @ingroup arithmetictypes
 * @brief Same as `integer_c<unsigned long,Value>`.
 */
template <unsigned long Value>
using ulong_c = integer_c<unsigned long,Value>;

/**
 * @ingroup arithmetictypes
 * @brief Same as `integer_c<long long,Value>`.
 */
template <long long Value>
using llong_c = integer_c<long long,Value>;

/**
 * @ingroup arithmetictypes
 * @brief Same as `integer_c<unsigned long long,Value>`.
 */
template <unsigned long long Value>
using ullong_c = integer_c<unsigned long long,Value>;

/**
 * @ingroup arithmetictypes
 * @brief Same as `integer_c<bool,Value>`.
 */
template <bool Value>
using bool_c = integer_c<bool,Value>;


/**
 * @ingroup arithmetictypes
 * @brief Same as `integer_c<std::int8_t,Value>`.
 */
template <std::int8_t Value>
using int8_c = integer_c<std::int8_t,Value>;

/**
 * @ingroup arithmetictypes
 * @brief Same as `integer_c<std::uint8_t,Value>`.
 */
template <std::uint8_t Value>
using uint8_c = integer_c<std::uint8_t,Value>;

/**
 * @ingroup arithmetictypes
 * @brief Same as `integer_c<std::int16_t,Value>`.
 */
template <std::int16_t Value>
using int16_c = integer_c<std::int16_t,Value>;

/**
 * @ingroup arithmetictypes
 * @brief Same as `integer_c<std::uint16_t,Value>`.
 */
template <std::uint16_t Value>
using uint16_c = integer_c<std::uint16_t,Value>;

/**
 * @ingroup arithmetictypes
 * @brief Same as `integer_c<std::int32_t,Value>`.
 */
template <std::int32_t Value>
using int32_c = integer_c<std::int32_t,Value>;

/**
 * @ingroup arithmetictypes
 * @brief Same as `integer_c<std::uint32_t,Value>`.
 */
template <std::uint32_t Value>
using uint32_c = integer_c<std::uint32_t,Value>;

/**
 * @ingroup arithmetictypes
 * @brief Same as `integer_c<std::int64_t,Value>`.
 */
template <std::int64_t Value>
using int64_c = integer_c<std::int64_t,Value>;

/**
 * @ingroup arithmetictypes
 * @brief Same as `integer_c<std::uint64_t,Value>`.
 */
template <std::uint64_t Value>
using uint64_c = integer_c<std::uint64_t,Value>;

/**
 * @ingroup arithmetictypes
 * @brief Same as `integer_c<std::intmax_t,Value>`.
 */
template <std::intmax_t Value>
using intmax_c = integer_c<std::intmax_t,Value>;

/**
 * @ingroup arithmetictypes
 * @brief Same as `integer_c<std::uintmax_t,Value>`.
 */
template <std::uintmax_t Value>
using uintmax_c = integer_c<std::uintmax_t,Value>;

/**
 * @ingroup arithmetictypes
 * @brief Same as `integer_c<std::size_t,Value>`.
 */
template <std::size_t Value>
using size_c = integer_c<std::size_t,Value>;


/**
 * @ingroup arithmetictypes
 * @brief Same as `integer_c<bool,false>`.
 */
using false_ = bool_c<false>;

/**
 * @ingroup arithmetictypes
 * @brief Same as `integer_c<bool,true>`.
 */
using true_ = bool_c<true>;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_INTEGER_C_HPP
