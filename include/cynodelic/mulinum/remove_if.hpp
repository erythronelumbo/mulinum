// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file remove_if.hpp
 *
 * @brief Defines the `remove_if` metafunction.
 */


#ifndef CYNODELIC_MULINUM_REMOVE_IF_HPP
#define CYNODELIC_MULINUM_REMOVE_IF_HPP


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
 * @brief Helper for `remove_if`.
 */
template <typename, typename, std::size_t>
struct remove_if_impl {};


/**
 * @brief Helper for `remove_if`.
 */
template <typename First, typename... Others, typename UnaryPredicate, std::size_t Count>
struct remove_if_impl<vector<First, Others...>, UnaryPredicate, Count>
{
	using type = concat<
		if_<
			UnaryPredicate::template apply<First>::type::value,
			vector<>,
			vector<First>
		>,
		typename remove_if_impl<
			vector<Others...>,
			UnaryPredicate,
			Count + 1
		>::type
	>;
};


/**
 * @brief Helper for `remove_if`.
 */
template <typename UnaryPredicate, std::size_t Count>
struct remove_if_impl<vector<>, UnaryPredicate, Count>
{
	using type = vector<>;
};


/**
 * @brief Helper for `remove_if`.
 */
template <typename Head, typename Tail, typename UnaryPredicate, std::size_t Count>
struct remove_if_impl<list_node<Head, Tail>, UnaryPredicate, Count>
{
	using type = concat<
		if_<
			UnaryPredicate::template apply<Head>::type::value,
			null_type,
			list_node<Head, null_type>
		>,
		typename remove_if_impl<
			Tail,
			UnaryPredicate,
			Count + 1
		>::type
	>;
};


/**
 * @brief Helper for `remove_if`.
 */
template <typename UnaryPredicate, std::size_t Count>
struct remove_if_impl<null_type, UnaryPredicate, Count>
{
	using type = null_type;
};


/**
 * @brief Helper for `remove_if`.
 */
template <typename IntType, IntType First, IntType... Others, typename UnaryPredicate, std::size_t Count>
struct remove_if_impl<vector_c<IntType, First, Others...>, UnaryPredicate, Count>
{
	using type = concat<
		if_<
			UnaryPredicate::template apply<integer_c<IntType, First>>::type::value,
			vector_c<IntType>,
			vector_c<IntType, First>
		>,
		typename remove_if_impl<
			vector_c<IntType, Others...>,
			UnaryPredicate,
			Count + 1
		>::type
	>;
};


/**
 * @brief Helper for `remove_if`.
 */
template <typename IntType, typename UnaryPredicate, std::size_t Count>
struct remove_if_impl<vector_c<IntType>, UnaryPredicate, Count>
{
	using type = vector_c<IntType>;
};


/**
 * @brief Helper for `remove_if`.
 */
template <typename IntType, IntType Head, typename Tail, typename UnaryPredicate, std::size_t Count>
struct remove_if_impl<list_node_c<IntType, Head, Tail>, UnaryPredicate, Count>
{
	using type = concat<
		if_<
			UnaryPredicate::template apply<integer_c<IntType, Head>>::type::value,
			null_type,
			list_node_c<IntType, Head, null_type>
		>,
		typename remove_if_impl<
			Tail,
			UnaryPredicate,
			Count + 1
		>::type
	>;
};


/**
 * @brief Helper for `remove_if`.
 */
template <char First, char... Others, typename UnaryPredicate, std::size_t Count>
struct remove_if_impl<string<First, Others...>, UnaryPredicate, Count>
{
	using type = concat<
		if_<
			UnaryPredicate::template apply<char_c<First>>::type::value,
			string<>,
			string<First>
		>,
		typename remove_if_impl<
			string<Others...>,
			UnaryPredicate,
			Count + 1
		>::type
	>;
};


/**
 * @brief Helper for `remove_if`.
 */
template <typename UnaryPredicate, std::size_t Count>
struct remove_if_impl<string<>, UnaryPredicate, Count>
{
	using type = string<>;
};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup containerops
 * @brief Removes an item given a condition
 *
 * Removes an element from a container, given a condition (an unary predicate).
 *
 * @param Container      The container.
 * @param UnaryPredicate The condition that an element must require for being
 *                       removed (a metafunction object).
 */
template <typename Container, typename UnaryPredicate>
using remove_if = typename remove_if_impl<Container, UnaryPredicate, 0>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_REMOVE_IF_HPP
