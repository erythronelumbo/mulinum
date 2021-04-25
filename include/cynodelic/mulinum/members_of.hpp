// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file members_of.hpp
 *
 * @brief Defines shorthands for access to member types.
 */


#ifndef CYNODELIC_MULINUM_MEMBERS_OF_HPP
#define CYNODELIC_MULINUM_MEMBERS_OF_HPP


#include <cynodelic/mulinum/config.hpp>


namespace cynodelic { namespace mulinum {


/**
 * @ingroup containerops
 * @brief Gets the value type of a type `T`.
 */
template <typename T>
using value_type_of = typename T::value_type;


/**
 * @ingroup containerops
 * @brief Gets the type tag of a type `T`.
 */
template <typename T>
using type_tag_of = typename T::type_tag;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_MEMBERS_OF_HPP
