// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file dummy.hpp
 *
 * @brief Defines the `dummy` type.
 */


#ifndef CYNODELIC_MULINUM_DETAIL_DUMMY_HPP
#define CYNODELIC_MULINUM_DETAIL_DUMMY_HPP


#include <cynodelic/mulinum/config.hpp>


namespace cynodelic { namespace mulinum {

namespace detail
{
	/**
	 * @brief Dummy type.
	 *
	 * A dummy type.
	 */
	template <int...>
	struct dummy {};
} // end of "detail" namespace

}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_DETAIL_DUMMY_HPP
