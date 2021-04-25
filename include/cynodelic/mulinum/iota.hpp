// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file iota.hpp
 *
 * @brief Defines the `iota` metafunction.
 */


#ifndef CYNODELIC_MULINUM_IOTA_HPP
#define CYNODELIC_MULINUM_IOTA_HPP


#include <cstddef>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/string.hpp>
#include <cynodelic/mulinum/vector_c.hpp>
#include <cynodelic/mulinum/list_c.hpp>
#include <cynodelic/mulinum/concat.hpp>
#include <cynodelic/mulinum/members_of.hpp>
#include <cynodelic/mulinum/make_from_tag_c.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `iota`.
 */
template <typename, typename, typename, typename>
struct iota_impl {};


/**
 * @brief Helper for `iota`.
 */
template <
	typename                       IntContainerTag,
	value_type_of<IntContainerTag> Start,
	std::size_t                    Num,
	value_type_of<IntContainerTag> Increment
>
struct iota_impl<
	IntContainerTag,
	integer_c<value_type_of<IntContainerTag>, Start>,
	size_c<Num>,
	integer_c<value_type_of<IntContainerTag>, Increment>
>
{
	using type = concat<
		make_from_tag_c<IntContainerTag, Start>,
		typename iota_impl<
			IntContainerTag,
			integer_c<value_type_of<IntContainerTag>, (Start + Increment)>,
			size_c<Num - 1>,
			integer_c<value_type_of<IntContainerTag>, Increment>
		>::type
	>;
};


/**
 * @brief Helper for `iota`.
 */
template <
	typename                       IntContainerTag,
	value_type_of<IntContainerTag> Start,
	value_type_of<IntContainerTag> Increment
>
struct iota_impl<
	IntContainerTag,
	integer_c<value_type_of<IntContainerTag>, Start>,
	size_c<1>,
	integer_c<value_type_of<IntContainerTag>, Increment>
>
{
	using type = make_from_tag_c<IntContainerTag, Start>;
};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup containerops
 * @brief Generates a sequence of consecutive values.
 *
 * Generates an integer container with a sequence of consecutive values.
 *
 * @param IntContainerTag An integer container tag.
 * @param Start           The first value of the sequence (an @ref integer_c,
 *                        which integer type must be the same as in
 *                        `IntContainerTag`).
 * @param Num             The number of values in the sequence (a
 *                        @ref size_c).
 * @param Increment       The increment (an @ref integer_c, which integer type
 *                        must be the same as in `IntContainerTag`).
 */
template <
	typename IntContainerTag,
	typename Start,
	typename Num,
	typename Increment = integer_c<value_type_of<IntContainerTag>, 1>
>
using iota = typename iota_impl<IntContainerTag, Start, Num, Increment>::type;


/**
 * @ingroup containerops
 * @brief Generates a sequence of consecutive values.
 *
 * Generates an integer container with a sequence of consecutive values.
 *
 * @param IntContainerTag An integer container tag.
 * @param Start           The first value of the sequence (an @ref integer_c,
 *                        which integer type must be the same as in
 *                        `IntContainerTag`).
 * @param Num             The number of values in the sequence (a
 *                        @ref size_c).
 * @param Increment       The increment (an @ref integer_c, which integer type
 *                        must be the same as in `IntContainerTag`).
 */
template <
	typename                       IntContainerTag,
	value_type_of<IntContainerTag> Start,
	std::size_t                    Num,
	value_type_of<IntContainerTag> Increment = 1
>
using iota_c = typename iota_impl<
	IntContainerTag,
	integer_c<value_type_of<IntContainerTag>, Start>,
	size_c<Num>,
	integer_c<value_type_of<IntContainerTag>, Increment>
>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_IOTA_HPP
