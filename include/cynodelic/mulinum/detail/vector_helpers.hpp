// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file vector_helpers.hpp
 *
 * @brief Helpers for the `vector` type container.
 */


#ifndef CYNODELIC_MULINUM_DETAIL_VECTOR_HELPERS_HPP
#define CYNODELIC_MULINUM_DETAIL_VECTOR_HELPERS_HPP


#include <cstdlib>
#include <cstddef>
#include <cstdint>

#include <cynodelic/mulinum/config.hpp>


namespace cynodelic { namespace mulinum {

namespace detail
{
	/**
	 * @brief Helper for @ref vector.
	 */
	template <std::size_t...>
	struct idx_seq {};


	/**
	 * @brief Helper for @ref vector.
	 */
	template <typename, typename>
	struct isq_cat_two;


	/**
	 * @brief Helper for @ref vector.
	 */
	template <std::size_t... Lhs, std::size_t... Rhs>
	struct isq_cat_two<idx_seq<Lhs...>, idx_seq<Rhs...>>
	{
		using type = idx_seq<Lhs..., Rhs...>;
	};


	/**
	 * @brief Helper for @ref vector.
	 */
	template <std::size_t Count, std::size_t Max, bool = (Count == Max)>
	struct make_isq
	{
		using type = typename isq_cat_two<
			idx_seq<Count>,
			typename make_isq<Count + 1, Max, (Count + 1) == Max>::type
		>::type;
	};


	/**
	 * @brief Helper for @ref vector.
	 */
	template <std::size_t Count, std::size_t Max>
	struct make_isq<Count, Max, true>
	{
		using type = idx_seq<>;
	};


	/**
	 * @brief Helper for @ref vector.
	 */
	template <std::size_t Idx, typename Item>
	struct vector_item
	{
		using item_type = Item;
	};
	

	/**
	 * @brief Helper for @ref vector.
	 */
	template <typename, typename...>
	struct vector_impl;


	/**
	 * @brief Helper for @ref vector.
	 */
	template <std::size_t... Ids, typename... Items>
	struct vector_impl<idx_seq<Ids...>, Items...> :
		vector_item<Ids, Items>...
	{};


	/**
	 * @brief Helper for @ref vector.
	 */
	template <std::size_t Idx, typename T>
	inline constexpr auto vector_get(vector_item<Idx, T>) -> vector_item<Idx, T>;


	/**
	 * @brief Helper for @ref at.
	 */
	template <typename VecT, std::size_t Idx, typename VecItem = decltype(vector_get<Idx>(VecT{}))>
	struct vector_at
	{
		using type = typename VecItem::item_type;
	};
} // end of "detail" namespace


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_DETAIL_VECTOR_HELPERS_HPP
