// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file tags.hpp
 *
 * @brief Defines type tags.
 */


#ifndef CYNODELIC_MULINUM_TAGS_HPP
#define CYNODELIC_MULINUM_TAGS_HPP


#include <cstdint>
#include <cstddef>

#include <cynodelic/mulinum/config.hpp>


namespace cynodelic { namespace mulinum {


/**
 * @ingroup typetags
 * @brief Tag type for arithmetic types.
 */
template <typename IntType>
struct arithmetic_type_tag
{
	/// @brief Parent tag
	using parent_tag = arithmetic_type_tag;
	
	/// @brief Type of the value to hold
	using value_type = IntType;
};


/**
 * @ingroup typetags
 * @brief Tag type for `integer_c`.
 */
template <typename IntType>
struct integer_tag : public arithmetic_type_tag<IntType> {};


/**
 * @ingroup typetags
 * @brief Tag type for `rational`.
 */
struct rational_tag : public arithmetic_type_tag<std::intmax_t> {};


/**
 * @ingroup typetags
 * @brief Tag type for type containers.
 */
struct type_container_tag
{
	/// @brief Parent tag
	using parent_tag = type_container_tag;
};


/**
 * @ingroup typetags
 * @brief Tag type for integer containers.
 */
template <typename IntType>
struct integer_container_tag
{
	/// @brief Parent tag
	using parent_tag = integer_container_tag;
	
	/// @brief Type of the values to hold
	using value_type = IntType;
};


/**
 * @ingroup typetags
 * @brief Tag type for `vector`.
 */
struct vector_tag : public type_container_tag {};


/**
 * @ingroup typetags
 * @brief Tag type for `list` and `list_node`.
 */
struct list_tag : public type_container_tag {};


/**
 * @ingroup typetags
 * @brief Tag type for `vector_c`.
 */
template <typename IntType>
struct vector_c_tag : public integer_container_tag<IntType> {};


/**
 * @ingroup typetags
 * @brief Tag type for `list_c` and `list_node_c`.
 */
template <typename IntType>
struct list_c_tag : public integer_container_tag<IntType> {};


/**
 * @ingroup typetags
 * @brief Tag type for `string`.
 */
struct string_tag : public integer_container_tag<char> {};


/**
 * @ingroup typetags
 * @brief Same as `integer_tag<char>`.
 */
using char_c_tag = integer_tag<char>;

/**
 * @ingroup typetags
 * @brief Same as `integer_tag<unsigned char>`.
 */
using uchar_c_tag = integer_tag<unsigned char>;

/**
 * @ingroup typetags
 * @brief Same as `integer_tag<short>`.
 */
using short_c_tag = integer_tag<short>;

/**
 * @ingroup typetags
 * @brief Same as `integer_tag<unsigned short>`.
 */
using ushort_c_tag = integer_tag<unsigned short>;

/**
 * @ingroup typetags
 * @brief Same as `integer_tag<int>`.
 */
using int_c_tag = integer_tag<int>;

/**
 * @ingroup typetags
 * @brief Same as `integer_tag<unsigned int>`.
 */
using uint_c_tag = integer_tag<unsigned int>;

/**
 * @ingroup typetags
 * @brief Same as `integer_tag<long>`.
 */
using long_c_tag = integer_tag<long>;

/**
 * @ingroup typetags
 * @brief Same as `integer_tag<unsigned long>`.
 */
using ulong_c_tag = integer_tag<unsigned long>;

/**
 * @ingroup typetags
 * @brief Same as `integer_tag<long long>`.
 */
using llong_c_tag = integer_tag<long long>;

/**
 * @ingroup typetags
 * @brief Same as `integer_tag<unsigned long long>`.
 */
using ullong_c_tag = integer_tag<unsigned long long>;

/**
 * @ingroup typetags
 * @brief Same as `integer_tag<bool>`.
 */
using bool_c_tag = integer_tag<bool>;

/**
 * @ingroup typetags
 * @brief Same as `integer_tag<std::int8_t>`.
 */
using int8_c_tag = integer_tag<std::int8_t>;

/**
 * @ingroup typetags
 * @brief Same as `integer_tag<std::uint8_t>`.
 */
using uint8_c_tag = integer_tag<std::uint8_t>;

/**
 * @ingroup typetags
 * @brief Same as `integer_tag<std::int16_t>`.
 */
using int16_c_tag = integer_tag<std::int16_t>;

/**
 * @ingroup typetags
 * @brief Same as `integer_tag<std::uint16_t>`.
 */
using uint16_c_tag = integer_tag<std::uint16_t>;

/**
 * @ingroup typetags
 * @brief Same as `integer_tag<std::int32_t>`.
 */
using int32_c_tag = integer_tag<std::int32_t>;

/**
 * @ingroup typetags
 * @brief Same as `integer_tag<std::uint32_t>`.
 */
using uint32_c_tag = integer_tag<std::uint32_t>;

/**
 * @ingroup typetags
 * @brief Same as `integer_tag<std::int64_t>`.
 */
using int64_c_tag = integer_tag<std::int64_t>;

/**
 * @ingroup typetags
 * @brief Same as `integer_tag<std::uint64_t>`.
 */
using uint64_c_tag = integer_tag<std::uint64_t>;

/**
 * @ingroup typetags
 * @brief Same as `integer_tag<std::intmax_t>`.
 */
using intmax_c_tag = integer_tag<std::intmax_t>;

/**
 * @ingroup typetags
 * @brief Same as `integer_tag<std::uintmax_t>`.
 */
using uintmax_c_tag = integer_tag<std::uintmax_t>;

/**
 * @ingroup typetags
 * @brief Same as `integer_tag<std::size_t>`.
 */
using size_c_tag = integer_tag<std::size_t>;


/**
 * @ingroup typetags
 * @brief Same as `vector_c_tag<char>`. */
using char_vector_tag = vector_c_tag<char>;

/**
 * @ingroup typetags
 * @brief Same as `vector_c_tag<unsigned char>`.
 */
using uchar_vector_tag = vector_c_tag<unsigned char>;

/**
 * @ingroup typetags
 * @brief Same as `vector_c_tag<short>`.
 */
using short_vector_tag = vector_c_tag<short>;

/**
 * @ingroup typetags
 * @brief Same as `vector_c_tag<unsigned short>`.
 */
using ushort_vector_tag = vector_c_tag<unsigned short>;

/**
 * @ingroup typetags
 * @brief Same as `vector_c_tag<int>`.
 */
using int_vector_tag = vector_c_tag<int>;

/**
 * @ingroup typetags
 * @brief Same as `vector_c_tag<unsigned int>`.
 */
using uint_vector_tag = vector_c_tag<unsigned int>;

/**
 * @ingroup typetags
 * @brief Same as `vector_c_tag<long>`.
 */
using long_vector_tag = vector_c_tag<long>;

/**
 * @ingroup typetags
 * @brief Same as `vector_c_tag<unsigned long>`.
 */
using ulong_vector_tag = vector_c_tag<unsigned long>;

/**
 * @ingroup typetags
 * @brief Same as `vector_c_tag<long long>`.
 */
using llong_vector_tag = vector_c_tag<long long>;

/**
 * @ingroup typetags
 * @brief Same as `vector_c_tag<unsigned long long>`.
 */
using ullong_vector_tag = vector_c_tag<unsigned long long>;

/**
 * @ingroup typetags
 * @brief Same as `vector_c_tag<bool>`.
 */
using bool_vector_tag = vector_c_tag<bool>;

/**
 * @ingroup typetags
 * @brief Same as `vector_c_tag<std::int8_t>`.
 */
using int8_vector_tag = vector_c_tag<std::int8_t>;

/**
 * @ingroup typetags
 * @brief Same as `vector_c_tag<std::uint8_t>`.
 */
using uint8_vector_tag = vector_c_tag<std::uint8_t>;

/**
 * @ingroup typetags
 * @brief Same as `vector_c_tag<std::int16_t>`.
 */
using int16_vector_tag = vector_c_tag<std::int16_t>;

/**
 * @ingroup typetags
 * @brief Same as `vector_c_tag<std::uint16_t>`.
 */
using uint16_vector_tag = vector_c_tag<std::uint16_t>;

/**
 * @ingroup typetags
 * @brief Same as `vector_c_tag<std::int32_t>`.
 */
using int32_vector_tag = vector_c_tag<std::int32_t>;

/**
 * @ingroup typetags
 * @brief Same as `vector_c_tag<std::uint32_t>`.
 */
using uint32_vector_tag = vector_c_tag<std::uint32_t>;

/**
 * @ingroup typetags
 * @brief Same as `vector_c_tag<std::int64_t>`.
 */
using int64_vector_tag = vector_c_tag<std::int64_t>;

/**
 * @ingroup typetags
 * @brief Same as `vector_c_tag<std::uint64_t>`.
 */
using uint64_vector_tag = vector_c_tag<std::uint64_t>;

/**
 * @ingroup typetags
 * @brief Same as `vector_c_tag<std::intmax_t>`.
 */
using intmax_vector_tag = vector_c_tag<std::intmax_t>;

/**
 * @ingroup typetags
 * @brief Same as `vector_c_tag<std::uintmax_t>`.
 */
using uintmax_vector_tag = vector_c_tag<std::uintmax_t>;

/**
 * @ingroup typetags
 * @brief Same as `vector_c_tag<std::size_t>`.
 */
using size_t_vector_tag = vector_c_tag<std::size_t>;



/**
 * @ingroup typetags
 * @brief Same as `list_c_tag<char>`.
 */
using char_list_tag = list_c_tag<char>;

/**
 * @ingroup typetags
 * @brief Same as `list_c_tag<unsigned char>`.
 */
using uchar_list_tag = list_c_tag<unsigned char>;

/**
 * @ingroup typetags
 * @brief Same as `list_c_tag<short>`.
 */
using short_list_tag = list_c_tag<short>;

/**
 * @ingroup typetags
 * @brief Same as `list_c_tag<unsigned short>`.
 */
using ushort_list_tag = list_c_tag<unsigned short>;

/**
 * @ingroup typetags
 * @brief Same as `list_c_tag<int>`.
 */
using int_list_tag = list_c_tag<int>;

/**
 * @ingroup typetags
 * @brief Same as `list_c_tag<unsigned int>`.
 */
using uint_list_tag = list_c_tag<unsigned int>;

/**
 * @ingroup typetags
 * @brief Same as `list_c_tag<long>`.
 */
using long_list_tag = list_c_tag<long>;

/**
 * @ingroup typetags
 * @brief Same as `list_c_tag<unsigned long>`.
 */
using ulong_list_tag = list_c_tag<unsigned long>;

/**
 * @ingroup typetags
 * @brief Same as `list_c_tag<long long>`.
 */
using llong_list_tag = list_c_tag<long long>;

/**
 * @ingroup typetags
 * @brief Same as `list_c_tag<unsigned long long>`.
 */
using ullong_list_tag = list_c_tag<unsigned long long>;

/**
 * @ingroup typetags
 * @brief Same as `list_c_tag<bool>`.
 */
using bool_list_tag = list_c_tag<bool>;

/**
 * @ingroup typetags
 * @brief Same as `list_c_tag<std::int8_t>`.
 */
using int8_list_tag = list_c_tag<std::int8_t>;

/**
 * @ingroup typetags
 * @brief Same as `list_c_tag<std::uint8_t>`.
 */
using uint8_list_tag = list_c_tag<std::uint8_t>;

/**
 * @ingroup typetags
 * @brief Same as `list_c_tag<std::int16_t>`.
 */
using int16_list_tag = list_c_tag<std::int16_t>;

/**
 * @ingroup typetags
 * @brief Same as `list_c_tag<std::uint16_t>`.
 */
using uint16_list_tag = list_c_tag<std::uint16_t>;

/**
 * @ingroup typetags
 * @brief Same as `list_c_tag<std::int32_t>`.
 */
using int32_list_tag = list_c_tag<std::int32_t>;

/**
 * @ingroup typetags
 * @brief Same as `list_c_tag<std::uint32_t>`.
 */
using uint32_list_tag = list_c_tag<std::uint32_t>;

/**
 * @ingroup typetags
 * @brief Same as `list_c_tag<std::int64_t>`.
 */
using int64_list_tag = list_c_tag<std::int64_t>;

/**
 * @ingroup typetags
 * @brief Same as `list_c_tag<std::uint64_t>`.
 */
using uint64_list_tag = list_c_tag<std::uint64_t>;

/**
 * @ingroup typetags
 * @brief Same as `list_c_tag<std::intmax_t>`.
 */
using intmax_list_tag = list_c_tag<std::intmax_t>;

/**
 * @ingroup typetags
 * @brief Same as `list_c_tag<std::uintmax_t>`.
 */
using uintmax_list_tag = list_c_tag<std::uintmax_t>;

/**
 * @ingroup typetags
 * @brief Same as `list_c_tag<std::size_t>`.
 */
using size_t_list_tag = list_c_tag<std::size_t>;



}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_TAGS_HPP
