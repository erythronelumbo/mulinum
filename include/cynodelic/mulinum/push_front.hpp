// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file push_front.hpp
 *
 * @brief Defines the `push_front` metafunction.
 */


#ifndef CYNODELIC_MULINUM_PUSH_FRONT_HPP
#define CYNODELIC_MULINUM_PUSH_FRONT_HPP


#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/null_type.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/vector.hpp>
#include <cynodelic/mulinum/list.hpp>
#include <cynodelic/mulinum/vector_c.hpp>
#include <cynodelic/mulinum/list_c.hpp>
#include <cynodelic/mulinum/string.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `push_front`.
 */
template <typename, typename>
struct push_front_impl {};


/**
 * @brief Helper for `push_front`.
 */
template <
	typename    Item,
	typename... Items
>
struct push_front_impl<Item, vector<Items...>>
{
	using type = vector<Item, Items...>;
};


/**
 * @brief Helper for `push_front`.
 */
template <
	typename Item,
	typename ListHead,
	typename ListTail
>
struct push_front_impl<Item, list_node<ListHead, ListTail>>
{
	using type = list_node<Item, list_node<ListHead, ListTail>>;
};


/**
 * @brief Helper for `push_front`.
 */
template <
	typename   IntType,
	IntType    Item,
	IntType... Items
>
struct push_front_impl<integer_c<IntType, Item>, vector_c<IntType, Items...>>
{
	using type = vector_c<IntType, Item, Items...>;
};


/**
 * @brief Helper for `push_front`.
 */
template <
	typename IntType,
	IntType  Item,
	IntType  ListHead,
	typename ListTail
>
struct push_front_impl<integer_c<IntType, Item>, list_node_c<IntType, ListHead, ListTail>>
{
	using type = list_node_c<IntType, Item, list_node_c<IntType, ListHead, ListTail>>;
};


/**
 * @brief Helper for `push_front`.
 */
template <
	char    Item,
	char... Items
>
struct push_front_impl<integer_c<char, Item>, string<Items...>>
{
	using type = string<Item, Items...>;
};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup containerops
 * @brief Insertion at the beginning of a conainer.
 *
 * Inserts an element to the front (beginning) of a container.
 *
 * @param Container Any container.
 * @param Item      The item to insert.
 */
template <typename Container, typename Item>
using push_front = typename push_front_impl<Item, Container>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_PUSH_FRONT_HPP
