// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file find.hpp
 *
 * @brief Provides the `find` metafunction.
 */


#ifndef CYNODELIC_MULINUM_FIND_HPP
#define CYNODELIC_MULINUM_FIND_HPP


#include <cstddef>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/if.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/equals.hpp>
#include <cynodelic/mulinum/vector.hpp>
#include <cynodelic/mulinum/null_type.hpp>
#include <cynodelic/mulinum/list.hpp>
#include <cynodelic/mulinum/vector_c.hpp>
#include <cynodelic/mulinum/list_c.hpp>
#include <cynodelic/mulinum/string.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `find`.
 */
template <typename, typename, std::size_t>
struct find_impl;


/**
 * @brief Helper for `find`.
 */
template <typename Item, typename First, typename... Others, std::size_t Count>
struct find_impl<Item, vector<First, Others...>, Count> :
	if_<
		equals<Item, First>::value,
		size_c<Count>,
		typename find_impl<
			Item,
			vector<Others...>,
			(Count + 1)
		>::type
	>
{};


/**
 * @brief Helper for `find`.
 */
template <typename Item, std::size_t Count>
struct find_impl<Item, vector<>, Count> :
	size_c<-1>
{};


/**
 * @brief Helper for `find`.
 */
template <typename Item, typename Head, typename Tail, std::size_t Count>
struct find_impl<Item, list_node<Head, Tail>, Count> :
	if_<
		equals<Item, Head>::value,
		size_c<Count>,
		typename find_impl<
			Item,
			Tail,
			(Count + 1)
		>::type
	>
{};


/**
 * @brief Helper for `find`.
 */
template <typename Item, std::size_t Count>
struct find_impl<Item, null_type, Count> :
	size_c<-1>
{};


/**
 * @brief Helper for `find`.
 */
template <typename IntType, IntType Item, IntType First, IntType... Others, std::size_t Count>
struct find_impl<integer_c<IntType, Item>, vector_c<IntType, First, Others...>, Count> :
	if_<
		(Item == First),
		size_c<Count>,
		typename find_impl<
			integer_c<IntType, Item>,
			vector_c<IntType, Others...>,
			(Count + 1)
		>::type
	>
{};


/**
 * @brief Helper for `find`.
 */
template <typename IntType, IntType Item, std::size_t Count>
struct find_impl<integer_c<IntType, Item>, vector_c<IntType>, Count> :
	size_c<-1>
{};


/**
 * @brief Helper for `find`.
 */
template <typename IntType, IntType Item, IntType Head, typename Tail, std::size_t Count>
struct find_impl<integer_c<IntType, Item>, list_node_c<IntType, Head, Tail>, Count> :
	if_<
		(Item == Head),
		size_c<Count>,
		typename find_impl<
			integer_c<IntType, Item>,
			Tail,
			(Count + 1)
		>::type
	>
{};


/**
 * @brief Helper for `find`.
 */
template <typename IntType, IntType Item, std::size_t Count>
struct find_impl<integer_c<IntType, Item>, null_type, Count> :
	size_c<-1>
{};


/**
 * @brief Helper for `find`.
 */
template <char Item, char First, char... Others, std::size_t Count>
struct find_impl<char_c<Item>, string<First, Others...>, Count> :
	if_<
		(Item == First),
		size_c<Count>,
		typename find_impl<
			char_c<Item>,
			string<Others...>,
			(Count + 1)
		>::type
	>
{};


/**
 * @brief Helper for `find`.
 */
template <char Item, std::size_t Count>
struct find_impl<char_c<Item>, string<>, Count> :
	size_c<-1>
{};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup containerops
 * @brief Finds an element from a container
 *
 * Finds a desired element from a given container, returning its position in
 * such as a @ref size_c, otherwise, returns the maximum value for
 * `std::size_t` (indicating that the element is not in the container).
 *
 * @param Item      The element to find.
 * @param Container The container.
 */
template <typename Item, typename Container>
using find = typename find_impl<Item, Container, 0>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_FIND_HPP
