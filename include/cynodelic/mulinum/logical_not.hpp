// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file logical_not.hpp
 *
 * @brief Defines the `logical_not` metafunction.
 */


#ifndef CYNODELIC_MULINUM_LOGICAL_NOT_HPP
#define CYNODELIC_MULINUM_LOGICAL_NOT_HPP


#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/integer_c.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `logical_not`.
 */
template <typename>
struct logical_not_impl {};


/**
 * @brief Helper for `logical_not`.
 */
template <bool Value>
struct logical_not_impl<integer_c<bool,Value>> :
	integer_c<bool,!Value>
{};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup logicops
 * @brief Logical NOT.
 *
 * Negates a boolean value.
 *
 * @param BoolC A boolean type (@ref bool_c).
 */
template <typename BoolC>
using logical_not = typename logical_not_impl<BoolC>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_LOGICAL_NOT_HPP
