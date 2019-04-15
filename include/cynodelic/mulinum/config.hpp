// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file config.hpp
 *
 * @brief Header for configurations.
 */


#ifndef CYNODELIC_MULINUM_CONFIG_HPP
#define CYNODELIC_MULINUM_CONFIG_HPP


#ifndef DOXYGEN_SHOULD_SKIP_THIS

#define CYNODELIC_MULINUM_STRINGIZE_IMPL(x) #x
#define CYNODELIC_MULINUM_STRINGIZE(x) CYNODELIC_MULINUM_STRINGIZE_IMPL(x)

#endif // DOXYGEN_SHOULD_SKIP_THIS


#define CYNODELIC_MULINUM_VERSION_MAJOR 1 /**< @brief Major version of this library. */
#define CYNODELIC_MULINUM_VERSION_MINOR 0 /**< @brief Minor version of this library. */
#define CYNODELIC_MULINUM_VERSION_PATCH 0 /**< @brief Patch version of this library. */


/// @brief The version of this library.
#define CYNODELIC_MULINUM_VERSION CYNODELIC_MULINUM_STRINGIZE(CYNODELIC_MULINUM_VERSION_MAJOR) "." CYNODELIC_MULINUM_STRINGIZE(CYNODELIC_MULINUM_VERSION_MINOR) "." CYNODELIC_MULINUM_STRINGIZE(CYNODELIC_MULINUM_VERSION_PATCH


#ifndef CYNODELIC_MULINUM_MAX_STRING_LENGTH

/**
 * @brief Maximum string length.
 *
 * The maximum length of a string literal that can be used as an argument for the
 * @ref CYNODELIC_MULINUM_STRING macro helper.
 *
 * It can be set defining its value, before including the necessary headers.
 */
#define CYNODELIC_MULINUM_MAX_STRING_LENGTH 200
#endif // CYNODELIC_MULINUM_MAX_STRING_LENGTH


#ifndef CYNODELIC_MULINUM_MAX_METAFUNCTION_OBJ_ARITY

/**
 * @brief Maximum metafunction object arity.
 *
 * The maximum arity supported for the @ref is_metafunction_object trait.
 *
 * It can be set defining its value, before including the
 * necessary headers.
 */
#define CYNODELIC_MULINUM_MAX_METAFUNCTION_OBJ_ARITY 10
#endif // CYNODELIC_MULINUM_MAX_METAFUNCTION_OBJ_ARITY)


#endif // CYNODELIC_MULINUM_CONFIG_HPP
