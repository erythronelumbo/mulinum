// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file is_placeholder.hpp
 *
 * @brief Provides the `is_placeholder` trait type.
 */


#ifndef CYNODELIC_MULINUM_IS_PLACEHOLDER_HPP
#define CYNODELIC_MULINUM_IS_PLACEHOLDER_HPP


#include <cstddef>
#include <cstdint>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/arg.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `is_placeholder`. 
 */
template <typename>
struct is_placeholder_impl : false_ {};


/**
 * @brief Helper for `is_placeholder`. 
 */
template <std::size_t ArgNum>
struct is_placeholder_impl<arg<ArgNum>> : true_ {};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup typetraits
 * @brief Checks if a type is a placeholder.
 *
 * Checks if a type `T` is a placeholder (see @ref placeholders and @ref arg),
 * resulting in @ref true_ or @ref false_ .
 */
template <typename T>
using is_placeholder = typename is_placeholder_impl<T>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_IS_PLACEHOLDER_HPP
