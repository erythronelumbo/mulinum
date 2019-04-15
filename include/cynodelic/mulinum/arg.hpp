// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file arg.hpp
 *
 * @brief Provides the `arg` metafunction object.
 */


#ifndef CYNODELIC_MULINUM_ARG_HPP
#define CYNODELIC_MULINUM_ARG_HPP


#include <cstdlib>
#include <cstddef>

#include <cynodelic/mulinum/config.hpp>


namespace cynodelic { namespace mulinum {


/**
 * @ingroup mfuncobjs
 * @brief N-th argument getter
 *
 * A metafunction object that takes the (`ArgNum` + 1)-th argument from some
 * given input arguments in the `apply` member. Also used as a placeholder
 * for @ref bind.
 *
 * @param ArgNum Argument number.
 */
template <std::size_t ArgNum>
struct arg
{
	template <typename FirstArg,typename... Others>
	struct apply
	{
		using type = typename arg<(ArgNum - 1)>::template apply<Others...>::type;
	};
};


/**
 * @ingroup mfuncobjs
 * @brief N-th argument getter
 *
 * A metafunction object that takes the first argument from some given input
 * arguments in the `apply` member. Also used as a placeholder for @ref bind.
 */
template <>
struct arg<0>
{
	template <typename FirstArg,typename... Others>
	struct apply
	{
		using type = FirstArg;
	};
};


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_ARG_HPP
