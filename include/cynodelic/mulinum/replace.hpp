// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file replace.hpp
 *
 * @brief Defines the `replace` metafunction.
 */


#ifndef CYNODELIC_MULINUM_REPLACE_HPP
#define CYNODELIC_MULINUM_REPLACE_HPP


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
 * @brief Helper for `replace`.
 */
template <typename,typename,typename,std::size_t>
struct replace_impl {};


/**
 * @brief Helper for `replace`.
 */
template <typename First,typename... Others,typename Item,std::size_t Idx,std::size_t Count>
struct replace_impl<vector<First,Others...>,Item,integer_c<std::size_t,Idx>,Count>
{
	using type = concat<
		vector<if_<(Count == Idx),Item,First>>,
		typename replace_impl<
			vector<Others...>,
			Item,
			integer_c<std::size_t,Idx>,
			Count + 1
		>::type
	>;
};


/**
 * @brief Helper for `replace`.
 */
template <typename Item,std::size_t Idx,std::size_t Count>
struct replace_impl<vector<>,Item,integer_c<std::size_t,Idx>,Count>
{
	using type = vector<>;
};


/**
 * @brief Helper for `replace`.
 */
template <typename Head,typename Tail,typename Item,std::size_t Idx,std::size_t Count>
struct replace_impl<list_node<Head,Tail>,Item,integer_c<std::size_t,Idx>,Count>
{
	/*using type = concat<
		list_node<
			if_<(Count == Idx),Item,Head>,
			null_type
		>,
		typename replace_impl<
			Tail,
			Item,
			integer_c<std::size_t,Idx>,
			Count + 1
		>::type
	>;*/
	using type = list_node<
		if_<(Count == Idx),Item,Head>,
		typename replace_impl<
			Tail,
			Item,
			integer_c<std::size_t,Idx>,
			Count + 1
		>::type
	>;
};


/**
 * @brief Helper for `replace`.
 */
template <typename Item,std::size_t Idx,std::size_t Count>
struct replace_impl<null_type,Item,integer_c<std::size_t,Idx>,Count>
{
	using type = null_type;
};


/**
 * @brief Helper for `replace`.
 */
template <typename IntType,IntType First,IntType... Others,IntType Item,std::size_t Idx,std::size_t Count>
struct replace_impl<vector_c<IntType,First,Others...>,integer_c<IntType,Item>,integer_c<std::size_t,Idx>,Count>
{
	using type = concat<
		vector_c<IntType,(Count == Idx) ? Item : First>,
		typename replace_impl<
			vector_c<IntType,Others...>,
			integer_c<IntType,Item>,
			integer_c<std::size_t,Idx>,
			Count + 1
		>::type
	>;
};


/**
 * @brief Helper for `replace`.
 */
template <typename IntType,IntType Item,std::size_t Idx,std::size_t Count>
struct replace_impl<vector_c<IntType>,integer_c<IntType,Item>,integer_c<std::size_t,Idx>,Count>
{
	using type = vector_c<IntType>;
};


/**
 * @brief Helper for `replace`.
 */
template <typename IntType,IntType Head,typename Tail,IntType Item,std::size_t Idx,std::size_t Count>
struct replace_impl<list_node_c<IntType,Head,Tail>,integer_c<IntType,Item>,integer_c<std::size_t,Idx>,Count>
{
	/*using type = concat<
		list_node_c<IntType,(Count == Idx) ? Item : Head,null_type>,
		typename replace_impl<
			Tail,
			integer_c<IntType,Item>,
			integer_c<std::size_t,Idx>,
			Count + 1
		>::type
	>;*/
	using type = list_node_c<
		IntType,
		(Count == Idx) ? Item : Head,
		typename replace_impl<
			Tail,
			integer_c<IntType,Item>,
			integer_c<std::size_t,Idx>,
			Count + 1
		>::type
	>;
};


/**
 * @brief Helper for `replace`.
 */
template <char First,char... Others,char Item,std::size_t Idx,std::size_t Count>
struct replace_impl<string<First,Others...>,char_c<Item>,integer_c<std::size_t,Idx>,Count>
{
	using type = concat<
		string<(Count == Idx) ? Item : First>,
		typename replace_impl<
			string<Others...>,
			char_c<Item>,
			integer_c<std::size_t,Idx>,
			Count + 1
		>::type
	>;
};


/**
 * @brief Helper for `replace`.
 */
template <char Item,std::size_t Idx,std::size_t Count>
struct replace_impl<string<>,char_c<Item>,integer_c<std::size_t,Idx>,Count>
{
	using type = string<>;
};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup containerops
 * @brief Replaces an item
 *
 * Replaces an element from a container, to another one. For integer containers,
 * the new element must be an @ref integer_c, which must have the same type as
 * the values in the containers.
 *
 * @param Container The container.
 * @param Item      The item that will be placed in a given position.
 * @param Idx       The position where the element to replace is (a
 *                  @ref size_c).
 */
template <typename Container,typename Item,typename Idx>
using replace = typename replace_impl<Container,Item,Idx,0>::type;


/**
 * @ingroup containerops
 * @brief Replaces an item
 *
 * Replaces an element from a container, to another one. For integer containers,
 * the new element must be an @ref integer_c, which must have the same type as
 * the values in the containers.
 *
 * @param Container The container.
 * @param Item      The item that will be placed in a given position.
 * @param Idx       The position where the element to replace is.
 */
template <typename Container,typename Item,std::size_t Idx>
using replace_c = typename replace_impl<Container,Item,size_c<Idx>,0>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_REPLACE_HPP
