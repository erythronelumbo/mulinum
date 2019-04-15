// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file olog_n_iota.hpp
 *
 * @brief Defines the `olog_n_iota` metafunction.
 */


#ifndef CYNODELIC_MULINUM_EXPERIMENTAL_OLOG_N_IOTA_HPP
#define CYNODELIC_MULINUM_EXPERIMENTAL_OLOG_N_IOTA_HPP


#include <cstdlib>
#include <cstddef>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/tags.hpp>
#include <cynodelic/mulinum/members_of.hpp>
#include <cynodelic/mulinum/vector_c.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/experimental/detail/olog_n_iota_helpers.hpp>


namespace cynodelic { namespace mulinum {

namespace experimental
{
#ifndef DOXYGEN_SHOULD_SKIP_THIS

	/**
	 * @brief Helper for `olog_n_iota`.
	 */
	template <typename,typename,typename,typename>
	struct olog_n_iota_impl {};

	
	/**
	 * @brief Helper for `olog_n_iota`.
	 */
	template <
		typename                       IntContainerTag,
		value_type_of<IntContainerTag> Start,
		std::size_t                    Num,
		value_type_of<IntContainerTag> Increment
	>
	struct olog_n_iota_impl<
		IntContainerTag,
		integer_c<value_type_of<IntContainerTag>,Start>,
		size_c<Num>,
		integer_c<value_type_of<IntContainerTag>,Increment>
	>
	{
		using type = typename detail::iota_transf<
			detail::unit_iota<IntContainerTag,0,(Num - 1)>,
			Increment,Start
		>::type;
	};

#endif // DOXYGEN_SHOULD_SKIP_THIS
	

	/**
	 * @ingroup experimental
	 * @brief Generates a sequence of consecutive values.
	 *
	 * Generates a sequence of consecutive values, with a logarithmic
	 * complexity.
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
		typename Increment = integer_c<value_type_of<IntContainerTag>,1>
	>
	using olog_n_iota = typename olog_n_iota_impl<IntContainerTag,Start,Num,Increment>::type;
	

	/**
	 * @ingroup experimental
	 * @brief Generates a sequence of consecutive values.
	 *
	 * Generates a sequence of consecutive values, with a logarithmic
	 * complexity.
	 *
	 * @param IntContainerTag An integer container tag.
	 * @param Start           The first value of the sequence.
	 * @param Num             The number of values in the sequence.
	 * @param Increment       The increment.
	 */
	template <
		typename                       IntContainerTag,
		value_type_of<IntContainerTag> Start,
		std::size_t                    Num,
		value_type_of<IntContainerTag> Increment = 1
	>
	using olog_n_iota_c = typename olog_n_iota_impl<
		IntContainerTag,
		integer_c<value_type_of<IntContainerTag>,Start>,
		size_c<Num>,
		integer_c<value_type_of<IntContainerTag>,Increment>
	>::type;
} // end of "experimental" namespace

}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_EXPERIMENTAL_OLOG_N_IOTA_HPP
