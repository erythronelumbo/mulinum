// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file is_metafunction_object.hpp
 *
 * @brief Provides the `is_metafunction_object` trait type.
 */


#ifndef CYNODELIC_MULINUM_IS_METAFUNCTION_OBJECT_HPP
#define CYNODELIC_MULINUM_IS_METAFUNCTION_OBJECT_HPP


#include <cstddef>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/tags.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/vector_c.hpp>
#include <cynodelic/mulinum/logical_or.hpp>
#include <cynodelic/mulinum/iota.hpp>
#include <cynodelic/mulinum/is_n_ary_metafunction_object.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `is_metafunction_object`.
 */
template <typename,typename>
struct is_metafunction_object_impl : false_ {};


/**
 * @brief Helper for `is_metafunction_object`.
 */
template <typename T,std::size_t... Nums>
struct is_metafunction_object_impl<T,vector_c<std::size_t,Nums...>> :
	logical_or<is_n_ary_metafunction_object_c<T,Nums>...>
{};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup typetraits
 * @brief Checks if a type is a metafunction object
 *
 * Determines if a type `T` is a metafunction object.
 *
 * NOTE: It supports metafunction objects with their `apply` member, if any,
 * having up to a maximum of arguments (see
 * @ref CYNODELIC_MULINUM_MAX_METAFUNCTION_OBJ_ARITY) or having variadic
 * arguments.
 */
template <typename T>
using is_metafunction_object = typename is_metafunction_object_impl<
	T,
	iota_c<
		vector_c_tag<std::size_t>,
		1,CYNODELIC_MULINUM_MAX_METAFUNCTION_OBJ_ARITY
	>
>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_IS_METAFUNCTION_OBJECT_HPP
