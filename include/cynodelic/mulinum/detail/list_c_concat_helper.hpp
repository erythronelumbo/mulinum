// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file list_c_concat_helper.hpp
 *
 * @brief Defines the `list_c_concat_helper` helper metafunction.
 */


#ifndef CYNODELIC_MULINUM_DETAIL_LIST_C_CONCAT_HELPER_HPP
#define CYNODELIC_MULINUM_DETAIL_LIST_C_CONCAT_HELPER_HPP


#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/if.hpp>
#include <cynodelic/mulinum/list_c.hpp>


namespace cynodelic { namespace mulinum {

namespace detail
{
	/**
	 * @brief Helper for @ref concat.
	 */
	 template <typename, typename>
	struct list_c_concat_helper;

	
	/**
	 * @brief Helper for @ref concat.
	 */
	template <
		typename IntType,
		IntType LhsHead, typename LhsTail,
		IntType RhsHead, typename RhsTail
	>
	struct list_c_concat_helper<
		list_node_c<IntType, LhsHead, LhsTail>,
		list_node_c<IntType, RhsHead, RhsTail>
	>
	{
		using type = list_node_c<
			IntType,
			LhsHead,
			typename list_c_concat_helper<
				LhsTail,
				list_node_c<IntType, RhsHead, RhsTail>
			>::type
		>;
	};

	
	/**
	 * @brief Helper for @ref concat.
	 */
	template <
		typename IntType,
		IntType  LhsHead,
		IntType  RhsHead, typename RhsTail
	>
	struct list_c_concat_helper<
		list_node_c<IntType, LhsHead, null_type>,
		list_node_c<IntType, RhsHead, RhsTail>
	>
	{
		using type = list_node_c<
			IntType,
			LhsHead,
			list_node_c<IntType, RhsHead, RhsTail>
		>;
	};
} // end of "detail" namespace

}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_DETAIL_LIST_C_CONCAT_HELPER_HPP
