// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file make_from_tag_c.hpp
 *
 * @brief Defines the `make_from_tag_c` metafunction.
 */


#ifndef CYNODELIC_MULINUM_MAKE_FROM_TAG_C_HPP
#define CYNODELIC_MULINUM_MAKE_FROM_TAG_C_HPP


#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/equals.hpp>
#include <cynodelic/mulinum/detail/enable_if.hpp>
#include <cynodelic/mulinum/tags.hpp>
#include <cynodelic/mulinum/members_of.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/rational.hpp>
#include <cynodelic/mulinum/vector_c.hpp>
#include <cynodelic/mulinum/list_c.hpp>
#include <cynodelic/mulinum/string.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `make_from_tag_c`.
 */
template <typename TypeTag, typename, value_type_of<TypeTag>...>
struct make_from_tag_c_impl {};


/**
 * @brief Helper for `make_from_tag_c`.
 */
template <typename IntType, value_type_of<integer_tag<IntType>> Val>
struct make_from_tag_c_impl<integer_tag<IntType>, void, Val> :
	integer_c<IntType, Val>
{};


/**
 * @brief Helper for `make_from_tag_c`.
 */
template <typename RationalTag, value_type_of<RationalTag> Num, value_type_of<RationalTag> Den>
struct make_from_tag_c_impl<RationalTag, detail::enable_if<equals<RationalTag, rational_tag>::value>, Num, Den> :
	rational<Num, Den>
{};


/**
 * @brief Helper for `make_from_tag_c`.
 */
template <typename IntType, value_type_of<vector_c_tag<IntType>>... Items>
struct make_from_tag_c_impl<vector_c_tag<IntType>, void, Items...> :
	vector_c<IntType, Items...>
{};


/**
 * @brief Helper for `make_from_tag_c`.
 */
template <typename IntType, value_type_of<list_c_tag<IntType>>... Items>
struct make_from_tag_c_impl<list_c_tag<IntType>, void, Items...> :
	list_c<IntType, Items...>
{};


/**
 * @brief Helper for `make_from_tag_c`.
 */
template <value_type_of<string_tag>... Items>
struct make_from_tag_c_impl<string_tag, void, Items...> :
	string<Items...>
{};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup containerops
 * @brief Type with integers from tag.
 *
 * Makes an arithmetic type or an integer container from its corresponding
 * tag (see `tags.hpp`).
 *
 * @param TypeTag  The tag.
 * @param Items... The elements that will be added to the desired type, which
 *                 must have the same type as required from `TypeTag`.
 */
template <typename TypeTag, value_type_of<TypeTag>... Items>
using make_from_tag_c = typename make_from_tag_c_impl<TypeTag, void, Items...>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_MAKE_FROM_TAG_C_HPP
