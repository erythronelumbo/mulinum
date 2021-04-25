// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file make_from_tag.hpp
 *
 * @brief Defines the `make_from_tag` metafunction.
 */


#ifndef CYNODELIC_MULINUM_MAKE_FROM_TAG_HPP
#define CYNODELIC_MULINUM_MAKE_FROM_TAG_HPP


#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/tags.hpp>
#include <cynodelic/mulinum/members_of.hpp>
#include <cynodelic/mulinum/vector.hpp>
#include <cynodelic/mulinum/list.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `make_from_tag`.
 */
template <typename, typename...>
struct make_from_tag_impl {};


/**
 * @brief Helper for `make_from_tag`.
 */
template <typename... Items>
struct make_from_tag_impl<vector_tag, Items...> :
	vector<Items...>
{};


/**
 * @brief Helper for `make_from_tag`.
 */
template <typename... Items>
struct make_from_tag_impl<list_tag, Items...> :
	list<Items...>
{};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup containerops
 * @brief Type container from tag.
 *
 * Makes a type container from its corresponding tag (see `tags.hpp`).
 *
 * @param TypeContainerTag The tag.
 * @param Items...         The elements that will be added to the container.
 */
template <typename TypeContainerTag, typename... Items>
using make_from_tag = typename make_from_tag_impl<TypeContainerTag, Items...>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_MAKE_FROM_TAG_HPP
