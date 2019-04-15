// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file fold_right.hpp
 *
 * @brief Defines the `fold_right` metafunction
 */


#ifndef CYNODELIC_MULINUM_FOLD_RIGHT_HPP
#define CYNODELIC_MULINUM_FOLD_RIGHT_HPP


#include <cstddef>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/vector.hpp>
#include <cynodelic/mulinum/null_type.hpp>
#include <cynodelic/mulinum/list.hpp>



namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `fold_right`.
 */
template <template <typename...> class,typename>
struct fold_right_impl {};


/**
 * @brief Helper for `fold_right`.
 */
template <template <typename...> class MetaFn,typename SingleItem>
struct fold_right_impl<MetaFn,vector<SingleItem>>
{
	using type = SingleItem;
};


/**
 * @brief Helper for `fold_right`.
 */
template <template <typename...> class MetaFn,typename First,typename Second>
struct fold_right_impl<MetaFn,vector<First,Second>>
{
	using type = MetaFn<First,Second>;
};


/**
 * @brief Helper for `fold_right`.
 */
template <template <typename...> class MetaFn,typename First,typename... Others>
struct fold_right_impl<MetaFn,vector<First,Others...>>
{
	using type = MetaFn<
		First,
		typename fold_right_impl<MetaFn,vector<Others...>>::type
	>;
};


/**
 * @brief Helper for `fold_right`.
 */
template <template <typename...> class MetaFn>
struct fold_right_impl<MetaFn,null_type>
{
	using type = null_type;
};


/**
 * @brief Helper for `fold_right`.
 */
template <template <typename...> class MetaFn,typename Head>
struct fold_right_impl<MetaFn,list_node<Head,null_type>>
{
	using type = Head;
};


/**
 * @brief Helper for `fold_right`.
 */
template <template <typename...> class MetaFn,typename Head,typename Tail>
struct fold_right_impl<MetaFn,list_node<Head,Tail>>
{
	using type = MetaFn<
		Head,
		typename fold_right_impl<MetaFn,Tail>::type
	>;
};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup containerops
 * @brief Right folding.
 *
 * Combines all the elements of a container, from right to left, applying a
 * binary metafunction.
 *
 * @param MetaFn        The binary metafunction (of two arguments or variadic).
 * @param TypeContainer The container.
 */
template <template <typename...> class MetaFn,typename TypeContainer>
using fold_right = typename fold_right_impl<MetaFn,TypeContainer>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_FOLD_RIGHT_HPP
