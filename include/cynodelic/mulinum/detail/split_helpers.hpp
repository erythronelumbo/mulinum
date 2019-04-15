// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file split_helpers.hpp
 *
 * @brief Helpers for the `split` metafunction.
 */


#ifndef CYNODELIC_MULINUM_DETAIL_SPLIT_HELPERS_HPP
#define CYNODELIC_MULINUM_DETAIL_SPLIT_HELPERS_HPP


#include <cstddef>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/if.hpp>
#include <cynodelic/mulinum/string.hpp>
#include <cynodelic/mulinum/concat.hpp>
#include <cynodelic/mulinum/make_from_tag.hpp>


namespace cynodelic { namespace mulinum {

namespace detail
{
	/**
	 * @brief Helper for @ref split.
	 */
	template <char,typename>
	struct split_remove_front_delims;
	

	/**
	 * @brief Helper for @ref split.
	 */
	template <char Delim,char First_,char... Others_>
	struct split_remove_front_delims<Delim,string<First_,Others_...>>
	{
		using type = if_<
			(Delim == First_),
			typename split_remove_front_delims<Delim,string<Others_...>>::type,
			string<First_,Others_...>
		>;
	};


	/**
	 * @brief Helper for @ref split.
	 */
	template <char Delim,char Last_>
	struct split_remove_front_delims<Delim,string<Last_>>
	{
		using type = if_<
			(Delim == Last_),
			string<>,
			string<Last_>
		>;
	};


	/**
	 * @brief Helper for @ref split.
	 */
	template <char,std::size_t,typename,bool>
	struct split_make_delims_unique;


	/**
	 * @brief Helper for @ref split.
	 */
	template <char Delim,std::size_t N,char First_,char Second_>
	struct split_make_delims_unique<Delim,N,string<First_,Second_>,true>
	{
		using type = if_<
			(First_ == Delim) && (Second_ == Delim),
			string<>,
			string<First_>
		>;
	};


	/**
	 * @brief Helper for @ref split.
	 */
	template <char Delim,std::size_t N,char First_,char Second_,char... Others_>
	struct split_make_delims_unique<Delim,N,string<First_,Second_,Others_...>,false>
	{
		using type = concat<
			if_<
				(First_ == Delim) && (Second_ == Delim),
				string<>,
				string<First_>
			>,
			typename split_make_delims_unique<Delim,N - 1,string<Second_,Others_...>,(N - 1) == 0>::type
		>;
	};


	/**
	 * @brief Helper for @ref split.
	 */
	template <char,typename>
	struct split_take_first_item;


	/**
	 * @brief Helper for @ref split.
	 */
	template <char Delim,char First_,char... Others_>
	struct split_take_first_item<Delim,string<First_,Others_...>>
	{
		using type = if_<
			(First_ == Delim),
			string<>,
			concat<
				string<First_>,
				typename split_take_first_item<Delim,string<Others_...>>::type
			>
		>;
	};


	/**
	 * @brief Helper for @ref split.
	 */
	template <char Delim,char Last_>
	struct split_take_first_item<Delim,string<Last_>>
	{
		using type = if_<
			Last_ == Delim,
			string<>,
			string<Last_>
		>;
	};


	/**
	 * @brief Helper for @ref split.
	 */
	template <char Delim,typename StringT_,std::size_t From>
	using split_take_item = typename detail::split_take_first_item<Delim,take_c<StringT_,From,StringT_::size - From>>::type;


	/**
	 * @brief Helper for @ref split.
	 */
	template <typename TypeContainerTag,char Delim,typename StringT_,std::size_t Count,bool = (Count == StringT_::size)>
	struct splitter
	{
		using type = concat<
			make_from_tag<TypeContainerTag,split_take_item<Delim,StringT_,Count>>,
			typename splitter<
				TypeContainerTag,
				Delim,
				StringT_,
				(Count + split_take_item<Delim,StringT_,Count>::size + 1)
			>::type
		>;
	};


	/**
	 * @brief Helper for @ref split.
	 */
	template <typename TypeContainerTag,char Delim,typename StringT_,std::size_t Count>
	struct splitter<TypeContainerTag,Delim,StringT_,Count,true>
	{
		using type = make_from_tag<TypeContainerTag>;
	};
} // end of "detail" namespace

}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_DETAIL_SPLIT_HELPERS_HPP
