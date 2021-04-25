// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file if.hpp
 *
 * @brief Defines the `if_` metafunction.
 */


#ifndef CYNODELIC_MULINUM_IF_HPP
#define CYNODELIC_MULINUM_IF_HPP


#include <cynodelic/mulinum/config.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `if_`.
 */
template <bool Cond, typename TrueCase, typename FalseCase>
struct if_impl
{
	using type = FalseCase;
};


/**
 * @brief Helper for `if_`.
 */
template <typename TrueCase, typename FalseCase>
struct if_impl<true, TrueCase, FalseCase>
{
	using type = TrueCase;
};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 + @ingroup control
 * @brief Conditional type.
 *
 * If `Cond` is true, results in `TrueCase`, otherwise, results in `FalseCase`.
 * Similar to the `:?` operator.
 *
 * @param Cond      The condition (a `bool`).
 * @param TrueCase  The yielded type when `cond` is `true`.
 * @param FalseCase The yielded type when `cond` is `false`.
 */
template <bool Cond, typename TrueCase, typename FalseCase>
using if_ = typename if_impl<Cond, TrueCase, FalseCase>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_IF_HPP
