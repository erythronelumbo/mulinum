// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file vector.hpp
 *
 * @brief Defines the `vector` type container.
 */


#ifndef CYNODELIC_MULINUM_VECTOR_HPP
#define CYNODELIC_MULINUM_VECTOR_HPP


#include <cstdlib>
#include <cstddef>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/detail/vector_helpers.hpp>
#include <cynodelic/mulinum/tags.hpp>


namespace cynodelic { namespace mulinum {


/**
 * @ingroup typecontainers
 * @brief Type container.
 *
 * A variadic type container.
 *
 * @param Items... The container elements.
 */
template <typename... Items>
struct vector : 
	detail::vector_impl<
		typename detail::make_isq<0,sizeof...(Items),(sizeof...(Items) == 0)>::type,
		Items...
	>
{
	/// @brief Reference to itself.
	using type = vector;

	/// @brief Type tag for this container.
	using type_tag = vector_tag;

	/// @brief Size (number of items).
	static constexpr std::size_t size = sizeof...(Items);
};

template <typename... Items>
constexpr std::size_t vector<Items...>::size;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_VECTOR_HPP
