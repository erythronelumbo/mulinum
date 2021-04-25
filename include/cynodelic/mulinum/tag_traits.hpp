// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file tag_traits.hpp
 *
 * @brief Defines traits for tag types.
 */


#ifndef CYNODELIC_MULINUM_TAG_TRAITS_HPP
#define CYNODELIC_MULINUM_TAG_TRAITS_HPP


#include <cstddef>
#include <cstdint>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/tags.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/equals.hpp>


namespace cynodelic { namespace mulinum {


/**
 * @brief Type container tag checker.
 *
 * Checks if a type `T` is a @ref type_container_tag.
 */
template <typename T>
using is_type_container_tag = equals<typename T::parent_tag, type_container_tag>;


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `is_integer_container_tag`.
 */
template <typename T>
class is_integer_container_tag_impl
{
	private:
		template <typename>
		struct is_ict : false_ {};

		template <typename IntType>
		struct is_ict<integer_container_tag<IntType>> : true_ {};
	public:
		using type = typename is_ict<typename T::parent_tag>::type;
};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @brief Integer container tag checker.
 *
 * Checks if a type `T` is an @ref integer_container_tag, resulting in
 * @ref true_ or @ref false_ .
 */
template <typename T>
using is_integer_container_tag = typename is_integer_container_tag_impl<T>::type;



}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_TAG_TRAITS_HPP
