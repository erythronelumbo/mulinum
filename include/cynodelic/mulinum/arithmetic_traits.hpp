// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file arithmetic_traits.hpp
 *
 * @brief Defines type traits for arithmetic types.
 */


#ifndef CYNODELIC_MULINUM_ARITHMETIC_TRAITS_HPP
#define CYNODELIC_MULINUM_ARITHMETIC_TRAITS_HPP


#include <cstddef>
#include <cstdint>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/rational.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `is_arithmetic_type`.
 */
template <typename>
struct is_arithmetic_type_impl : false_ {};


/**
 * @brief Helper for `is_arithmetic_type`.
 */
template <typename IntType,IntType Value>
struct is_arithmetic_type_impl<integer_c<IntType,Value>> : true_ {};


/**
 * @brief Helper for `is_arithmetic_type`.
 */
template <std::intmax_t Num,std::intmax_t Den>
struct is_arithmetic_type_impl<rational<Num,Den>> : true_ {};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup typetraits
 * @brief Arithhmetic type checker.
 *
 * Checks if a type `T` is arithmetic (@ref integer_c or @ref rational).
 */
template <typename T>
using is_arithmetic_type = typename is_arithmetic_type_impl<T>::type;


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `is_integer_c`.
 */
template <typename>
struct is_integer_c_impl : false_ {};


/**
 * @brief Helper for `is_integer_c`.
 */
template <typename IntType,IntType Value>
struct is_integer_c_impl<integer_c<IntType,Value>> : true_ {};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup typetraits
 * @brief Integral type checker.
 *
 * Determines if a type `T` is an @ref integer_c.
 */
template <typename T>
using is_integer_c = typename is_integer_c_impl<T>::type;


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for @ref is_rational.
 */
template <typename>
struct is_rational_impl : false_ {};


/**
 * @brief Helper for @ref is_rational.
 */
template <std::intmax_t Num,std::intmax_t Den>
struct is_rational_impl<rational<Num,Den>> : true_ {};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup typetraits
 * @brief Rational type checker.
 *
 * Determines if a type `T` is a @ref rational.
 */
template <typename T>
using is_rational = typename is_rational_impl<T>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_ARITHMETIC_TRAITS_HPP
