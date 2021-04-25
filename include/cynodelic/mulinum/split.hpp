// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file split.hpp
 *
 * @brief Defines the `split` metafunction.
 */


#ifndef CYNODELIC_MULINUM_SPLIT_HPP
#define CYNODELIC_MULINUM_SPLIT_HPP


#include <cstddef>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/string.hpp>
#include <cynodelic/mulinum/list.hpp>
#include <cynodelic/mulinum/vector.hpp>
#include <cynodelic/mulinum/concat.hpp>
#include <cynodelic/mulinum/reverse.hpp>
#include <cynodelic/mulinum/take.hpp>
#include <cynodelic/mulinum/make_from_tag.hpp>
#include <cynodelic/mulinum/detail/split_helpers.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `split`.
 */
template <typename, typename, typename, typename>
class split_impl {};


/**
 * @brief Helper for `split`.
 */
template <char... Chars, char Delim, typename TypeContainerTag>
class split_impl<string<Chars...>, integer_c<char, Delim>, TypeContainerTag, true_>
{
	private:
		// Remove front delimiters, reverse, remove "front" delimiters and reverse again
		using clean = reverse<
			typename detail::split_remove_front_delims<
				Delim,
				reverse<
					typename detail::split_remove_front_delims<
						Delim,
						string<Chars...>
					>::type
				>
			>::type
		>;

		// The string with single delims
		using single_delims = typename detail::split_make_delims_unique<
			Delim,
			clean::size - 1,
			concat<clean,string<','>>,
			false
		>::type;

	public:
		using type = typename detail::splitter<
			TypeContainerTag,
			Delim,
			concat<
				single_delims,
				string<Delim>
			>,
			0,
			false
		>::type;
};


/**
 * @brief Helper for `split`.
 */
template <char... Chars, char Delim, typename TypeContainerTag>
class split_impl<string<Chars...>, integer_c<char, Delim>, TypeContainerTag, false_>
{
	public:
		using type = typename detail::splitter<
			TypeContainerTag,
			Delim,
			concat<
				string<Chars...>,
				string<Delim>
			>,
			0,
			false
		>::type;
};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup stringops
 * @brief Splits a string.
 *
 * Splits a @ref string into a container of @ref string s, given a delimiter.
 *
 * @param StringT          The string.
 * @param Delim            The delimiter (a @ref char_c).
 * @param TypeContainerTag The tag for the output container.
 * @param ByMultipleDelims Split regardless of the ammount of delimiters
 *                         (@ref true_ or @ref false_, default: @ref false_).
 */
template <typename StringT, typename Delim, typename TypeContainerTag, typename ByMultipleDelims = false_>
using split = typename split_impl<StringT, Delim, TypeContainerTag, ByMultipleDelims>::type;


/**
 * @ingroup stringops
 * @brief Split a @ref string.
 *
 * Splits a @ref string into a container of @ref string s, given a delimiter.
 *
 * @param StringT          The string.
 * @param Delim            The delimiter.
 * @param TypeContainerTag The tag for the output container.
 * @param ByMultipleDelims Split regardless of the ammount of delimiters
 *                         (default : `false`).
 */
template <typename StringT, char Delim, typename TypeContainerTag, bool ByMultipleDelims = false>
using split_c = typename split_impl<StringT, char_c<Delim>, TypeContainerTag, bool_c<ByMultipleDelims>>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_SPLIT_HPP
