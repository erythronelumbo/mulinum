// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file bind.hpp
 *
 * @brief Provides the `bind` metafunction object.
 */


#ifndef CYNODELIC_MULINUM_BIND_HPP
#define CYNODELIC_MULINUM_BIND_HPP


#include <cstddef>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/vector.hpp>
#include <cynodelic/mulinum/apply.hpp>
#include <cynodelic/mulinum/arg.hpp>
#include <cynodelic/mulinum/placeholders.hpp>
#include <cynodelic/mulinum/detail/bind_impl.hpp>


namespace cynodelic { namespace mulinum {


/**
 * @ingroup mfuncutils
 * @brief Metafunction object for partial application.
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
struct bind :
	detail::bind_impl<
		MetaFn,
		vector<Args...>,
		vector<>
	>
{};


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_BIND_HPP
