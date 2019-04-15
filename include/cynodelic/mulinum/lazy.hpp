// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file lazy.hpp
 *
 * @brief Defines the `lazy` metafunction object.
 */


#ifndef CYNODELIC_MULINUM_LAZY_HPP
#define CYNODELIC_MULINUM_LAZY_HPP


#include <cynodelic/mulinum/config.hpp>


namespace cynodelic { namespace mulinum {


/**
 * @ingroup mfuncobjs
 * @brief Metafunction wrapper.
 *
 * Wraps a metafunction as a metafunction object.
 *
 * @param MetaFn The metafunction.
 */
template <template <typename...> class MetaFn>
struct lazy
{
	template <typename... Args>
	struct apply
	{
		using type = MetaFn<Args...>;
	};
};


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_LAZY_HPP
