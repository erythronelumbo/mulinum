// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file logical_and.hpp
 *
 * @brief Defines the `logical_and` metafunction.
 */


#ifndef CYNODELIC_MULINUM_LOGICAL_AND_HPP
#define CYNODELIC_MULINUM_LOGICAL_AND_HPP


#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/integer_c.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `logical_and`.
 */
template <typename...>
struct logical_and_impl {};


/**
 * @brief Helper for `logical_and`.
 */
template <bool Value>
struct logical_and_impl<
	integer_c<bool,Value>
> :
	integer_c<bool,Value>
{};


/**
 * @brief Helper for `logical_and`.
 */
template <bool ValueL,bool ValueR>
struct logical_and_impl<
	integer_c<bool,ValueL>,
	integer_c<bool,ValueR>
> :
	integer_c<bool,ValueL && ValueR>
{};


/**
 * @brief Helper for `logical_and`.
 */
template <bool ValueL,bool ValueR,typename... Others>
struct logical_and_impl<
	integer_c<bool,ValueL>,
	integer_c<bool,ValueR>,
	Others...
> :
	logical_and_impl<integer_c<bool,ValueL && ValueR>,Others...>
{};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup logicops
 * @brief Logical AND.
 *
 * Performs logical AND of boolean types (@ref bool_c).
 *
 * @param Booleans... All the types.
 */
template <typename... Booleans>
using logical_and = typename logical_and_impl<Booleans...>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_LOGICAL_AND_HPP
