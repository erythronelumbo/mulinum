// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file curry.hpp
 *
 * @brief Provides the `curry` metafunction object.
 */


#ifndef CYNODELIC_MULINUM_CURRY_HPP
#define CYNODELIC_MULINUM_CURRY_HPP


#include <cstddef>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/vector.hpp>
#include <cynodelic/mulinum/push_back.hpp>
#include <cynodelic/mulinum/apply.hpp>
#include <cynodelic/mulinum/arity_of.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `curry`.
 */
template <template <typename...> class MetaFn, std::size_t Arity, typename ArgsVec>
struct curry_impl
{
	template <typename Arg>
	struct apply_impl
	{
		template <typename NextArg>
		using apply = typename curry_impl<
			MetaFn,
			(Arity - 1),
			push_back<ArgsVec, Arg>
		>::template apply<NextArg>;
	};

	template <typename Arg>
	using apply = apply_impl<Arg>;
};


/**
 * @brief Helper for `curry`.
 */
template <template <typename...> class MetaFn, typename ArgsVec>
struct curry_impl<MetaFn, 1, ArgsVec>
{
	template <typename Arg>
	struct apply_impl
	{
		using type = apply<
			MetaFn,
			push_back<ArgsVec, Arg>
		>;
	};

	template <typename Arg>
	using apply = apply_impl<Arg>;
};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup mfuncutils
 * @brief Curried form of a metafunction.
 *
 * Decomposes `MetaFn` into several nested "functions", each one taking a
 * single argument.
 * Such "functions" are called in a chained way:
 * `curry<...>::template apply<...>:: ... ::template apply<...>::type`
 *
 * @param MetaFn The metafunction.
 * @param Arity  The ammount of arguments of`MetaFn` (default:
 *               `arity_of<MetaFn>::value`).
 */
template <
	template <typename...> class MetaFn,
	std::size_t Arity = arity_of<MetaFn>::value
>
struct curry : curry_impl<MetaFn, Arity, vector<>> {};


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_CURRY_HPP
