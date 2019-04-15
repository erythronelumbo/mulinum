// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file equals.hpp
 *
 * @brief Provides the `equals` comparator.
 */


#ifndef CYNODELIC_MULINUM_EQUALS_HPP
#define CYNODELIC_MULINUM_EQUALS_HPP


#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/integer_c.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `equals`.
 */
template <typename Lhs,typename Rhs>
struct equals_impl : false_ {};


/**
 * @brief Helper for `equals`.
 */
template <typename EqTypes>
struct equals_impl<EqTypes,EqTypes> : true_ {};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup comparators
 * @brief Equality checker
 *
 * Checks if two types are equal.
 */
template <typename Lhs,typename Rhs>
using equals = typename equals_impl<Lhs,Rhs>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_EQUALS_HPP
