// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file bind_fwd.hpp
 *
 * @brief Forward declaration for the `bind` metafunction object.
 */


#ifndef CYNODELIC_MULINUM_BIND_FWD_HPP
#define CYNODELIC_MULINUM_BIND_FWD_HPP


#include <cynodelic/mulinum/config.hpp>


namespace cynodelic { namespace mulinum {


/**
 * @ingroup mfuncutils
 * @brief Metafunction object for partial application (forward declaration).
 *
 * Makes a metafunction object by binding some arguments to `MetaFn`, while the
 * rest, passed as placeholders, are the arguments passed in the `apply`
 * member.
 *
 * @param MetaFn  The metafunction.
 * @param Args... The arguments and placeholders (see @ref placeholders).
 */
template <
	template <typename...> class MetaFn,
	typename... Args
>
struct bind;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_BIND_FWD_HPP
