// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file identity.hpp
 *
 * @brief Defines the `identity` metafunction object.
 */


#ifndef CYNODELIC_MULINUM_IDENTITY_HPP
#define CYNODELIC_MULINUM_IDENTITY_HPP


#include <cynodelic/mulinum/config.hpp>


namespace cynodelic { namespace mulinum {


/**
 * @ingroup mfuncobjs
 * @brief Identity metafunction object.
 *
 * Metafunction object that returns its input.
 */
struct identity
{
	template <typename T>
	struct apply
	{
		using type = T;
	};
};


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_IDENTITY_HPP
