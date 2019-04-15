// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file vector_c.hpp
 *
 * @brief Defines the `vector_c` integer container.
 */


#ifndef CYNODELIC_MULINUM_VECTOR_C_HPP
#define CYNODELIC_MULINUM_VECTOR_C_HPP


#include <cstdlib>
#include <cstddef>
#include <cstdint>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/tags.hpp>


namespace cynodelic { namespace mulinum {


/**
 * @ingroup intcontainers
 * @brief Integer container.
 *
 * Contains a sequence of integers.
 *
 * @param IntType  The type of all items (must be an integer).
 * @param Items... All the values contained.
 */
template <typename IntType,IntType... Items>
struct vector_c
{
	/// @brief Reference to itself.
	using type = vector_c;

	/// @brief Type of the contained items.
	using value_type = IntType;

	/// @brief Type tag for this container.
	using type_tag = vector_c_tag<IntType>;

	/// @brief Size (number of items).
	static constexpr std::size_t size = sizeof...(Items);

	/// @brief Array containing all the items.
	static constexpr value_type data[size] = {Items...};

	/// @brief Acceses an element from the container, if treated as a value.
	constexpr IntType operator[](const std::size_t& idx) const
	{
		return data[idx];
	}
};

template <typename IntType,IntType... Items>
constexpr std::size_t vector_c<IntType,Items...>::size;

template <typename IntType,IntType... Items>
constexpr IntType vector_c<IntType,Items...>::data[vector_c<IntType,Items...>::size];


/**
 * @ingroup intcontainers
 * @brief Empty integer container.
 *
 * Specialization for empty @ref integer_c s. It does not have the `data`
 * member array, as well as the array access operator will always return the
 * default value of `IntType`.
 *
 * @param IntType The type of all items (must be an integer).
 */
template <typename IntType>
struct vector_c<IntType>
{
	/// @brief Reference to itself.
	using type = vector_c;

	/// @brief Type of the contained items.
	using value_type = IntType;

	/// @brief Type tag for this container.
	using type_tag = vector_c_tag<IntType>;

	/// @brief Size (number of items).
	static constexpr std::size_t size = 0;

	/// @brief Returns the default value for `IntType`.
	constexpr IntType operator[](const std::size_t&) const
	{
		return IntType{};
	}
};

template <typename IntType>
constexpr std::size_t vector_c<IntType>::size;


template <char... Items>               using char_vector    = vector_c<char,Items...>;               /**< @brief Same as @ref vector_c<char,Items...>. */
template <unsigned char... Items>      using uchar_vector   = vector_c<unsigned char,Items...>;      /**< @brief Same as @ref vector_c<unsigned char,Items...>. */
template <short... Items>              using short_vector   = vector_c<short,Items...>;              /**< @brief Same as @ref vector_c<short,Items...>. */
template <unsigned short... Items>     using ushort_vector  = vector_c<unsigned short,Items...>;     /**< @brief Same as @ref vector_c<unsigned short,Items...>. */
template <int... Items>                using int_vector     = vector_c<int,Items...>;                /**< @brief Same as @ref vector_c<int,Items...>. */
template <unsigned int... Items>       using uint_vector    = vector_c<unsigned int,Items...>;       /**< @brief Same as @ref vector_c<unsigned int,Items...>. */
template <long... Items>               using long_vector    = vector_c<long,Items...>;               /**< @brief Same as @ref vector_c<long,Items...>. */
template <unsigned long... Items>      using ulong_vector   = vector_c<unsigned long,Items...>;      /**< @brief Same as @ref vector_c<unsigned long,Items...>. */
template <long long... Items>          using llong_vector   = vector_c<long long,Items...>;          /**< @brief Same as @ref vector_c<long long,Items...>. */
template <unsigned long long... Items> using ullong_vector  = vector_c<unsigned long long,Items...>; /**< @brief Same as @ref vector_c<unsigned long long,Items...>. */
template <bool... Items>               using bool_vector    = vector_c<bool,Items...>;               /**< @brief Same as @ref vector_c<bool,Items...>. */

template <std::int8_t... Items>        using int8_vector    = vector_c<std::int8_t,Items...>;        /**< @brief Same as @ref vector_c<std::int8_t,Items...>. */
template <std::uint8_t... Items>       using uint8_vector   = vector_c<std::uint8_t,Items...>;       /**< @brief Same as @ref vector_c<std::uint8_t,Items...>. */
template <std::int16_t... Items>       using int16_vector   = vector_c<std::int16_t,Items...>;       /**< @brief Same as @ref vector_c<std::int16_t,Items...>. */
template <std::uint16_t... Items>      using uint16_vector  = vector_c<std::uint16_t,Items...>;      /**< @brief Same as @ref vector_c<std::uint16_t,Items...>. */
template <std::int32_t... Items>       using int32_vector   = vector_c<std::int32_t,Items...>;       /**< @brief Same as @ref vector_c<std::int32_t,Items...>. */
template <std::uint32_t... Items>      using uint32_vector  = vector_c<std::uint32_t,Items...>;      /**< @brief Same as @ref vector_c<std::uint32_t,Items...>. */
template <std::int64_t... Items>       using int64_vector   = vector_c<std::int64_t,Items...>;       /**< @brief Same as @ref vector_c<std::int64_t,Items...>. */
template <std::uint64_t... Items>      using uint64_vector  = vector_c<std::uint64_t,Items...>;      /**< @brief Same as @ref vector_c<std::uint64_t,Items...>. */
template <std::intmax_t... Items>      using intmax_vector  = vector_c<std::intmax_t,Items...>;      /**< @brief Same as @ref vector_c<std::intmax_t,Items...>. */
template <std::uintmax_t... Items>     using uintmax_vector = vector_c<std::uintmax_t,Items...>;     /**< @brief Same as @ref vector_c<std::uintmax_t,Items...>. */


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_VECTOR_C_HPP
