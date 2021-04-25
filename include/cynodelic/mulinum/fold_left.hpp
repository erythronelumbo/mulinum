// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file fold_left.hpp
 *
 * @brief Defines the `fold_left` metafunction
 */


#ifndef CYNODELIC_MULINUM_FOLD_LEFT_HPP
#define CYNODELIC_MULINUM_FOLD_LEFT_HPP


#include <cstddef>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/vector.hpp>
#include <cynodelic/mulinum/null_type.hpp>
#include <cynodelic/mulinum/list.hpp>



namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `fold_left`.
 */
template <template <typename...> class, typename>
struct fold_left_impl {};


/**
 * @brief Helper for `fold_left`.
 */
template <template <typename...> class MetaFn, typename SingleItem>
struct fold_left_impl<MetaFn, vector<SingleItem>>
{
	using type = SingleItem;
};

/**
 * @brief Helper for `fold_left`.
 */
template <template <typename...> class MetaFn, typename First, typename Second>
struct fold_left_impl<MetaFn, vector<First, Second>>
{
	using type = MetaFn<First, Second>;
};

/**
 * @brief Helper for `fold_left`.
 */
template <template <typename...> class MetaFn, typename First, typename Second, typename... Others>
struct fold_left_impl<MetaFn, vector<First, Second, Others...>>
{
	using type = typename fold_left_impl<
		MetaFn,
		vector<MetaFn<First, Second>, Others...>
	>::type;
};


/**
 * @brief Helper for `fold_left`.
 */
template <template <typename...> class MetaFn>
struct fold_left_impl<MetaFn, null_type>
{
	using type = null_type;
};


/**
 * @brief Helper for `fold_left`.
 */
template <template <typename...> class MetaFn, typename Head>
struct fold_left_impl<MetaFn, list_node<Head, null_type>>
{
	using type = Head;
};


/**
 * @brief Helper for `fold_left`.
 */
template <template <typename...> class MetaFn, typename First, typename Second>
struct fold_left_impl<MetaFn, list_node<First, list_node<Second, null_type>>>
{
	using type = MetaFn<First, Second>;
};


/**
 * @brief Helper for `fold_left`.
 */
template <template <typename...> class MetaFn, typename First, typename Second, typename Tail>
struct fold_left_impl<MetaFn, list_node<First, list_node<Second, Tail>>>
{
	using type = typename fold_left_impl<
		MetaFn,
		list_node<MetaFn<First, Second>, Tail>
	>::type;
};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup containerops
 * @brief Left folding.
 *
 * Combines all the elements of a container, from left to right, applying a
 * binary metafunction.
 *
 * @param MetaFn        The binary metafunction (of two arguments, it can be
 *                      variadic).
 * @param TypeContainer The container.
 */
template <template <typename...> class MetaFn, typename TypeContainer>
using fold_left = typename fold_left_impl<MetaFn, TypeContainer>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_FOLD_LEFT_HPP
