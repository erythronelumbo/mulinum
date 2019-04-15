// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file apply.hpp
 *
 * @brief Provides the `apply` metafunction.
 */


#ifndef CYNODELIC_MULINUM_APPLY_HPP
#define CYNODELIC_MULINUM_APPLY_HPP


#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/vector.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `apply`.
 */
template <template <typename...> class,typename>
struct apply_impl {};


/**
 * @brief Helper for `apply`.
 */
template <template <typename...> class MetaFn,typename FirstArg,typename... Others>
struct apply_impl<MetaFn,vector<FirstArg,Others...>>
{
	using type = MetaFn<FirstArg,Others...>;
};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup mfuncutils
 * @brief Pass @ref vector as metafunction arguments.
 *
 * Passes the content of a @ref vector as the arguments of `MetaFn`.
 *
 * @param MetaFn     The metafunction.
 * @param ArgsVector A @ref vector containing the arguments for `MetaFn`.
 */
template <template <typename...> class MetaFn,typename ArgsVector>
using apply = typename apply_impl<MetaFn,ArgsVector>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_APPLY_HPP
