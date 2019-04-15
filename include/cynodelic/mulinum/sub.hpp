// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file sub.hpp
 *
 * @brief Defines the `sub` metafunction.
 */


#ifndef CYNODELIC_MULINUM_SUB_HPP
#define CYNODELIC_MULINUM_SUB_HPP


#include <cstdint>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/rational.hpp>
#include <cynodelic/mulinum/simplified_form.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `sub`.
 */
template <typename...>
struct sub_impl {};


/**
 * @brief Helper for `sub`.
 */
template <
	typename IntType,
	IntType ValueL,IntType ValueR
>
struct sub_impl<
	integer_c<IntType,ValueL>,
	integer_c<IntType,ValueR>
> :
	integer_c<IntType,ValueL - ValueR>
{};


/**
 * @brief Helper for `sub`.
 */
template <
	typename IntType,
	IntType ValueL,IntType ValueR,
	typename... Others
	>
struct sub_impl<
	integer_c<IntType,ValueL>,
	integer_c<IntType,ValueR>,
	Others...
> :
	sub_impl<integer_c<IntType,ValueL - ValueR>,Others...>
{};


/**
 * @brief Helper for `sub`.
 */
template <
	std::intmax_t LhsNum,std::intmax_t LhsDen,
	std::intmax_t RhsNum,std::intmax_t RhsDen
>
struct sub_impl<rational<LhsNum,LhsDen>,rational<RhsNum,RhsDen>> :
	simplified_form<
		rational<
			rational<LhsNum,LhsDen>::num*rational<RhsNum,RhsDen>::den - rational<RhsNum,RhsDen>::num*rational<LhsNum,LhsDen>::den,
			rational<LhsNum,LhsDen>::den*rational<RhsNum,RhsDen>::den
		>
	>
{};


/**
 * @brief Helper for `sub`.
 */
template <
	std::intmax_t LhsNum,std::intmax_t LhsDen,
	std::intmax_t RhsNum,std::intmax_t RhsDen,
	typename... Others
>
struct sub_impl<rational<LhsNum,LhsDen>,rational<RhsNum,RhsDen>,Others...> :
	sub_impl<
		simplified_form<
			rational<
				rational<LhsNum,LhsDen>::num*rational<RhsNum,RhsDen>::den - rational<RhsNum,RhsDen>::num*rational<LhsNum,LhsDen>::den,
				rational<LhsNum,LhsDen>::den*rational<RhsNum,RhsDen>::den
			>
		>,
		Others...
	>
{};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup arithmeticops
 * @brief Substraction.
 *
 * Performs substraction of arithmetic types of the same type.
 *
 * @param ArithmeticTypes... All the types.
 */
template <typename... ArithmeticTypes>
using sub = typename sub_impl<ArithmeticTypes...>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_SUB_HPP
