// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file to_string.hpp
 *
 * @brief Defines the `to_string` metafunction.
 */


#ifndef CYNODELIC_MULINUM_TO_STRING_HPP
#define CYNODELIC_MULINUM_TO_STRING_HPP


#include <cstddef>
#include <cstdint>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/if.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/equals.hpp>
#include <cynodelic/mulinum/detail/enable_if.hpp>
#include <cynodelic/mulinum/detail/integer_traits.hpp>
#include <cynodelic/mulinum/detail/special_functions.hpp>
#include <cynodelic/mulinum/rational.hpp>
#include <cynodelic/mulinum/string.hpp>
#include <cynodelic/mulinum/concat.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `to_string`.
 */
template <typename,typename = void>
class to_string_impl {};


/**
 * @brief Helper for `to_string`.
 */
template <typename IntType,IntType Value>
class to_string_impl<integer_c<IntType,Value>,detail::enable_if<detail::is_unsigned<IntType>::value>>
{
	private:
		template <std::uintmax_t Value_,bool = (Value_ == 0)>
		struct itos_helper
		{
			using type = concat<
				typename itos_helper<Value_/10>::type,
				string<static_cast<char>(Value_%10) + '0'>
			>;
		};

		template <std::uintmax_t Value_>
		struct itos_helper<Value_,true>
		{
			using type = string<>;
		};
	public:
		using type = if_<
			Value == 0,
			string<'0'>,
			typename itos_helper<static_cast<std::uintmax_t>(Value)>::type
		>;
};


/**
 * @brief Helper for `to_string`.
 */
template <typename IntType,IntType Value>
class to_string_impl<integer_c<IntType,Value>,detail::enable_if<detail::is_signed<IntType>::value>>
{
	private:
		template <std::intmax_t Value_,bool = (Value_ == 0)>
		struct itos_helper
		{
			using type = concat<
				typename itos_helper<Value_/10>::type,
				string<static_cast<char>(Value_%10) + '0'>
			>;
		};

		template <std::intmax_t Value_>
		struct itos_helper<Value_,true>
		{
			using type = string<>;
		};
	public:
		using type = if_<
			Value == 0,
			string<'0'>,
			concat<
				if_<(Value < 0),string<'-'>,string<>>,
				typename itos_helper<detail::iabs(static_cast<std::intmax_t>(Value))>::type
			>
		>;
};


/**
 * @brief Helper for `to_string`.
 */
template <std::intmax_t Num,std::intmax_t Den>
class to_string_impl<rational<Num,Den>,void>
{
	private:
		template <std::intmax_t Value_,bool = (Value_ == 0)>
		struct itos_helper
		{
			using type = concat<
				typename itos_helper<Value_/10>::type,
				string<static_cast<char>(Value_%10) + '0'>
			>;
		};

		template <std::intmax_t Value_>
		struct itos_helper<Value_,true>
		{
			using type = string<>;
		};

		using num_str = if_<
			rational<Num,Den>::num == 0,
			string<'0'>,
			concat<
				if_<(rational<Num,Den>::num < 0),string<'-'>,string<>>,
				typename itos_helper<detail::iabs(static_cast<std::intmax_t>(rational<Num,Den>::num))>::type
			>
		>;

		using den_str = if_<
			rational<Num,Den>::den == 0,
			string<'0'>,
			concat<
				if_<(rational<Num,Den>::den < 0),string<'-'>,string<>>,
				typename itos_helper<static_cast<std::intmax_t>(rational<Num,Den>::den)>::type
			>
		>;
	public:
		using type = concat<num_str,string<'/'>,den_str>;
};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup stringops
 * @brief Integer to string converter.
 *
 * Converts an arithmetic type (@ref integer_c or @ref rational) to
 * a @ref string.
 * Also, it is allowed to pass a @ref string.
 *
 * @param ArithmeticType The arithmetic type.
 */
template <typename ArithmeticType>
using to_string = typename to_string_impl<ArithmeticType>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_TO_STRING_HPP
