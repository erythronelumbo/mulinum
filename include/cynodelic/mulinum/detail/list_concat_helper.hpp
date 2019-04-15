// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file list_concat_helper.hpp
 *
 * @brief Defines the `list_concat_helper` helper metafunction.
 */


#ifndef CYNODELIC_MULINUM_DETAIL_LIST_CONCAT_HELPER_HPP
#define CYNODELIC_MULINUM_DETAIL_LIST_CONCAT_HELPER_HPP


#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/if.hpp>
#include <cynodelic/mulinum/list.hpp>


namespace cynodelic { namespace mulinum {

namespace detail
{
	/**
	 * @brief Helper for @ref concat.
	 */
	template <typename,typename>
	struct list_concat_helper;

	
	/**
	 * @brief Helper for @ref concat.
	 */
	template <
		typename LhsHead,typename LhsTail,
		typename RhsHead,typename RhsTail
	>
	struct list_concat_helper<
		list_node<LhsHead,LhsTail>,
		list_node<RhsHead,RhsTail>
	>
	{
		using type = list_node<
			LhsHead,
			typename list_concat_helper<
				LhsTail,
				list_node<RhsHead,RhsTail>
			>::type
		>;
	};

	
	/**
	 * @brief Helper for @ref concat.
	 */
	template <typename LhsHead,typename RhsHead,typename RhsTail>
	struct list_concat_helper<
		list_node<LhsHead,null_type>,
		list_node<RhsHead,RhsTail>
	>
	{
		using type = list_node<LhsHead,list_node<RhsHead,RhsTail>>;
	};
} // end of "detail" namespace

}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_DETAIL_LIST_CONCAT_HELPER_HPP
