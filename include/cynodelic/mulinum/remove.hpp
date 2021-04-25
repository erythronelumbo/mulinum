// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file remove.hpp
 *
 * @brief Defines the `remove` metafunction.
 */


#ifndef CYNODELIC_MULINUM_REMOVE_HPP
#define CYNODELIC_MULINUM_REMOVE_HPP


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
 * @brief Helper for `remove`.
 */
template <typename, typename, std::size_t>
struct remove_impl {};


/**
 * @brief Helper for `remove`.
 */
template <typename First, typename... Others, std::size_t Idx, std::size_t Count>
struct remove_impl<vector<First, Others...>, integer_c<std::size_t, Idx>, Count>
{
	using type = concat<
		if_<
			(Count == Idx),
			vector<>,
			vector<First>
		>,
		typename remove_impl<
			vector<Others...>,
			integer_c<std::size_t, Idx>,
			Count + 1
		>::type
	>;
};


/**
 * @brief Helper for `remove`.
 */
template <std::size_t Idx, std::size_t Count>
struct remove_impl<vector<>, integer_c<std::size_t, Idx>, Count>
{
	using type = vector<>;
};


/**
 * @brief Helper for `remove`.
 */
template <typename Head, typename Tail, std::size_t Idx, std::size_t Count>
struct remove_impl<list_node<Head, Tail>, integer_c<std::size_t, Idx>, Count>
{
	using type = concat<
		if_<
			(Count == Idx),
			null_type,
			list_node<Head, null_type>
		>,
		typename remove_impl<
			Tail,
			integer_c<std::size_t, Idx>,
			Count + 1
		>::type
	>;
};


/**
 * @brief Helper for `remove`.
 */
template <std::size_t Idx, std::size_t Count>
struct remove_impl<null_type, integer_c<std::size_t, Idx>, Count>
{
	using type = null_type;
};


/**
 * @brief Helper for `remove`.
 */
template <typename IntType, IntType First, IntType... Others, std::size_t Idx, std::size_t Count>
struct remove_impl<vector_c<IntType, First, Others...>, integer_c<std::size_t, Idx>, Count>
{
	using type = concat<
		if_<
			(Count == Idx),
			vector_c<IntType>,
			vector_c<IntType, First>
		>,
		typename remove_impl<
			vector_c<IntType,Others...>,
			integer_c<std::size_t, Idx>,
			Count + 1
		>::type
	>;
};


/**
 * @brief Helper for `remove`.
 */
template <typename IntType, std::size_t Idx, std::size_t Count>
struct remove_impl<vector_c<IntType>, integer_c<std::size_t, Idx>, Count>
{
	using type = vector_c<IntType>;
};


/**
 * @brief Helper for `remove`.
 */
template <typename IntType, IntType Head, typename Tail, std::size_t Idx, std::size_t Count>
struct remove_impl<list_node_c<IntType, Head, Tail>, integer_c<std::size_t, Idx>, Count>
{
	using type = concat<
		if_<
			(Count == Idx),
			null_type,
			list_node_c<IntType, Head, null_type>
		>,
		typename remove_impl<
			Tail,
			integer_c<std::size_t, Idx>,
			Count + 1
		>::type
	>;
};


/**
 * @brief Helper for `remove`.
 */
template <char First, char... Others, std::size_t Idx, std::size_t Count>
struct remove_impl<string<First, Others...>, integer_c<std::size_t, Idx>, Count>
{
	using type = concat<
		if_<
			(Count == Idx),
			string<>,
			string<First>
		>,
		typename remove_impl<
			string<Others...>,
			integer_c<std::size_t, Idx>,
			Count + 1
		>::type
	>;
};


/**
 * @brief Helper for `remove`.
 */
template <std::size_t Idx, std::size_t Count>
struct remove_impl<string<>, integer_c<std::size_t, Idx>, Count>
{
	using type = string<>;
};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup containerops
 * @brief Removes an item
 *
 * Removes an element from a container.
 *
 * @param Container The container.
 * @param Idx       The position where the element to remove is (a
 *                  @ref size_c).
 */
template <typename Container, typename Idx>
using remove = typename remove_impl<Container, Idx, 0>::type;


/**
 * @ingroup containerops
 * @brief Removes an item
 *
 * Removes an element from a container.
 *
 * @param Container The container.
 * @param Idx       The position where the element to remove is.
 */
template <typename Container, std::size_t Idx>
using remove_c = typename remove_impl<Container, size_c<Idx>, 0>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_REMOVE_HPP
