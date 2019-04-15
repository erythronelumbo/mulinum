// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file sqrt_c.hpp
 *
 * @brief Defines the `sqrt_c` metafunction.
 */


#ifndef CYNODELIC_MULINUM_EXPERIMENTAL_SQRT_C_HPP
#define CYNODELIC_MULINUM_EXPERIMENTAL_SQRT_C_HPP


#include <cstdlib>
#include <cstddef>
#include <cstdint>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/rational.hpp>
#include <cynodelic/mulinum/simplified_form.hpp>
#include <cynodelic/mulinum/add.hpp>
#include <cynodelic/mulinum/div.hpp>


namespace cynodelic { namespace mulinum {

namespace experimental
{
#ifndef DOXYGEN_SHOULD_SKIP_THIS
	
	/**
	 * @brief Helper for `sqrt_c`.
	 */
	template <std::intmax_t N,std::size_t Iterations>
	struct sqrt_c_impl :
		add<
			rational<1>,
			div<
				rational<N - 1>,
				add<
					rational<1>,
					typename sqrt_c_impl<N,Iterations - 1>::type
				>
			>
		>
	{};


	/**
	 * @brief Helper for `sqrt_c`.
	 */
	template <std::intmax_t N>
	struct sqrt_c_impl<N,1> :
		add<
			rational<1>,
			rational<N - 1,2>
		>
	{};

#endif // DOXYGEN_SHOULD_SKIP_THIS


	/**
	 * @ingroup experimental
	 * @brief Square root.
	 *
	 * Calculates the square root of a number using the continued fraction method,
	 * yielding a @ref rational type.
	 *
	 * @param N          The value.
	 * @param Iterations Number of iterations.
	 */
	template <std::intmax_t N,std::size_t Iterations>
	using sqrt_c = typename sqrt_c_impl<N,Iterations>::type;
} // end of "experimental" namespace


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_EXPERIMENTAL_SQRT_C_HPP
