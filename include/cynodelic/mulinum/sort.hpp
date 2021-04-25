// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file sort.hpp
 *
 * @brief Provides the `sort` metafunction.
 */


#ifndef CYNODELIC_MULINUM_SORT_HPP
#define CYNODELIC_MULINUM_SORT_HPP


#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/vector.hpp>
#include <cynodelic/mulinum/null_type.hpp>
#include <cynodelic/mulinum/list.hpp>
#include <cynodelic/mulinum/string.hpp>
#include <cynodelic/mulinum/vector_c.hpp>
#include <cynodelic/mulinum/list_c.hpp>
#include <cynodelic/mulinum/concat.hpp>
#include <cynodelic/mulinum/take.hpp>
#include <cynodelic/mulinum/detail/sort_merge.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `sort`.
 */
template <typename, typename, bool>
struct sort_impl {};


/**
 * @brief Helper for `sort`.
 */
template <
	typename IntType, IntType... Items,
	typename Comparator
>
struct sort_impl<vector_c<IntType, Items...>, Comparator, false>
{
	using input = vector_c<IntType, Items...>;
	using type  = detail::sort_merge<
		typename sort_impl<
			take_c<input, 0, (input::size/2)>,
			Comparator,
			((input::size/2) < 2)
		>::type,
		typename sort_impl<
			take_c<input, (input::size/2), (input::size - input::size/2)>,
			Comparator,
			((input::size - input::size/2) < 2)
		>::type,
		Comparator
	>;
};


/**
 * @brief Helper for `sort`.
 */
template <
	typename IntType, IntType... Items,
	typename Comparator
>
struct sort_impl<vector_c<IntType, Items...>, Comparator, true>
{
	using type = vector_c<IntType, Items...>;
};


/**
 * @brief Helper for `sort`.
 */
template <
	char...  Items,
	typename Comparator
>
struct sort_impl<string<Items...>, Comparator, false>
{
	using input = string<Items...>;
	using type  = detail::sort_merge<
		typename sort_impl<
			take_c<input, 0, (input::size/2)>,
			Comparator,
			((input::size/2) < 2)
		>::type,
		typename sort_impl<
			take_c<input, (input::size/2), (input::size - input::size/2)>,
			Comparator,
			((input::size - input::size/2) < 2)
		>::type,
		Comparator
	>;
};


/**
 * @brief Helper for `sort`.
 */
template <
	char...  Items,
	typename Comparator
>
struct sort_impl<string<Items...>, Comparator, true>
{
	using type = string<Items...>;
};


/**
 * @brief Helper for `sort`.
 */
template <
	typename IntType, IntType Head, typename Tail,
	typename Comparator
>
struct sort_impl<list_node_c<IntType, Head, Tail>, Comparator, false>
{
	using input = list_node_c<IntType, Head, Tail>;
	using type  = detail::sort_merge<
		typename sort_impl<
			take_c<input, 0, (input::size/2)>,
			Comparator,
			((input::size/2) < 2)
		>::type,
		typename sort_impl<
			take_c<input, (input::size/2), (input::size - input::size/2)>,
			Comparator,
			((input::size - input::size/2) < 2)
		>::type,
		Comparator
	>;
};


/**
 * @brief Helper for `sort`.
 */
template <
	typename IntType, IntType Head, typename Tail,
	typename Comparator
>
struct sort_impl<list_node_c<IntType, Head, Tail>, Comparator, true>
{
	using type = list_node_c<IntType, Head, Tail>;
};


/**
 * @brief Helper for `sort`.
 */
template <
	typename... Items,
	typename    Comparator
>
struct sort_impl<vector<Items...>, Comparator, false>
{
	using input = vector<Items...>;
	using type  = detail::sort_merge<
		typename sort_impl<
			take_c<input, 0, (input::size/2)>,
			Comparator,
			((input::size/2) < 2)
		>::type,
		typename sort_impl<
			take_c<input, (input::size/2), (input::size - input::size/2)>,
			Comparator,
			((input::size - input::size/2) < 2)
		>::type,
		Comparator
	>;
};


/**
 * @brief Helper for `sort`.
 */
template <
	typename... Items,
	typename    Comparator
>
struct sort_impl<vector<Items...>, Comparator, true>
{
	using type = vector<Items...>;
};


/**
 * @brief Helper for `sort`.
 */
template <
	typename Head, typename Tail,
	typename Comparator
>
struct sort_impl<list_node<Head, Tail>, Comparator, false>
{
	using input = list_node<Head, Tail>;
	using type  = detail::sort_merge<
		typename sort_impl<
			take_c<input, 0, (input::size/2)>,
			Comparator,
			((input::size/2) < 2)
		>::type,
		typename sort_impl<
			take_c<input, (input::size/2), (input::size - input::size/2)>,
			Comparator,
			((input::size - input::size/2) < 2)
		>::type,
		Comparator
	>;
};


/**
 * @brief Helper for `sort`.
 */
template <
	typename Head, typename Tail,
	typename Comparator
>
struct sort_impl<list_node<Head, Tail>, Comparator, true>
{
	using type = list_node<Head, Tail>;
};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup containerops
 * @brief Sorts a container
 *
 * Sorts a container using the mergesort algorithm. If the container is an
 * integer container, the comparator must take an @ref integer_c with the same
 * type as the elements in such container.
 *
 * @param Container  The container.
 * @param Comparator The comparator (a metafunction object).
 */
template <typename Container, typename Comparator>
using sort = typename sort_impl<Container, Comparator, (Container::size < 2)>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_SORT_HPP
