// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file mul.hpp
 *
 * @brief Defines the `mul` metafunction.
 */


#ifndef CYNODELIC_MULINUM_MUL_HPP
#define CYNODELIC_MULINUM_MUL_HPP


#include <cstdint>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/rational.hpp>
#include <cynodelic/mulinum/simplified_form.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `mul`.
 */
template <typename...>
struct mul_impl {};


/**
 * @brief Helper for `mul`.
 */
template <
	typename IntType,
	IntType ValueL,IntType ValueR
>
struct mul_impl<
	integer_c<IntType,ValueL>,
	integer_c<IntType,ValueR>
> :
	integer_c<IntType,ValueL * ValueR>
{};


/**
 * @brief Helper for `mul`.
 */
template <
	typename IntType,
	IntType ValueL,IntType ValueR,
	typename... Others
	>
struct mul_impl<
	integer_c<IntType,ValueL>,
	integer_c<IntType,ValueR>,
	Others...
> :
	mul_impl<integer_c<IntType,ValueL * ValueR>,Others...>
{};


/**
 * @brief Helper for `mul`.
 */
template <
	std::intmax_t LhsNum,std::intmax_t LhsDen,
	std::intmax_t RhsNum,std::intmax_t RhsDen
>
struct mul_impl<rational<LhsNum,LhsDen>,rational<RhsNum,RhsDen>> :
	simplified_form<
		rational<
			rational<LhsNum,LhsDen>::num * rational<RhsNum,RhsDen>::num,
			rational<LhsNum,LhsDen>::den * rational<RhsNum,RhsDen>::den
		>
	>
{};


/**
 * @brief Helper for `mul`.
 */
template <
	std::intmax_t LhsNum,std::intmax_t LhsDen,
	std::intmax_t RhsNum,std::intmax_t RhsDen,
	typename... Others
>
struct mul_impl<rational<LhsNum,LhsDen>,rational<RhsNum,RhsDen>,Others...> :
	mul_impl<
		simplified_form<
			rational<
				rational<LhsNum,LhsDen>::num * rational<RhsNum,RhsDen>::num,
				rational<LhsNum,LhsDen>::den * rational<RhsNum,RhsDen>::den
			>
		>,
		Others...
	>
{};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup arithmeticops
 * @brief Multiplication.
 *
 * Performs multiplication of arithmetic types of the same type.
 *
 * @param ArithmeticTypes... All the types.
 */
template <typename... ArithmeticTypes>
using mul = typename mul_impl<ArithmeticTypes...>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_MUL_HPP
