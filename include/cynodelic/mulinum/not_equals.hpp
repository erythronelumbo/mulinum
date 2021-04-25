// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file not_equals.hpp
 *
 * @brief Provides the `not_equals` comparator.
 */


#ifndef CYNODELIC_MULINUM_NOT_EQUALS_HPP
#define CYNODELIC_MULINUM_NOT_EQUALS_HPP


#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/integer_c.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `not_equals`.
 */
template <typename Lhs, typename Rhs>
struct not_equals_impl : true_ {};


/**
 * @brief Helper for `not_equals`.
 */
template <typename EqTypes>
struct not_equals_impl<EqTypes, EqTypes> : false_ {};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup comparators
 * @brief Inequality checker
 *
 * Checks if two types are not equal, resulting in @ref true_ or @ref false_.
 */
template <typename Lhs, typename Rhs>
using not_equals = typename not_equals_impl<Lhs, Rhs>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_NOT_EQUALS_HPP
