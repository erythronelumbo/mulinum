// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file list.hpp
 *
 * @brief Defines the `list_node` type container and the `list` helper type.
 */


#ifndef CYNODELIC_MULINUM_LIST_HPP
#define CYNODELIC_MULINUM_LIST_HPP


#include <cstddef>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/tags.hpp>
#include <cynodelic/mulinum/null_type.hpp>


namespace cynodelic { namespace mulinum {


/**
 * @ingroup typecontainers
 * @brief List node.
 *
 * A linked list node that contains a type and other nodes (or a
 * @ref null_type as a list end).
 */
template <typename Item,typename Next = null_type>
struct list_node
{
	/// @brief Reference to itself.
	using type = list_node<Item,Next>;

	/// @brief The list's head.
	using head = Item;

	/// @brief The list's tail (next nodes).
	using tail = Next;

	/// @brief Type tag for this container.
	using type_tag = list_tag;

	/// @brief Size (number of elements).
	static constexpr std::size_t size = 1 + tail::size;
};

template <typename Item,typename Next>
constexpr std::size_t list_node<Item,Next>::size;


/**
 * @ingroup typecontainers
 * @brief List node with null end.
 *
 * Specialization for a linked list node with null end (@ref null_type).
 */
template <typename Item>
struct list_node<Item,null_type>
{
	/// @brief Reference to itself.
	using type = list_node<Item,null_type>;

	/// @brief The list's head.
	using head = Item;

	/// @brief The list's tail (next nodes).
	using tail = null_type;

	/// @brief Type tag for this container.
	using type_tag = list_tag;

	/// @brief Size (number of elements).
	static constexpr std::size_t size = 1;
};

template <typename Item>
constexpr std::size_t list_node<Item,null_type>::size;


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `list`.
 */
template <typename...>
struct list_impl;


/**
 * @brief Helper for `list`.
 */
template <typename First,typename... Others>
struct list_impl<First,Others...>
{
	using type = list_node<First,typename list_impl<Others...>::type>;
};


/**
 * @brief Helper for `list`.
 */
template <>
struct list_impl<>
{
	using type = null_type;
};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup typecontainers
 * @brief List helper.
 *
 * Helper for declaring a linked list made of @ref list_node s (e.g.: turns
 * `list<first,second,third>` into
 * `list_node<first,list_node<second,list_node<third,null_type>>>`).
 */
template <typename... Items>
using list = typename list_impl<Items...>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_LIST_HPP
