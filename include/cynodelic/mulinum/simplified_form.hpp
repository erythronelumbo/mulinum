// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file simplified_form.hpp
 *
 * @brief Defines the `simplified_form` metafunction.
 */


#ifndef CYNODELIC_MULINUM_SIMPLIFIED_FORM_HPP
#define CYNODELIC_MULINUM_SIMPLIFIED_FORM_HPP


#include <cstddef>
#include <cstdint>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/rational.hpp>
#include <cynodelic/mulinum/detail/special_functions.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `simplified_form`.
 */
template <typename>
struct simplified_form_impl {};


/**
 * @brief Helper for `simplified_form`.
 */
template <std::intmax_t Num,std::intmax_t Den>
struct simplified_form_impl<rational<Num,Den>> :
	rational<
		detail::simplify_num(Num,Den),
		detail::simplify_den(Num,Den)
	>
{};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup arithmeticops
 * @brief Simplified form of a `rational`.
 *
 * Turns a `RationalT` (a @ref rational) into its simplified form (e.g.
 * `simplified_form<rational<200,400>> becomes rational<1,2>`).
 *
 * @param RationalT A @ref rational.
 */
template <typename RationalT>
using simplified_form = typename simplified_form_impl<RationalT>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_SIMPLIFIED_FORM_HPP
