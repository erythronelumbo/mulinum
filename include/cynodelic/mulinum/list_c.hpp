// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file list_c.hpp
 *
 * @brief Defines the `list_c_node` integer container and the `list_c` helper
 * type.
 */


#ifndef CYNODELIC_MULINUM_LIST_C_HPP
#define CYNODELIC_MULINUM_LIST_C_HPP


#include <cstddef>
#include <cstdint>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/tags.hpp>
#include <cynodelic/mulinum/null_type.hpp>


namespace cynodelic { namespace mulinum {


template <typename IntType,IntType,typename>
struct list_node_c;


/**
 * @ingroup intcontainers
 * @brief Integer list node.
 *
 * A linked list node that contains an integer and other nodes (or a
 * @ref null_type as a list end).
 */
template <typename IntType,IntType Val,IntType NextVal,typename Tail>
struct list_node_c<IntType,Val,list_node_c<IntType,NextVal,Tail>>
{
	/// @brief Its own type.
	using type = list_node_c<IntType,Val,list_node_c<IntType,NextVal,Tail>>;

	/// @brief Type of the contained items.
	using value_type = IntType;

	/// @brief The item contained in the node.
	static constexpr IntType head = Val;

	/// @brief The list's tail.
	using tail = list_node_c<IntType,NextVal,Tail>;

	/// @brief Tag associated to this type
	using type_tag = list_c_tag<IntType>;

	/// @brief Size (number of items).
	static constexpr std::size_t size = 1 + tail::size;
};

template <typename IntType,IntType Val,IntType NextVal,typename Tail>
constexpr IntType list_node_c<IntType,Val,list_node_c<IntType,NextVal,Tail>>::head;

template <typename IntType,IntType Val,IntType NextVal,typename Tail>
constexpr std::size_t list_node_c<IntType,Val,list_node_c<IntType,NextVal,Tail>>::size;


/**
 * @ingroup intcontainers
 * @brief Integer list node with null end.
 *
 * Specialization for a linked list node with null end (@ref null_type).
 */
template <typename IntType,IntType Val>
struct list_node_c<IntType,Val,null_type>
{
	/// @brief Its own type.
	using type = list_node_c<IntType,Val,null_type>;

	/// @brief Type of the contained items.
	using value_type = IntType;

	/// @brief The item contained in the node.
	static constexpr IntType head = Val;

	/// @brief The list's end.
	using tail = null_type;

	/// @brief Tag associated to this type
	using type_tag = list_c_tag<IntType>;

	/// @brief Size (number of items).
	static constexpr std::size_t size = 1;
};

template <typename IntType,IntType Val>
constexpr IntType list_node_c<IntType,Val,null_type>::head;

template <typename IntType,IntType Val>
constexpr std::size_t list_node_c<IntType,Val,null_type>::size;


/**
 * @ingroup intcontainers
 * @brief Same as `list_node_c<char,Val,Tail>`.
 */
template <char Val,typename Tail = null_type>
using char_lnode = list_node_c<char,Val,Tail>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_node_c<unsigned char,Val,Tail>`.
 */
template <unsigned char Val,typename Tail = null_type>
using uchar_lnode = list_node_c<unsigned char,Val,Tail>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_node_c<short,Val,Tail>`.
 */
template <short Val,typename Tail = null_type>
using short_lnode = list_node_c<short,Val,Tail>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_node_c<unsigned short,Val,Tail>`.
 */
template <unsigned short Val,typename Tail = null_type>
using ushort_lnode = list_node_c<unsigned short,Val,Tail>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_node_c<int,Val,Tail>`.
 */
template <int Val,typename Tail = null_type>
using int_lnode = list_node_c<int,Val,Tail>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_node_c<unsigned,Val,Tail>`.
 */
template <unsigned int Val,typename Tail = null_type>
using uint_lnode = list_node_c<unsigned int,Val,Tail>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_node_c<long,Val,Tail>`.
 */
template <long Val,typename Tail = null_type>
using long_lnode = list_node_c<long,Val,Tail>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_node_c<unsigned long,Val,Tail>`.
 */
template <unsigned long Val,typename Tail = null_type>
using ulong_lnode = list_node_c<unsigned long,Val,Tail>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_node_c<long long,Val,Tail>`.
 */
template <long long Val,typename Tail = null_type>
using llong_lnode = list_node_c<long long,Val,Tail>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_node_c<unsigned long long,Val,Tail>`.
 */
template <unsigned long long Val,typename Tail = null_type>
using ullong_lnode = list_node_c<unsigned long long,Val,Tail>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_node_c<bool,Val,Tail>`.
 */
template <bool Val,typename Tail = null_type>
using bool_lnode = list_node_c<bool,Val,Tail>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_node_c<std::int8_t,Val,Tail>`.
 */
template <std::int8_t Val,typename Tail = null_type>
using int8_lnode = list_node_c<std::int8_t,Val,Tail>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_node_c<std::uint8_t,Val,Tail>`.
 */
template <std::uint8_t Val,typename Tail = null_type>
using uint8_lnode = list_node_c<std::uint8_t,Val,Tail>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_node_c<std::int16_t,Val,Tail>`.
 */
template <std::int16_t Val,typename Tail = null_type>
using int16_lnode = list_node_c<std::int16_t,Val,Tail>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_node_c<std::uint16_t,Val,Tail>`.
 */
template <std::uint16_t Val,typename Tail = null_type>
using uint16_lnode = list_node_c<std::uint16_t,Val,Tail>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_node_c<std::int32_t,Val,Tail>`.
 */
template <std::int32_t Val,typename Tail = null_type>
using int32_lnode = list_node_c<std::int32_t,Val,Tail>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_node_c<std::uint32_t,Val,Tail>`.
 */
template <std::uint32_t Val,typename Tail = null_type>
using uint32_lnode = list_node_c<std::uint32_t,Val,Tail>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_node_c<std::int64_t,Val,Tail>`.
 */
template <std::int64_t Val,typename Tail = null_type>
using int64_lnode = list_node_c<std::int64_t,Val,Tail>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_node_c<std::uint64_t,Val,Tail>`.
 */
template <std::uint64_t Val,typename Tail = null_type>
using uint64_lnode = list_node_c<std::uint64_t,Val,Tail>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_node_c<std::intmax_t,Val,Tail>`.
 */
template <std::intmax_t Val,typename Tail = null_type>
using intmax_lnode = list_node_c<std::intmax_t,Val,Tail>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_node_c<std::uintmax_t,Val,Tail>`.
 */
template <std::uintmax_t Val,typename Tail = null_type>
using uintmax_lnode = list_node_c<std::uintmax_t,Val,Tail>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_node_c<std::size_t,Val,Tail>`.
 */
template <std::size_t Val,typename Tail = null_type>
using size_t_lnode = list_node_c<std::size_t,Val,Tail>;


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `list_c`.
 */
template <typename IntType,IntType...>
struct list_c_impl;


/**
 * @brief Helper for `list_c`.
 */
template <typename IntType,IntType First,IntType... Others>
struct list_c_impl<IntType,First,Others...>
{
	using type = list_node_c<
		IntType,
		First,
		typename list_c_impl<IntType,Others...>::type
	>;
};


/**
 * @brief Helper for `list_c`.
 */
template <typename IntType>
struct list_c_impl<IntType>
{
	using type = null_type;
};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup intcontainers
 * @brief Integer list helper.
 *
 * Helper for declaring a linked list made of @ref list_node_c s.
 */
template <typename IntType,IntType... Items>
using list_c = typename list_c_impl<IntType,Items...>::type;



/**
 * @ingroup intcontainers
 * @brief Same as `list_c<char,Items...>`.
 */
template <char... Items>
using char_list = list_c<char,Items...>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_c<unsigned char,Items...>`.
 */
template <unsigned char... Items>
using uchar_list = list_c<unsigned char,Items...>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_c<short,Items...>`.
 */
template <short... Items>
using short_list = list_c<short,Items...>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_c<unsigned short,Items...>`.
 */
template <unsigned short... Items>
using ushort_list = list_c<unsigned short,Items...>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_c<int,Items...>`.
 */
template <int... Items>
using int_list = list_c<int,Items...>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_c<unsigned,Items...>`.
 */
template <unsigned int... Items>
using uint_list = list_c<unsigned int,Items...>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_c<long,Items...>`.
 */
template <long... Items>
using long_list = list_c<long,Items...>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_c<unsigned long,Items...>`.
 */
template <unsigned long... Items>
using ulong_list = list_c<unsigned long,Items...>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_c<long long,Items...>`.
 */
template <long long... Items>
using llong_list = list_c<long long,Items...>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_c<unsigned long long,Items...>`.
 */
template <unsigned long long... Items>
using ullong_list = list_c<unsigned long long,Items...>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_c<bool,Items...>`.
 */
template <bool... Items>
using bool_list = list_c<bool,Items...>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_c<std::int8_t,Items...>`.
 */
template <std::int8_t... Items>
using int8_list = list_c<std::int8_t,Items...>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_c<std::uint8_t,Items...>`.
 */
template <std::uint8_t... Items>
using uint8_list = list_c<std::uint8_t,Items...>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_c<std::int16_t,Items...>`.
 */
template <std::int16_t... Items>
using int16_list = list_c<std::int16_t,Items...>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_c<std::uint16_t,Items...>`.
 */
template <std::uint16_t... Items>
using uint16_list = list_c<std::uint16_t,Items...>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_c<std::int32_t,Items...>`.
 */
template <std::int32_t... Items>
using int32_list = list_c<std::int32_t,Items...>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_c<std::uint32_t,Items...>`.
 */
template <std::uint32_t... Items>
using uint32_list = list_c<std::uint32_t,Items...>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_c<std::int64_t,Items...>`.
 */
template <std::int64_t... Items>
using int64_list = list_c<std::int64_t,Items...>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_c<std::uint64_t,Items...>`.
 */
template <std::uint64_t... Items>
using uint64_list = list_c<std::uint64_t,Items...>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_c<std::intmax_t,Items...>`.
 */
template <std::intmax_t... Items>
using intmax_list = list_c<std::intmax_t,Items...>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_c<std::uintmax_t,Items...>`.
 */
template <std::uintmax_t... Items>
using uintmax_list = list_c<std::uintmax_t,Items...>;

/**
 * @ingroup intcontainers
 * @brief Same as `list_c<std::size_t,Items...>`.
 */
template <std::size_t... Items>
using size_t_list = list_c<std::size_t,Items...>;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_LIST_C_HPP
