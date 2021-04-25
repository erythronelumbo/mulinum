// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file concat.hpp
 *
 * @brief Defines the `concat` metafunction.
 */


#ifndef CYNODELIC_MULINUM_CONCAT_HPP
#define CYNODELIC_MULINUM_CONCAT_HPP


#include <cstddef>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/vector.hpp>
#include <cynodelic/mulinum/list.hpp>
#include <cynodelic/mulinum/string.hpp>
#include <cynodelic/mulinum/vector_c.hpp>
#include <cynodelic/mulinum/list_c.hpp>
#include <cynodelic/mulinum/detail/list_concat_helper.hpp>
#include <cynodelic/mulinum/detail/list_c_concat_helper.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `concat`.
 */
template <typename...>
struct concat_impl {};


/**
 * @brief Helper for `concat`.
 */
template <
	typename   IntType,
	IntType... Items
>
struct concat_impl<
	vector_c<IntType, Items...>
>
{
	using type = vector_c<IntType, Items...>;
};


/**
 * @brief Helper for `concat`.
 */
template <
	typename   IntType,
	IntType... ItemsL,
	IntType... ItemsR
>
struct concat_impl<
	vector_c<IntType, ItemsL...>,
	vector_c<IntType, ItemsR...>
>
{
	using type = vector_c<IntType, ItemsL..., ItemsR...>;
};


/**
 * @brief Helper for `concat`.
 */
template <
	typename    IntType,
	IntType...  ItemsL,
	IntType...  ItemsR,
	typename... Others
>
struct concat_impl<
	vector_c<IntType, ItemsL...>,
	vector_c<IntType, ItemsR...>,
	Others...
>
{
	using type = typename concat_impl<
		vector_c<IntType, ItemsL..., ItemsR...>,
		Others...
	>::type;
};


/**
 * @brief Helper for `concat`.
 */
template <char... ItemsL, char... ItemsR>
struct concat_impl<
	string<ItemsL...>,
	string<ItemsR...>
>
{
	using type = string<ItemsL..., ItemsR...>;
};


/**
 * @brief Helper for `concat`.
 */
template <char... Items>
struct concat_impl<
	string<Items...>
>
{
	using type = string<Items...>;
};


/**
 * @brief Helper for `concat`.
 */
template <char... ItemsL, char... ItemsR, typename... Others>
struct concat_impl<
	string<ItemsL...>,
	string<ItemsR...>,
	Others...
>
{
	using type = typename concat_impl<
		string<ItemsL..., ItemsR...>,
		Others...
	>::type;
};


/**
 * @brief Helper for `concat`.
 */
template <
	typename... Items
>
struct concat_impl<
	vector<Items...>
>
{
	using type = vector<Items...>;
};


/**
 * @brief Helper for `concat`.
 */
template <
	typename... ItemsA,
	typename... ItemsB
>
struct concat_impl<
	vector<ItemsA...>,
	vector<ItemsB...>
>
{
	using type = vector<
		ItemsA...,
		ItemsB...
	>;
};


/**
 * @brief Helper for `concat`.
 */
template <
	typename... ItemsA,
	typename... ItemsB,
	typename... Others
>
struct concat_impl<
	vector<ItemsA...>,
	vector<ItemsB...>,
	Others...
>
{
	using type = typename concat_impl<
		vector<ItemsA..., ItemsB...>,
		Others...
	>::type;
};


/**
 * @brief Helper for `concat`.
 */
template <
	typename Head,
	typename Tail
>
struct concat_impl<
	list_node<Head, Tail>
>
{
	using type = list_node<Head, Tail>;
};


/**
 * @brief Helper for `concat`.
 */
template <>
struct concat_impl<
	null_type
>
{
	using type = null_type;
};


/**
 * @brief Helper for `concat`.
 */
template <
	typename    LhsHead,
	typename    LhsTail,
	typename... Others
>
struct concat_impl<
	list_node<LhsHead, LhsTail>,
	Others...
>
{
	using type = typename detail::list_concat_helper<
		list_node<LhsHead, LhsTail>,
		typename concat_impl<Others...>::type
	>::type;
};


/**
 * @brief Helper for `concat`.
 */
template <typename... Others>
struct concat_impl<
	null_type,
	Others...
>
{
	using type = typename concat_impl<Others...>::type;
};


/**
 * @brief Helper for `concat`.
 */
template <
	typename LhsHead, typename LhsTail,
	typename RhsHead, typename RhsTail
>
struct concat_impl<
	list_node<LhsHead, LhsTail>,
	list_node<RhsHead, RhsTail>
>
{
	using type = typename detail::list_concat_helper<
		list_node<LhsHead, LhsTail>,
		list_node<RhsHead, RhsTail>
	>::type;
};


/**
 * @brief Helper for `concat`.
 */
template <
	typename LhsHead, typename LhsTail
>
struct concat_impl<
	list_node<LhsHead, LhsTail>,
	null_type
>
{
	using type = list_node<LhsHead, LhsTail>;
};


/**
 * @brief Helper for `concat`.
 */
template <
	typename RhsHead, typename RhsTail
>
struct concat_impl<
	null_type,
	list_node<RhsHead, RhsTail>
>
{
	using type = list_node<RhsHead, RhsTail>;
};


/**
 * @brief Helper for `concat`.
 */
template <>
struct concat_impl<
	null_type,
	null_type
>
{
	using type = null_type;
};


/**
 * @brief Helper for `concat`.
 */
template <
	typename IntType,
	IntType  Head,
	typename Tail
>
struct concat_impl<
	list_node_c<IntType, Head, Tail>
>
{
	using type = list_node_c<IntType, Head, Tail>;
};


/**
 * @brief Helper for `concat`.
 */
template <
	typename    IntType,
	IntType     LhsHead,
	typename    LhsTail,
	typename... Others
>
struct concat_impl<
	list_node_c<IntType, LhsHead, LhsTail>,
	Others...
>
{
	using type = typename detail::list_c_concat_helper<
		list_node_c<IntType, LhsHead, LhsTail>,
		typename concat_impl<Others...>::type
	>::type;
};


/**
 * @brief Helper for `concat`.
 */
template <
	typename IntType,
	IntType LhsHead, typename LhsTail,
	IntType RhsHead, typename RhsTail
>
struct concat_impl<
	list_node_c<IntType, LhsHead, LhsTail>,
	list_node_c<IntType, RhsHead, RhsTail>
>
{
	using type = typename detail::list_c_concat_helper<
		list_node_c<IntType, LhsHead, LhsTail>,
		list_node_c<IntType, RhsHead, RhsTail>
	>::type;
};


/**
 * @brief Helper for `concat`.
 */
template <
	typename IntType,
	IntType LhsHead, typename LhsTail
>
struct concat_impl<
	list_node_c<IntType, LhsHead, LhsTail>,
	null_type
>
{
	using type = list_node_c<IntType, LhsHead, LhsTail>;
};


/**
 * @brief Helper for `concat`.
 */
template <
	typename IntType,
	IntType RhsHead, typename RhsTail
>
struct concat_impl<
	null_type,
	list_node_c<IntType, RhsHead, RhsTail>
>
{
	using type = list_node_c<IntType, RhsHead, RhsTail>;
};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup containerops
 * @brief Concatenator
 *
 * Concatenates containers of the same type.
 *
 * @param Containers... Containers of the same type that will be concatenated.
 */
template <typename... Containers>
using concat = typename concat_impl<Containers...>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_CONCAT_HPP
