// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file is_n_ary_metafunction_object.hpp
 *
 * @brief Provides the `is_n_ary_metafunction_object` trait type.
 */


#ifndef CYNODELIC_MULINUM_IS_N_ARY_METAFUNCTION_OBJECT_HPP
#define CYNODELIC_MULINUM_IS_N_ARY_METAFUNCTION_OBJECT_HPP


#include <cstddef>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/tags.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/apply.hpp>
#include <cynodelic/mulinum/fill.hpp>
#include <cynodelic/mulinum/detail/dummy.hpp>
#include <cynodelic/mulinum/detail/void_t.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `is_n_ary_metafunction_object`.
 */
template <typename,typename,typename = void>
struct is_n_ary_metafunction_object_impl : false_ {};


/**
 * @brief Helper for `is_n_ary_metafunction_object`.
 */
template <typename T,std::size_t Arity>
struct is_n_ary_metafunction_object_impl<
	T,
	size_c<Arity>,
	detail::void_t<
		apply<
			T::template apply,
			fill<vector_tag,detail::dummy<0>,size_c<Arity>>
		>
	>
> : true_ {};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup typetraits
 * @brief Checks if a type is an N-ary metafunction object
 *
 * Determiness if a type `T` is an N-ary metafunction object, i.e., its `apply`
 * member, if any, has N arguments.
 *
 * @param T     The type to check.
 * @param Arity The arity (number of arguments, must be a @ref size_c).
 */
template <typename T,typename Arity>
using is_n_ary_metafunction_object = typename is_n_ary_metafunction_object_impl<T,Arity>::type;


/**
 * @ingroup typetraits
 * @brief Checks if a type is an N-ary metafunction object
 *
 * Determiness if a type `T` is an N-ary metafunction object, i.e., its `apply`
 * member, if any, has N arguments.
 *
 * @param T     The type to check.
 * @param Arity The arity (number of arguments).
 */
template <typename T,std::size_t Arity>
using is_n_ary_metafunction_object_c = typename is_n_ary_metafunction_object_impl<T,size_c<Arity>>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_IS_N_ARY_METAFUNCTION_OBJECT_HPP
