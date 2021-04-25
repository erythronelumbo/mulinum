// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file fill.hpp
 *
 * @brief Defines the `fill` metafunction.
 */


#ifndef CYNODELIC_MULINUM_FILL_HPP
#define CYNODELIC_MULINUM_FILL_HPP


#include <cstddef>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/tags.hpp>
#include <cynodelic/mulinum/members_of.hpp>
#include <cynodelic/mulinum/tag_traits.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/vector.hpp>
#include <cynodelic/mulinum/list.hpp>
#include <cynodelic/mulinum/concat.hpp>
#include <cynodelic/mulinum/make_from_tag.hpp>
#include <cynodelic/mulinum/make_from_tag_c.hpp>
#include <cynodelic/mulinum/detail/enable_if.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `fill`.
 */
template <typename, typename, typename, typename = void>
struct fill_impl {};


/**
 * @brief Helper for `fill`.
 */
template <
	typename    TypeContainerTag,
	typename    Item,
	std::size_t Num
>
struct fill_impl<
	TypeContainerTag,
	Item,
	integer_c<std::size_t, Num>,
	detail::enable_if<is_type_container_tag<TypeContainerTag>::value>
>
{
	using type = concat<
		make_from_tag<TypeContainerTag, Item>,
		typename fill_impl<
			TypeContainerTag,
			Item,
			integer_c<std::size_t, Num - 1>
		>::type
	>;
};


/**
 * @brief Helper for `fill`.
 */
template <
	typename TypeContainerTag,
	typename Item
>
struct fill_impl<
	TypeContainerTag,
	Item,
	integer_c<std::size_t, 0>,
	detail::enable_if<is_type_container_tag<TypeContainerTag>::value>
>
{
	using type = make_from_tag<TypeContainerTag>;
};


/**
 * @brief Helper for `fill`.
 */
template <
	typename    IntContainerTag,
	value_type_of<IntContainerTag> ItemVal,
	std::size_t Num
>
struct fill_impl<
	IntContainerTag,
	integer_c<value_type_of<IntContainerTag>, ItemVal>,
	integer_c<std::size_t, Num>,
	detail::enable_if<is_integer_container_tag<IntContainerTag>::value>
>
{
	using type = concat<
		make_from_tag_c<IntContainerTag, ItemVal>,
		typename fill_impl<
			IntContainerTag,
			integer_c<value_type_of<IntContainerTag>, ItemVal>,
			integer_c<std::size_t, Num - 1>
		>::type
	>;
};


/**
 * @brief Helper for `fill`.
 */
template <
	typename IntContainerTag,
	value_type_of<IntContainerTag> ItemVal
>
struct fill_impl<
	IntContainerTag,
	integer_c<value_type_of<IntContainerTag>,ItemVal>,
	integer_c<std::size_t, 0>,
	detail::enable_if<is_integer_container_tag<IntContainerTag>::value>
>
{
	using type = make_from_tag_c<IntContainerTag>;
};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup containerops
 * @brief Fills a container.
 *
 * Makes a type container with `Num` instances of a given item.
 *
 * @param ContainerTag A container tag.
 * @param Item         The item used to fill the container (for integer
 *                     containers, it must be an @ref integer_c, which integer
 *                     type must coincide with the one in `ContainerTag`).
 * @param Num          The number of instances of `Item` (a @ref size_c). 
 */
template <
	typename ContainerTag,
	typename Item,
	typename Num
>
using fill = typename fill_impl<ContainerTag, Item,Num>::type;


/**
 * @ingroup containerops
 * @brief Fills a container.
 *
 * Makes a type container with `Num` instances of a given item.
 *
 * @param ContainerTag A container tag.
 * @param Item         The item used to fill the container (for integer
 *                     containers, it must be an @ref integer_c, which integer
 *                     type must coincide with the one in `ContainerTag`).
 * @param Num          The number of instances of `Item`. 
 */
template <
	typename    ContainerTag,
	typename    Item,
	std::size_t Num
>
using fill_c = typename fill_impl<ContainerTag, Item, integer_c<std::size_t, Num>>::type;


/**
 * @ingroup containerops
 * @brief Fills a `vector`.
 *
 * Same as `fill_c<vector_tag, Item, Num>`.
 */
template <typename Item, std::size_t Num>
using vector_fill = fill_c<vector_tag, Item, Num>;


/**
 * @ingroup containerops
 * @brief Fills a `list`.
 *
 * Same as `fill_c<list_tag, Item, Num>`.
 */
template <typename Item, std::size_t Num>
using list_fill = fill_c<list_tag, Item, Num>;


/**
 * @ingroup containerops
 * @brief Fills a `vector_c`.
 *
 * Same as `fill_c<vector_c_tag<IntType>, integer_c<IntType, Item>, Num>`.
 */
template <typename IntType, IntType Item, std::size_t Num>
using vector_c_fill = fill_c<vector_c_tag<IntType>, integer_c<IntType, Item>, Num>;


/**
 * @ingroup containerops
 * @brief Fills a `list_c`.
 *
 * Same as `fill_c<list_c_tag<IntType>, integer_c<IntType, Item>, Num>`.
 */
template <typename IntType, IntType Item, std::size_t Num>
using list_c_fill = fill_c<list_c_tag<IntType>, integer_c<IntType, Item>, Num>;


/**
 * @ingroup containerops
 * @brief Fills a `string`.
 *
 * Same as `fill_c<string_tag, integer_c<char, Item>, Num>`.
 */
template <char Item, std::size_t Num>
using string_fill = fill_c<string_tag, integer_c<char, Item>, Num>;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_FILL_HPP
