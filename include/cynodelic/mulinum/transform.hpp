// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file transform.hpp
 *
 * @brief Defines the `transform` metafunction.
 */


#ifndef CYNODELIC_MULINUM_TRANSFORM_HPP
#define CYNODELIC_MULINUM_TRANSFORM_HPP


#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/vector.hpp>
#include <cynodelic/mulinum/list.hpp>
#include <cynodelic/mulinum/concat.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `transform`.
 */
template <typename, typename>
struct transform_impl {};


/**
 * @brief Helper for `transform`.
 */
template <
	template <typename...> class TypeContainer,
	typename    First,
	typename... Others,
	typename    Functor
>
struct transform_impl<TypeContainer<First, Others...>, Functor>
{
	using type = concat<
		TypeContainer<typename Functor::template apply<First>::type>,
		typename transform_impl<TypeContainer<Others...>, Functor>::type
	>;
};


/**
 * @brief Helper for `transform`.
 */
template <
	template <typename...> class TypeContainer,
	typename Last,
	typename Functor
>
struct transform_impl<TypeContainer<Last>, Functor>
{
	using type = TypeContainer<typename Functor::template apply<Last>::type>;
};


/**
 * @brief Helper for `transform`.
 */
template <
	typename First,
	typename Tail,
	typename Functor
>
struct transform_impl<list_node<First, Tail>, Functor>
{
	using type = list_node<
		typename Functor::template apply<First>::type,
		typename transform_impl<Tail, Functor>::type
	>;
};


/**
 * @brief Helper for `transform`.
 */
template <
	typename Last,
	typename Functor
>
struct transform_impl<list_node<Last, null_type>, Functor>
{
	using type = list_node<
		typename Functor::template apply<Last>::type,
		null_type
	>;
};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup containerops
 * @brief Transforms the content of a container.
 *
 * Transforms each element of a container, using a metafunction object.
 *
 * @param TypeContainer The type container that will be transformed.
 * @param Functor       The metafunction object that will be used to transform
 *                      the elements.
 */
template <typename TypeContainer, typename Functor>
using transform = typename transform_impl<TypeContainer, Functor>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_TRANSFORM_HPP

