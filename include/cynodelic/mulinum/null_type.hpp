// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file null_type.hpp
 *
 * @brief Defines the `null_type` type.
 */


#ifndef CYNODELIC_MULINUM_NULL_TYPE_HPP
#define CYNODELIC_MULINUM_NULL_TYPE_HPP


#include <cstddef>

#include <cynodelic/mulinum/config.hpp>


namespace cynodelic { namespace mulinum {


/**
 * @ingroup containers
 * @brief Null type
 *
 * A null type, used as the end of linked lists (@ref list and @ref list_c).
 */
struct null_type
{
	/// @brief Reference to itself.
	using type = null_type;

	/// @brief Size, used if treated as a @ref list or @ref list_c.
	static constexpr std::size_t size = 0;
};

constexpr std::size_t null_type::size;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_NULL_TYPE_HPP
