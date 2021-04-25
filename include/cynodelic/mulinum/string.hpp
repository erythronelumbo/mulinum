// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file string.hpp
 *
 * @brief Defines the `string` type.
 */


#ifndef CYNODELIC_MULINUM_STRING_HPP
#define CYNODELIC_MULINUM_STRING_HPP


#include <cstdlib>
#include <cstddef>
#include <cstring>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/tags.hpp>


namespace cynodelic { namespace mulinum {


/**
 * @ingroup intcontainers
 * @brief String type.
 *
 * A type that holds a string.
 */
template <char... Chars>
struct string
{
	/// @brief Reference to itself.
	using type = string;

	/// @brief Type of the contained items.
	using value_type = char;

	/// @brief Type tag for this container.
	using type_tag = string_tag;

	/// @brief Size (number of characters).
	static constexpr std::size_t size = sizeof...(Chars);

	/// @brief Array containing all the items (as a C-string).
	static constexpr char data[size + 1] = {Chars..., '\0'};

	/// @brief Acceses an element from the string, if it is initialized as a value.
	constexpr char operator[](const std::size_t& idx) const
	{
		return data[idx];
	}

	/// @brief Returns a C-string (same as `data`).
	static constexpr const char* c_str()
	{
		return data;
	}
};

template <char... Chars>
constexpr std::size_t string<Chars...>::size;

template <char... Chars>
constexpr char string<Chars...>::data[string<Chars...>::size + 1];


}} // end of "cynodelic::mulinum" namespace


// The header with the helper macros.
#include <cynodelic/mulinum/preprocessor/pp_string.hpp>


#endif // CYNODELIC_MULINUM_STRING_HPP
