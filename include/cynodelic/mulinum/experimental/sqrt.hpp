// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file sqrt.hpp
 *
 * @brief Defines the `sqrt` metafunction.
 */


#ifndef CYNODELIC_MULINUM_EXPERIMENTAL_SQRT_HPP
#define CYNODELIC_MULINUM_EXPERIMENTAL_SQRT_HPP


#include <cstdlib>
#include <cstddef>
#include <cstdint>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/rational.hpp>
#include <cynodelic/mulinum/simplified_form.hpp>
#include <cynodelic/mulinum/add.hpp>
#include <cynodelic/mulinum/div.hpp>
#include <cynodelic/mulinum/experimental/sqrt_c.hpp>


namespace cynodelic { namespace mulinum {

namespace experimental
{
#ifndef DOXYGEN_SHOULD_SKIP_THIS

	/**
	 * @brief Helper for `sqrt`.
	 */
	template <typename,typename>
	struct sqrt_impl {};


	/**
	 * @brief Helper for `sqrt`.
	 */
	template <typename IntType,IntType N,std::size_t Iterations>
	struct sqrt_impl<integer_c<IntType,N>,integer_c<std::size_t,Iterations>> :
		sqrt_c<static_cast<std::intmax_t>(N),Iterations>
	{};


	/**
	 * @brief Helper for `sqrt`.
	 */
	template <std::intmax_t Num,std::intmax_t Den,std::size_t Iterations>
	struct sqrt_impl<rational<Num,Den>,integer_c<std::size_t,Iterations>> :
		div<
			sqrt_c<rational<Num,Den>::num,Iterations>,
			sqrt_c<rational<Num,Den>::den,Iterations>
		>
	{};

#endif // DOXYGEN_SHOULD_SKIP_THIS

	/**
	 * @ingroup experimental
	 * @brief Square root.
	 *
	 * Calculates the square root of an arithmetic type using the continued fraction
	 * method, yielding a @ref rational.
	 *
	 * @param ArithmeticType An arithmetic type.
	 * @param Iterations     Number of iterations (a @ref size_c).
	 */
	template <typename ArithmeticType,typename Iterations>
	using sqrt = typename sqrt_impl<ArithmeticType,Iterations>::type;
} // end of "experimental" namespace

}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_EXPERIMENTAL_SQRT_HPP
