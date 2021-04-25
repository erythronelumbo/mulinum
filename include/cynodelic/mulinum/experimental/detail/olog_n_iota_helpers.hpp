// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file olog_n_iota_helper.hpp
 *
 * @brief Defines helper structs for `olog_n_iota`.
 */


#ifndef CYNODELIC_MULINUM_EXPERIMENTAL_DETAIL_OLOG_N_IOTA_HELPERS_HPP
#define CYNODELIC_MULINUM_EXPERIMENTAL_DETAIL_OLOG_N_IOTA_HELPERS_HPP


#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/null_type.hpp>
#include <cynodelic/mulinum/string.hpp>
#include <cynodelic/mulinum/vector_c.hpp>
#include <cynodelic/mulinum/list_c.hpp>
#include <cynodelic/mulinum/concat.hpp>
#include <cynodelic/mulinum/make_from_tag_c.hpp>


namespace cynodelic { namespace mulinum {

namespace experimental
{
	namespace detail
	{
		/**
		 * @brief Helper for @ref olog_n_iota.
		 */
		enum class iota_flag
		{
			continue_,
			difference_is_one,
			equals_start_and_end
		};


		/**
		 * @brief Helper function for @ref olog_n_iota.
		 */
		template <typename IntType>
		inline constexpr iota_flag pick_iota_flag(const IntType& start, const IntType& end)
		{
			return (start == end) ?
				iota_flag::equals_start_and_end :
				(((end - start) == 1) ?
					iota_flag::difference_is_one :
					iota_flag::continue_);
		}


		/**
		 * @brief Helper for @ref olog_n_iota.
		 */
		template <
			typename IntContainerTag,
			value_type_of<IntContainerTag>,
			value_type_of<IntContainerTag>,
			iota_flag
		>
		struct unit_iota_impl;


		/**
		 * @brief Helper for @ref olog_n_iota.
		 */
		template <
			typename IntContainerTag,
			value_type_of<IntContainerTag> Start,
			value_type_of<IntContainerTag> End
		>
		struct unit_iota_impl<IntContainerTag, Start, End, iota_flag::continue_> :
			concat<
				typename unit_iota_impl<
					IntContainerTag,
					Start,
					(Start + End)/2,
					pick_iota_flag<value_type_of<IntContainerTag>>(Start, (Start + End)/2)
				>::type,
				typename unit_iota_impl<
					IntContainerTag,
					((Start + End)/2 + 1),
					End,
					pick_iota_flag<value_type_of<IntContainerTag>>(((Start + End)/2 + 1), End)
				>::type
			>
		{};


		/**
		 * @brief Helper for @ref olog_n_iota.
		 */
		template <
			typename IntContainerTag,
			value_type_of<IntContainerTag> Start,
			value_type_of<IntContainerTag> End
		>
		struct unit_iota_impl<IntContainerTag, Start, End, iota_flag::difference_is_one> :
			make_from_tag_c<IntContainerTag, Start, End>
		{};


		/**
		 * @brief Helper for @ref olog_n_iota.
		 */
		template <
			typename IntContainerTag,
			value_type_of<IntContainerTag> Start,
			value_type_of<IntContainerTag> End
		>
		struct unit_iota_impl<IntContainerTag, Start, End, iota_flag::equals_start_and_end> :
			make_from_tag_c<IntContainerTag, Start>
		{};


		/**
		 * @brief Helper for @ref olog_n_iota.
		 */
		template <
			typename IntContainerTag,
			value_type_of<IntContainerTag> Start,
			value_type_of<IntContainerTag> End
		>
		using unit_iota = typename unit_iota_impl<IntContainerTag, Start, End, pick_iota_flag<value_type_of<IntContainerTag>>(Start, End)>::type;


		/**
		 * @brief Helper for @ref olog_n_iota.
		 */
		template <
			typename IntContainer,
			value_type_of<IntContainer>,
			value_type_of<IntContainer>
		>
		struct iota_transf;


		/**
		 * @brief Helper for @ref olog_n_iota.
		 */
		template <
			typename   IntType,
			IntType... Items,
			value_type_of<vector_c<IntType, Items...>> Mul,
			value_type_of<vector_c<IntType, Items...>> Add
		>
		struct iota_transf<vector_c<IntType, Items...>, Mul, Add> :
			vector_c<IntType, (Mul*Items + Add)...>
		{};


		/**
		 * @brief Helper for @ref olog_n_iota.
		 */
		template <
			char...  Items,
			value_type_of<string<Items...>> Mul,
			value_type_of<string<Items...>> Add
		>
		struct iota_transf<string<Items...>, Mul, Add> :
			string<(Mul*Items + Add)...>
		{};


		/**
		 * @brief Helper for @ref olog_n_iota.
		 */
		template <
			typename IntType,
			IntType  Head,
			typename Tail,
			value_type_of<list_node_c<IntType, Head, Tail>> Mul,
			value_type_of<list_node_c<IntType, Head, Tail>> Add
		>
		struct iota_transf<list_node_c<IntType, Head, Tail>, Mul, Add> :
			list_node_c<
				IntType,
				(Mul*Head + Add),
				typename iota_transf<Tail, Mul, Add>::type
			>
		{};


		/**
		 * @brief Helper for @ref olog_n_iota.
		 */
		template <
			typename IntType,
			IntType  Head,
			value_type_of<list_node_c<IntType, Head, null_type>> Mul,
			value_type_of<list_node_c<IntType, Head, null_type>> Add
		>
		struct iota_transf<list_node_c<IntType, Head, null_type>, Mul, Add> :
			list_node_c<
				IntType,
				(Mul*Head + Add),
				null_type
			>
		{};
	}  // end of "detail" namespace
} // end of "experimental" namespace

}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_EXPERIMENTAL_DETAIL_OLOG_N_IOTA_HELPERS_HPP
