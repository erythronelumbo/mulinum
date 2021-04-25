// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file reverse.hpp
 *
 * @brief Defines the `reverse` metafunction.
 */


#ifndef CYNODELIC_MULINUM_REVERSE_HPP
#define CYNODELIC_MULINUM_REVERSE_HPP


#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/vector.hpp>
#include <cynodelic/mulinum/list.hpp>
#include <cynodelic/mulinum/string.hpp>
#include <cynodelic/mulinum/vector_c.hpp>
#include <cynodelic/mulinum/list_c.hpp>
#include <cynodelic/mulinum/concat.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `reverse`.
 */
template <typename>
struct reverse_impl {};


/**
 * @brief Helper for `reverse`.
 */
template <char First, char... Others>
struct reverse_impl<string<First, Others...>>
{
	using type = concat<
		typename reverse_impl<string<Others...>>::type,
		string<First>
	>;
};


/**
 * @brief Helper for `reverse`.
 */
template <char Last>
struct reverse_impl<string<Last>>
{
	using type = string<Last>;
};


/**
 * @brief Helper for `reverse`.
 */
template <
	typename   IntType,
	IntType    First,
	IntType... Others
>
struct reverse_impl<vector_c<IntType, First, Others...>>
{
	using type = concat<
		typename reverse_impl<vector_c<IntType, Others...>>::type,
		vector_c<IntType, First>
	>;
};


/**
 * @brief Helper for `reverse`.
 */
template <
	typename IntType,
	IntType  Last
>
struct reverse_impl<vector_c<IntType, Last>>
{
	using type = vector_c<IntType, Last>;
};


/**
 * @brief Helper for `reverse`.
 */
template <
	typename IntType,
	IntType  First,
	typename Tail
>
struct reverse_impl<list_node_c<IntType, First, Tail>>
{
	using type = concat<
		typename reverse_impl<Tail>::type,
		list_node_c<IntType, First, null_type>
	>;
};


/**
 * @brief Helper for `reverse`.
 */
template <
	typename IntType,
	IntType  Last
>
struct reverse_impl<list_node_c<IntType, Last, null_type>>
{
	using type = list_node_c<IntType, Last, null_type>;
};


/**
 * @brief Helper for `reverse`.
 */
template <
	typename    First,
	typename... Others
>
struct reverse_impl<vector<First, Others...>>
{
	using type = concat<
		typename reverse_impl<vector<Others...>>::type,
		vector<First>
	>;
};


/**
 * @brief Helper for `reverse`.
 */
template <typename Last>
struct reverse_impl<vector<Last>>
{
	using type = vector<Last>;
};


/**
 * @brief Helper for `reverse`.
 */
template <typename First, typename Tail>
struct reverse_impl<list_node<First, Tail>>
{
	using type = concat<
		typename reverse_impl<Tail>::type,
		list_node<First, null_type>
	>;
};


/**
 * @brief Helper for `reverse`.
 */
template <typename Last>
struct reverse_impl<list_node<Last, null_type>>
{
	using type = list_node<Last, null_type>;
};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup containerops
 * @brief Reverses a container.
 *
 * Reverses all the elements of a container.
 *
 * @param Container Any container.
 */
template <typename Container>
using reverse = typename reverse_impl<Container>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_REVERSE_HPP
