// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file push_back.hpp
 *
 * @brief Defines the `push_back` metafunction.
 */


#ifndef CYNODELIC_MULINUM_PUSH_BACK_HPP
#define CYNODELIC_MULINUM_PUSH_BACK_HPP


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
 * @brief Helper for `push_back`.
 */
template <typename,typename>
struct push_back_impl {};


/**
 * @brief Helper for `push_back`.
 */
template <
	typename    Item,
	typename... Items
>
struct push_back_impl<Item,vector<Items...>>
{
	using type = vector<Items...,Item>;
};


/**
 * @brief Helper for `push_back`.
 */
template <
	typename Item,
	typename ListHead,
	typename ListTail
>
struct push_back_impl<Item,list_node<ListHead,ListTail>>
{
	using type = list_node<ListHead,typename push_back_impl<Item,ListTail>::type>;
};


/**
 * @brief Helper for `push_back`.
 */
template <
	typename Item,
	typename ListHead
>
struct push_back_impl<Item,list_node<ListHead,null_type>>
{
	using type = list_node<ListHead,list_node<Item,null_type>>;
};


/**
 * @brief Helper for `push_back`.
 */
template <
	typename   IntType,
	IntType    Item,
	IntType... Items
>
struct push_back_impl<integer_c<IntType,Item>,vector_c<IntType,Items...>>
{
	using type = vector_c<IntType,Items...,Item>;
};


/**
 * @brief Helper for `push_back`.
 */
template <
	typename IntType,
	IntType  Item,
	IntType  ListHead,
	typename ListTail
>
struct push_back_impl<integer_c<IntType,Item>,list_node_c<IntType,ListHead,ListTail>>
{
	using type = list_node_c<IntType,ListHead,typename push_back_impl<integer_c<IntType,Item>,ListTail>::type>;
};


/**
 * @brief Helper for `push_back`.
 */
template <
	typename IntType,
	IntType  Item,
	IntType  ListHead
>
struct push_back_impl<integer_c<IntType,Item>,list_node_c<IntType,ListHead,null_type>>
{
	using type = list_node_c<IntType,ListHead,list_node_c<IntType,Item,null_type>>;
};


/**
 * @brief Helper for `push_back`.
 */
template <
	char    Item,
	char... Items
>
struct push_back_impl<integer_c<char,Item>,string<Items...>>
{
	using type = string<Items...,Item>;
};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup containerops
 * @brief Insertion at the end.
 *
 * Inserts an element to the end of a container.
 *
 * @param Container The container.
 * @param Item      The item to insert.
 */
template <typename Container,typename Item>
using push_back = typename push_back_impl<Item,Container>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_PUSH_BACK_HPP
