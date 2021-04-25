// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file at.hpp
 *
 * @brief Defines the `at` metafunction.
 */


#ifndef CYNODELIC_MULINUM_AT_HPP
#define CYNODELIC_MULINUM_AT_HPP


#include <cstddef>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/vector.hpp>
#include <cynodelic/mulinum/list.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/string.hpp>
#include <cynodelic/mulinum/vector_c.hpp>
#include <cynodelic/mulinum/list_c.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `at`.
 */
template <typename, typename, bool>
struct at_impl {};


/**
 * @brief Helper for `at`.
 */
template <typename... Items, std::size_t Idx, bool Dummy>
struct at_impl<vector<Items...>, size_c<Idx>, Dummy>
{
	using type = typename detail::vector_at<vector<Items...>, Idx>::type;
};


/**
 * @brief Helper for `at`.
 */
template <
	typename    HeadItem,
	typename    Tail,
	std::size_t Idx
>
struct at_impl<list_node<HeadItem, Tail>, size_c<Idx>, false>
{
	using type = typename at_impl<Tail, size_c<Idx - 1>, (Idx - 1) == 0>::type;
};


/**
 * @brief Helper for `at`.
 */
template <
	typename HeadItem,
	typename Tail
>
struct at_impl<list_node<HeadItem, Tail>, size_c<0>, true>
{
	using type = HeadItem;
};


/**
 * @brief Helper for `at`.
 */
template <char... Chars, std::size_t Idx, bool Dummy>
struct at_impl<string<Chars...>, size_c<Idx>, Dummy> :
	integer_c<char, string<Chars...>::data[Idx]>
{};


/**
 * @brief Helper for `at`.
 */
template <typename IntType, IntType... Items, std::size_t Idx, bool Dummy>
struct at_impl<vector_c<IntType, Items...>, size_c<Idx>, Dummy> :
	integer_c<IntType, vector_c<IntType, Items...>::data[Idx]>
{};


/**
 * @brief Helper for `at`.
 */
template <typename IntType, IntType HeadItem, std::size_t Idx, typename Tail>
struct at_impl<list_node_c<IntType, HeadItem, Tail>, size_c<Idx>, false> :
	integer_c<IntType, at_impl<Tail, size_c<Idx - 1>, (Idx - 1) == 0>::value>
{};


/**
 * @brief Helper for `at`.
 */
template <typename IntType, IntType HeadItem, typename Tail>
struct at_impl<list_node_c<IntType, HeadItem, Tail>, size_c<0>, true> :
	integer_c<IntType, HeadItem>
{};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup containerops
 * @brief Accesor for containers.
 *
 * Accesses the n-th element of a container. For integer containers, its result
 * is an @ref integer_c.
 *
 * @param TypeContainer The container.
 * @param Idx           The position where the desired element is (a
 *                      @ref size_c).
 */
template <typename TypeContainer, typename Idx>
using at = typename at_impl<TypeContainer, Idx, (Idx::value == 0)>::type;


/**
 * @ingroup containerops
 * @brief Accesor for containers.
 *
 * Accesses the n-th element of a container. For integer containers, its result
 * is an @ref integer_c.
 *
 * @param TypeContainer The container.
 * @param Idx           The position where the desired element is.
 */
template <typename TypeContainer, std::size_t Idx>
using at_c = typename at_impl<TypeContainer, size_c<Idx>, (Idx == 0)>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_AT_HPP
