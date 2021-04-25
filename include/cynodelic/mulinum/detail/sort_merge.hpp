// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file sort_merge.hpp
 *
 * @brief Defines the `sort_merge` helper.
 */


#ifndef CYNODELIC_MULINUM_DETAIL_SORT_MERGE_HPP
#define CYNODELIC_MULINUM_DETAIL_SORT_MERGE_HPP


#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/vector.hpp>
#include <cynodelic/mulinum/null_type.hpp>
#include <cynodelic/mulinum/list.hpp>
#include <cynodelic/mulinum/string.hpp>
#include <cynodelic/mulinum/vector_c.hpp>
#include <cynodelic/mulinum/list_c.hpp>
#include <cynodelic/mulinum/concat.hpp>


namespace cynodelic { namespace mulinum {

namespace detail
{
	/**
	 * @brief Helper for @ref sort.
	 */
	template <typename Comparator, typename TypeA, typename TypeB>
	using call_comparator = typename Comparator::template apply<TypeA, TypeB>::type;


	/**
	 * @brief Helper for @ref sort.
	 */
	template <typename, typename, typename>
	struct sort_merge_impl;


	/**
	 * @brief Helper for @ref sort.
	 */
	template <typename IntType, IntType FirstB, IntType... Others, typename Comparator>
	struct sort_merge_impl<
		vector_c<IntType>,
		vector_c<IntType, FirstB, Others...>,
		Comparator
	>
	{
		using type = vector_c<IntType, FirstB, Others...>;
	};


	/**
	 * @brief Helper for @ref sort.
	 */
	template <typename IntType, IntType FirstA, IntType... Others, typename Comparator>
	struct sort_merge_impl<
		vector_c<IntType, FirstA, Others...>,
		vector_c<IntType>,
		Comparator
	>
	{
		using type = vector_c<IntType, FirstA, Others...>;
	};


	/**
	 * @brief Helper for @ref sort.
	 */
	template <
		typename IntType,
		IntType FirstA, IntType... OthersA,
		IntType FirstB, IntType... OthersB,
		typename Comparator
	>
	struct sort_merge_impl<
		vector_c<IntType, FirstA, OthersA...>,
		vector_c<IntType, FirstB, OthersB...>,
		Comparator
	>
	{
		using type = if_<
			call_comparator<
				Comparator,
				integer_c<IntType, FirstA>,
				integer_c<IntType, FirstB>
			>::value,
			concat<
				vector_c<IntType, FirstA>,
				typename sort_merge_impl<
					vector_c<IntType, OthersA...>,
					vector_c<IntType, FirstB, OthersB...>,
					Comparator
				>::type
			>,
			concat<
				vector_c<IntType, FirstB>,
				typename sort_merge_impl<
					vector_c<IntType, FirstA, OthersA...>,
					vector_c<IntType, OthersB...>,
					Comparator
				>::type
			>
		>;
	};


	/**
	 * @brief Helper for @ref sort.
	 */
	template <char FirstB, char... Others, typename Comparator>
	struct sort_merge_impl<
		string<>,
		string<FirstB, Others...>,
		Comparator
	>
	{
		using type = string<FirstB, Others...>;
	};


	/**
	 * @brief Helper for @ref sort.
	 */
	template <char FirstA, char... Others, typename Comparator>
	struct sort_merge_impl<
		string<FirstA, Others...>,
		string<>,
		Comparator
	>
	{
		using type = string<FirstA, Others...>;
	};


	/**
	 * @brief Helper for @ref sort.
	 */
	template <
		char FirstA, char... OthersA,
		char FirstB, char... OthersB,
		typename Comparator
	>
	struct sort_merge_impl<
		string<FirstA, OthersA...>,
		string<FirstB, OthersB...>,
		Comparator
	>
	{
		using type = if_<
			call_comparator<
				Comparator,
				char_c<FirstA>,
				char_c<FirstB>
			>::value,
			concat<
				string<FirstA>,
				typename sort_merge_impl<
					string<OthersA...>,
					string<FirstB, OthersB...>,
					Comparator
				>::type
			>,
			concat<
				string<FirstB>,
				typename sort_merge_impl<
					string<FirstA, OthersA...>,
					string<OthersB...>,
					Comparator
				>::type
			>
		>;
	};


	/**
	 * @brief Helper for @ref sort.
	 */
	template <typename IntType, IntType FirstB, typename TailB, typename Comparator>
	struct sort_merge_impl<
		null_type,
		list_node_c<IntType, FirstB, TailB>,
		Comparator
	>
	{
		using type = list_node_c<IntType, FirstB, TailB>;
	};


	/**
	 * @brief Helper for @ref sort.
	 */
	template <typename IntType, IntType FirstA, typename TailA, typename Comparator>
	struct sort_merge_impl<
		list_node_c<IntType, FirstA, TailA>,
		null_type,
		Comparator
	>
	{
		using type = list_node_c<IntType, FirstA, TailA>;
	};


	/**
	 * @brief Helper for @ref sort.
	 */
	template <
		typename IntType,
		IntType FirstA, typename TailA,
		IntType FirstB, typename TailB,
		typename Comparator
	>
	struct sort_merge_impl<
		list_node_c<IntType, FirstA, TailA>,
		list_node_c<IntType, FirstB, TailB>,
		Comparator
	>
	{
		using type = if_<
			call_comparator<
				Comparator,
				integer_c<IntType, FirstA>,
				integer_c<IntType, FirstB>
			>::value,
			list_node_c<
				IntType, FirstA,
				typename sort_merge_impl<
					TailA,
					list_node_c<IntType, FirstB, TailB>,
					Comparator
				>::type
			>,
			list_node_c<
				IntType, FirstB,
				typename sort_merge_impl<
					list_node_c<IntType, FirstA, TailA>,
					TailB,
					Comparator
				>::type
			>
		>;
	};


	/**
	 * @brief Helper for @ref sort.
	 */
	template <typename FirstB, typename... Others, typename Comparator>
	struct sort_merge_impl<
		vector<>,
		vector<FirstB, Others...>,
		Comparator
	>
	{
		using type = vector<FirstB, Others...>;
	};


	/**
	 * @brief Helper for @ref sort.
	 */
	template <typename FirstA, typename... Others, typename Comparator>
	struct sort_merge_impl<
		vector<FirstA, Others...>,
		vector<>,
		Comparator
	>
	{
		using type = vector<FirstA, Others...>;
	};


	/**
	 * @brief Helper for @ref sort.
	 */
	template <
		typename FirstA, typename... OthersA,
		typename FirstB, typename... OthersB,
		typename Comparator
	>
	struct sort_merge_impl<
		vector<FirstA, OthersA...>,
		vector<FirstB, OthersB...>,
		Comparator
	>
	{
		using type = if_<
			call_comparator<Comparator, FirstA, FirstB>::value,
			concat<
				vector<FirstA>,
				typename sort_merge_impl<
					vector<OthersA...>,
					vector<FirstB, OthersB...>,
					Comparator
				>::type
			>,
			concat<
				vector<FirstB>,
				typename sort_merge_impl<
					vector<FirstA, OthersA...>,
					vector<OthersB...>,
					Comparator
				>::type
			>
		>;
	};


	/**
	 * @brief Helper for @ref sort.
	 */
	template <typename FirstB, typename TailB, typename Comparator>
	struct sort_merge_impl<
		null_type,
		list_node<FirstB, TailB>,
		Comparator
	>
	{
		using type = list_node<FirstB, TailB>;
	};


	/**
	 * @brief Helper for @ref sort.
	 */
	template <typename FirstA, typename TailA, typename Comparator>
	struct sort_merge_impl<
		list_node<FirstA, TailA>,
		null_type,
		Comparator
	>
	{
		using type = list_node<FirstA, TailA>;
	};


	/**
	 * @brief Helper for @ref sort.
	 */
	template <
		typename FirstA, typename TailA,
		typename FirstB, typename TailB,
		typename Comparator
	>
	struct sort_merge_impl<
		list_node<FirstA, TailA>,
		list_node<FirstB, TailB>,
		Comparator
	>
	{
		using type = if_<
			call_comparator<Comparator, FirstA, FirstB>::value,
			list_node<
				FirstA,
				typename sort_merge_impl<
					TailA,
					list_node<FirstB, TailB>,
					Comparator
				>::type
			>,
			list_node<
				FirstB,
				typename sort_merge_impl<
					list_node<FirstA, TailA>,
					TailB,
					Comparator
				>::type
			>
		>;
	};


	/**
	 * @brief Helper for @ref sort.
	 */
	template <typename HalfCont1, typename HalfCont2, typename Comparator>
	using sort_merge = typename sort_merge_impl<HalfCont1, HalfCont2, Comparator>::type;
} // end of "detail" namespace

}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_DETAIL_SORT_MERGE_HPP
