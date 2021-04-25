// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file logical_or.hpp
 *
 * @brief Defines the `logical_or` metafunction.
 */


#ifndef CYNODELIC_MULINUM_LOGICAL_OR_HPP
#define CYNODELIC_MULINUM_LOGICAL_OR_HPP


#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/integer_c.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `logical_or`.
 */
template <typename...>
struct logical_or_impl {};


/**
 * @brief Helper for `logical_or`.
 */
template <bool Value>
struct logical_or_impl<
	integer_c<bool, Value>
> :
	integer_c<bool, Value>
{};


/**
 * @brief Helper for `logical_or`.
 */
template <bool ValueL, bool ValueR>
struct logical_or_impl<
	integer_c<bool, ValueL>,
	integer_c<bool, ValueR>
> :
	integer_c<bool, ValueL || ValueR>
{};


/**
 * @brief Helper for `logical_or`.
 */
template <bool ValueL, bool ValueR, typename... Others>
struct logical_or_impl<
	integer_c<bool, ValueL>,
	integer_c<bool, ValueR>,
	Others...
> :
	logical_or_impl<integer_c<bool, ValueL || ValueR>, Others...>
{};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup logicops
 * @brief Logical OR.
 *
 * Performs logical OR of at least one boolean type (@ref bool_c).
 *
 * @param Booleans... Boolean types.
 */
template <typename... Booleans>
using logical_or = typename logical_or_impl<Booleans...>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_LOGICAL_OR_HPP
