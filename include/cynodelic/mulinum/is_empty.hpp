// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file is_empty.hpp
 *
 * @brief Defines the `is_empty` metafunction.
 */


#ifndef CYNODELIC_MULINUM_IS_EMPTY_HPP
#define CYNODELIC_MULINUM_IS_EMPTY_HPP


#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/null_type.hpp>
#include <cynodelic/mulinum/vector.hpp>
#include <cynodelic/mulinum/list.hpp>
#include <cynodelic/mulinum/string.hpp>
#include <cynodelic/mulinum/vector_c.hpp>
#include <cynodelic/mulinum/list_c.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `is_empty`.
 */
template <typename>
struct is_empty_impl {};


/**
 * @brief Helper for `is_empty`.
 */
template <typename... Items>
struct is_empty_impl<vector<Items...>> : bool_c<(sizeof...(Items) == 0)> {};


/**
 * @brief Helper for `is_empty`.
 */
template <typename ListHead,typename ListTail>
struct is_empty_impl<list_node<ListHead,ListTail>> : false_ {};


/**
 * @brief Helper for `is_empty`.
 */
template <typename IntType,IntType ListHead,typename ListTail>
struct is_empty_impl<list_node_c<IntType,ListHead,ListTail>> : false_ {};


/**
 * @brief Helper for `is_empty`.
 */
template <>
struct is_empty_impl<null_type> : true_ {};


/**
 * @brief Helper for `is_empty`.
 */
template <typename IntType,IntType... Items>
struct is_empty_impl<vector_c<IntType,Items...>> : bool_c<(sizeof...(Items) == 0)> {};


/**
 * @brief Helper for `is_empty`.
 */
template <char... Items>
struct is_empty_impl<string<Items...>> : bool_c<(sizeof...(Items) == 0)> {};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup containerops
 * @brief Emptiness checker.
 *
 * Determines if a container is empty, i.e., it has no elements.
 *
 * @param Container The container.
 */
template <typename Container>
using is_empty = typename is_empty_impl<Container>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_IS_EMPTY_HPP
