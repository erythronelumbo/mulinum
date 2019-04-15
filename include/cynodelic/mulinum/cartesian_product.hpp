// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file cartesian_product.hpp
 *
 * @brief Provides the `cartesian_product` metafunction.
 */


#ifndef CYNODELIC_MULINUM_CARTESIAN_PRODUCT_HPP
#define CYNODELIC_MULINUM_CARTESIAN_PRODUCT_HPP


#include <cstddef>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/vector.hpp>
#include <cynodelic/mulinum/list.hpp>
#include <cynodelic/mulinum/concat.hpp>
#include <cynodelic/mulinum/detail/cartesian_product_helpers.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `cartesian_product`.
 */
template <typename,typename,typename...>
struct cartesian_product_impl {};


/**
 * @brief Helper for `cartesian_product`.
 */
template <
	typename... ItemsA,
	typename... ItemsB
>
struct cartesian_product_impl<vector<ItemsA...>,vector<ItemsB...>>
{
	using type = detail::cartesian_prod_two<vector<ItemsA...>,vector<ItemsB...>>;
};


/**
 * @brief Helper for `cartesian_product`.
 */
template <
	typename... ItemsA,
	typename... ItemsB,
	typename... Others
>
struct cartesian_product_impl<vector<ItemsA...>,vector<ItemsB...>,Others...>
{
	using type = typename detail::cprod_flatten_multiple<
		typename cartesian_product_impl<
			detail::cartesian_prod_two<
				vector<ItemsA...>,
				vector<ItemsB...>
			>,
			Others...
		>::type
	>::type;
};


/**
 * @brief Helper for `cartesian_product`.
 */
template <
	typename HeadA,typename TailA,
	typename HeadB,typename TailB
>
struct cartesian_product_impl<list_node<HeadA,TailA>,list_node<HeadB,TailB>>
{
	using type = detail::cartesian_prod_two<list_node<HeadA,TailA>,list_node<HeadB,TailB>>;
};


/**
 * @brief Helper for `cartesian_product`.
 */
template <
	typename HeadA,typename TailA,
	typename HeadB,typename TailB,
	typename... Others
>
struct cartesian_product_impl<list_node<HeadA,TailA>,list_node<HeadB,TailB>,Others...>
{
	using type = typename detail::cprod_flatten_multiple<
		typename cartesian_product_impl<
			detail::cartesian_prod_two<
				list_node<HeadA,TailA>,
				list_node<HeadB,TailB>
			>,
			Others...
		>::type
	>::type;
};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup containerops
 * @brief Cartesian product.
 *
 * The cartesian product of various type containers of the same type.
 *
 * @param TypeContainers... The containers, which must be of the same type.
 */
template <typename... TypeContainers>
using cartesian_product = typename cartesian_product_impl<TypeContainers...>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_CARTESIAN_PRODUCT_HPP
