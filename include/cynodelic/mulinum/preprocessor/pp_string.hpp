// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file pp_string.hpp
 *
 * @brief Defines helper preprocessor macros for `string`s.
 */


#ifndef CYNODELIC_MULINUM_PREPROCESSOR_PP_STRING_HPP
#define CYNODELIC_MULINUM_PREPROCESSOR_PP_STRING_HPP


#include <cstdlib>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/string.hpp>
#include <cynodelic/mulinum/detail/remove_zeroes.hpp>
#include <cynodelic/mulinum/preprocessor/detail/pp_string_helper.hpp>


/**
 * @ingroup intcontainers
 * @brief Helper macro for making a `string`.
 *
 * Defines a @ref string with a string literal.
 *
 * @param str The string literal.
 */
#define CYNODELIC_MULINUM_STRING(str) ::cynodelic::mulinum::detail::remove_zeroes<::cynodelic::mulinum::string<CYNODELIC_MULINUM_DETAIL_STRING_GET_CHARS(str, CYNODELIC_MULINUM_MAX_STRING_LENGTH)>>


/**
 * @ingroup intcontainers
 * @brief Helper macro for making a `string`.
 *
 * Defines a @ref string with a string literal, given the known length of the
 * string.
 *
 * @param str          The string literal.
 * @param known_length The string's known length.
 */
#define CYNODELIC_MULINUM_STRING_KL(str, known_length) ::cynodelic::mulinum::detail::remove_zeroes<::cynodelic::mulinum::string<CYNODELIC_MULINUM_DETAIL_STRING_GET_CHARS(str, known_length)>>


/**
 * @ingroup intcontainers
 * @brief Helper macro for making a `string`.
 *
 * Defines a @ref string from a string literal, with no removal of zeroes.
 *
 * @param str          The string literal.
 * @param known_length The string's known length.
 */
#define CYNODELIC_MULINUM_STRING_NO_ZERO_REMOVAL(str, known_length) ::cynodelic::mulinum::string<CYNODELIC_MULINUM_DETAIL_STRING_GET_CHARS(str, known_length)>


#endif // CYNODELIC_MULINUM_PREPROCESSOR_PP_STRING_HPP
