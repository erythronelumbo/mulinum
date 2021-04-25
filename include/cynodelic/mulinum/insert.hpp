// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file insert.hpp
 *
 * @brief Defines the `insert` metafunction.
 */


#ifndef CYNODELIC_MULINUM_INSERT_HPP
#define CYNODELIC_MULINUM_INSERT_HPP


#include <cstddef>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/if.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/null_type.hpp>
#include <cynodelic/mulinum/vector.hpp>
#include <cynodelic/mulinum/list.hpp>
#include <cynodelic/mulinum/string.hpp>
#include <cynodelic/mulinum/vector_c.hpp>
#include <cynodelic/mulinum/list_c.hpp>
#include <cynodelic/mulinum/concat.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `insert`.
 */
template <typename, typename, typename, std::size_t>
struct insert_impl {};


/**
 * @brief Helper for `insert`.
 */
template <typename First, typename... Others, typename Item, std::size_t Idx, std::size_t Count>
struct insert_impl<vector<First, Others...>, Item, integer_c<std::size_t, Idx>, Count>
{
	using type = concat<
		if_<
			(Count == Idx),
			vector<Item, First>,
			vector<First>
		>,
		typename insert_impl<
			vector<Others...>,
			Item,
			integer_c<std::size_t, Idx>,
			Count + 1
		>::type
	>;
};


/**
 * @brief Helper for `insert`.
 */
template <typename Item, std::size_t Idx, std::size_t Count>
struct insert_impl<vector<>, Item, integer_c<std::size_t, Idx>, Count>
{
	using type = if_<
		(Count == Idx),
		vector<Item>,
		vector<>
	>;
};


/**
 * @brief Helper for `insert`.
 */
template <typename Head, typename Tail, typename Item, std::size_t Idx, std::size_t Count>
struct insert_impl<list_node<Head, Tail>, Item, integer_c<std::size_t, Idx>, Count>
{
	using type = concat<
		if_<
			(Count == Idx),
			list_node<Item, list_node<Head, null_type>>,
			list_node<Head, null_type>
		>,
		typename insert_impl<
			Tail,
			Item,
			integer_c<std::size_t, Idx>,
			Count + 1
		>::type
	>;
};


/**
 * @brief Helper for `insert`.
 */
template <typename Item, std::size_t Idx, std::size_t Count>
struct insert_impl<null_type, Item, integer_c<std::size_t, Idx>, Count>
{
	using type = if_<
		(Count == Idx),
		list_node<Item, null_type>,
		null_type
	>;
};


/**
 * @brief Helper for `insert`.
 */
template <typename IntType, IntType First, IntType... Others, IntType Item, std::size_t Idx, std::size_t Count>
struct insert_impl<vector_c<IntType, First, Others...>, integer_c<IntType, Item>, integer_c<std::size_t, Idx>, Count>
{
	using type = concat<
		if_<
			(Count == Idx),
			vector_c<IntType, Item, First>,
			vector_c<IntType, First>
		>,
		typename insert_impl<
			vector_c<IntType, Others...>,
			integer_c<IntType, Item>,
			integer_c<std::size_t, Idx>,
			Count + 1
		>::type
	>;
};


/**
 * @brief Helper for `insert`.
 */
template <typename IntType, IntType Item, std::size_t Idx, std::size_t Count>
struct insert_impl<vector_c<IntType>, integer_c<IntType, Item>, integer_c<std::size_t, Idx>, Count>
{
	using type = if_<
		(Count == Idx),
		vector_c<IntType, Item>,
		vector_c<IntType>
	>;
};


/**
 * @brief Helper for `insert`.
 */
template <typename IntType, IntType Head, typename Tail, IntType Item, std::size_t Idx, std::size_t Count>
struct insert_impl<list_node_c<IntType, Head, Tail>, integer_c<IntType, Item>, integer_c<std::size_t, Idx>, Count>
{
	using type = concat<
		if_<
			(Count == Idx),
			list_node_c<IntType, Item, list_node_c<IntType, Head, null_type>>,
			list_node_c<IntType, Head, null_type>
		>,
		typename insert_impl<
			Tail,
			integer_c<IntType, Item>,
			integer_c<std::size_t, Idx>,
			Count + 1
		>::type
	>;
};


/**
 * @brief Helper for `insert`.
 */
template <typename IntType, IntType Item, std::size_t Idx, std::size_t Count>
struct insert_impl<null_type, integer_c<IntType, Item>, integer_c<std::size_t, Idx>, Count>
{
	using type = if_<
		(Count == Idx),
		list_node_c<IntType, Item, null_type>,
		null_type
	>;
};


/**
 * @brief Helper for `insert`.
 */
template <char First, char... Others, char Item, std::size_t Idx, std::size_t Count>
struct insert_impl<string<First, Others...>, char_c<Item>, integer_c<std::size_t, Idx>, Count>
{
	using type = concat<
		if_<
			(Count == Idx),
			string<Item, First>,
			string<First>
		>,
		typename insert_impl<
			string<Others...>,
			char_c<Item>,
			integer_c<std::size_t, Idx>,
			Count + 1
		>::type
	>;
};


/**
 * @brief Helper for `insert`.
 */
template <char Item, std::size_t Idx, std::size_t Count>
struct insert_impl<string<>, char_c<Item>, integer_c<std::size_t, Idx>, Count>
{
	using type = if_<
		(Count == Idx),
		string<Item>,
		string<>
	>;
};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup containerops
 * @brief Inserts an element
 *
 * Inserts an element to a container.
 *
 * @param Container The container.
 * @param Item      The item to insert.
 * @param Idx       The position where the element to insert is (a
 *                  @ref size_c).
 */
template <typename Container, typename Item, typename Idx>
using insert = typename insert_impl<Container, Item, Idx, 0>::type;


/**
 * @ingroup containerops
 * @brief Inserts an element
 *
 * Inserts an element to a container.
 *
 * @param Container The container.
 * @param Item      The item to insert.
 * @param Idx       The position where the element to insert is.
 */
template <typename Container, typename Item, std::size_t Idx>
using insert_c = typename insert_impl<Container, Item, size_c<Idx>, 0>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_INSERT_HPP
