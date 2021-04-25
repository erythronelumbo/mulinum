// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file cartesian_product_helpers.hpp
 *
 * @brief Helpers for the `cartesian_product` metafunction.
 */


#ifndef CYNODELIC_MULINUM_DETAIL_CARTESIAN_PRODUCT_HELPERS_HPP
#define CYNODELIC_MULINUM_DETAIL_CARTESIAN_PRODUCT_HELPERS_HPP


#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/vector.hpp>
#include <cynodelic/mulinum/list.hpp>
#include <cynodelic/mulinum/null_type.hpp>
#include <cynodelic/mulinum/concat.hpp>


namespace cynodelic { namespace mulinum {

namespace detail
{
	/**
	 * @brief Helper for @ref cartesian_product.
	 */
	template <typename, typename>
	struct cprod_single_item;


	/**
	 * @brief Helper for @ref cartesian_product.
	 */
	template <typename SingleItem, typename... OtherItems>
	struct cprod_single_item<SingleItem, vector<OtherItems...>> :
		vector<vector<SingleItem, OtherItems>...>
	{};


	/**
	 * @brief Helper for @ref cartesian_product.
	 */
	template <typename SingleItem, typename Head, typename Tail>
	struct cprod_single_item<SingleItem, list_node<Head, Tail>> :
		list_node<
			list<SingleItem, Head>,
			typename cprod_single_item<SingleItem, Tail>::type
		>
	{};


	/**
	 * @brief Helper for @ref cartesian_product.
	 */
	template <typename SingleItem>
	struct cprod_single_item<SingleItem, null_type> :
		null_type
	{};


	/**
	 * @brief Helper for @ref cartesian_product.
	 */
	template <typename, typename>
	class cartesian_prod_two_impl;


	/**
	 * @brief Helper for @ref cartesian_product.
	 */
	template <typename... ItemsA, typename... ItemsB>
	class cartesian_prod_two_impl<vector<ItemsA...>, vector<ItemsB...>>
	{
		public:
			using rhs_vec = vector<ItemsB...>;
			using type = concat<typename cprod_single_item<ItemsA, rhs_vec>::type...>;
	};


	/**
	 * @brief Helper for @ref cartesian_product.
	 */
	template <typename HeadA, typename TailA, typename HeadB, typename TailB>
	class cartesian_prod_two_impl<list_node<HeadA, TailA>, list_node<HeadB, TailB>>
	{
		private:
			template <typename, typename, typename>
			struct helper;


			// helper({x1, {x2}}, {y1, {y2}}) -> {{x1, {y1}}, {{x1, {y2}}, {{x2, {y1}}, {{x2, {y2}}}}}}
			template <typename Head1, typename Tail1, typename Head2, typename Tail2, typename Dummy>
			struct helper<list_node<Head1, Tail1>, list_node<Head2, Tail2>, Dummy> :
				concat<
					typename cprod_single_item<Head1, list_node<Head2, Tail2>>::type,
					typename helper<Tail1, list_node<Head2, Tail2>, Dummy>::type
				>
			{};

			// helper({}, {y1, {y2}}) -> {}
			template <typename Head2, typename Tail2, typename Dummy>
			struct helper<null_type, list_node<Head2, Tail2>, Dummy> :
				null_type
			{};
		public:
			using type = typename helper<list_node<HeadA, TailA>, list_node<HeadB, TailB>, void>::type;
	};


	/**
	 * @brief Helper for @ref cartesian_product.
	 */
	template <typename ContainerA, typename ContainerB>
	using cartesian_prod_two = typename cartesian_prod_two_impl<ContainerA, ContainerB>::type;


	/**
	 * @brief Helper for @ref cartesian_product.
	 */
	template <typename>
	struct cprod_flatten_single;


	/**
	 * @brief Helper for @ref cartesian_product.
	 */
	template <typename... VItems_, typename... Items_>
	struct cprod_flatten_single<vector<vector<VItems_...>, Items_...>> : vector<VItems_..., Items_...> {};


	/**
	 * @brief Helper for @ref cartesian_product.
	 */
	template <typename LHead, typename LTail, typename Tail>
	struct cprod_flatten_single<list_node<list_node<LHead, LTail>, Tail>> :
		concat<list_node<LHead, LTail>, Tail> {};


	/**
	 * @brief Helper for @ref cartesian_product.
	 */
	template <typename LHead, typename LTail>
	struct cprod_flatten_single<list_node<list_node<LHead, LTail>, null_type>> :
		list_node<LHead, LTail> {};


	/**
	 * @brief Helper for @ref cartesian_product.
	 */
	template <typename>
	struct cprod_flatten_multiple;


	/**
	 * @brief Helper for @ref cartesian_product.
	 */
	template <typename... Items_>
	struct cprod_flatten_multiple<vector<Items_...>> : vector<typename cprod_flatten_single<Items_>::type...> {};


	/**
	 * @brief Helper for @ref cartesian_product.
	 */
	template <typename Head, typename Tail>
	struct cprod_flatten_multiple<list_node<Head, Tail>> :
		list_node<
			typename cprod_flatten_single<Head>::type,
			typename cprod_flatten_multiple<Tail>::type
		>
	{};


	/**
	 * @brief Helper for @ref cartesian_product.
	 */
	template <>
	struct cprod_flatten_multiple<null_type> :
		null_type
	{};
} // end of "detail" namespace

}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_DETAIL_CARTESIAN_PRODUCT_HELPERS_HPP
