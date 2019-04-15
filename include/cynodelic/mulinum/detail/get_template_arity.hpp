// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file get_template_arity.hpp
 *
 * @brief Defines a helper function for the `arity_of` metafunction.
 */


#ifndef CYNODELIC_MULINUM_DETAIL_GET_TEMPLATE_ARITY_HPP
#define CYNODELIC_MULINUM_DETAIL_GET_TEMPLATE_ARITY_HPP


#include <cstddef>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/integer_c.hpp>


namespace cynodelic { namespace mulinum {

namespace detail
{
	// NOTE: All the 200 specializations for @ref get_template_arity were
	// hardcoded.


	// ********** 1-100 template parameters ********** //

	template <
		template <
			typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 1; }

#ifndef DOXYGEN_SHOULD_SKIP_THIS

	template <
		template <
			typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 2; }

	template <
		template <
			typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 3; }

	template <
		template <
			typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 4; }

	template <
		template <
			typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 5; }

	template <
		template <
			typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 6; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 7; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 8; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 9; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 10; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 11; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 12; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 13; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 14; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 15; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 16; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 17; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 18; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 19; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 20; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 21; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 22; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 23; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 24; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 25; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 26; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 27; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 28; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 29; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 30; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 31; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 32; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 33; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 34; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 35; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 36; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 37; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 38; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 39; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 40; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 41; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 42; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 43; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 44; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 45; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 46; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 47; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 48; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 49; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 50; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 51; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 52; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 53; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 54; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 55; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 56; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 57; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 58; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 59; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 60; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 61; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 62; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 63; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 64; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 65; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 66; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 67; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 68; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 69; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 70; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 71; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 72; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 73; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 74; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 75; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 76; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 77; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 78; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 79; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 80; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 81; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 82; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 83; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 84; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 85; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 86; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 87; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 88; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 89; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 90; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 91; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 92; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 93; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 94; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 95; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 96; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 97; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 98; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 99; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 100; }

	// ********** 101-200 template parameters ********** //

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 101; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 102; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 103; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 104; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 105; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 106; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 107; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 108; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 109; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 110; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 111; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 112; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 113; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 114; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 115; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 116; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 117; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 118; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 119; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 120; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 121; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 122; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 123; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 124; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 125; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 126; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 127; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 128; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 129; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 130; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 131; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 132; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 133; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 134; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 135; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 136; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 137; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 138; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 139; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 140; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 141; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 142; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 143; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 144; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 145; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 146; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 147; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 148; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 149; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 150; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 151; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 152; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 153; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 154; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 155; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 156; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 157; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 158; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 159; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 160; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 161; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 162; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 163; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 164; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 165; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 166; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 167; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 168; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 169; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 170; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 171; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 172; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 173; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 174; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 175; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 176; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 177; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 178; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 179; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 180; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 181; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 182; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 183; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 184; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 185; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 186; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 187; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 188; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 189; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 190; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 191; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 192; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 193; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 194; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 195; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 196; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 197; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 198; }

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 199; }

#endif // DOXYGEN_SHOULD_SKIP_THIS

	template <
		template <
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename,
			typename,typename,typename,typename,typename,typename,typename,typename,typename,typename
		> class MetaFn
	>
	inline constexpr std::size_t get_template_arity() { return 200; }
} // end of "detail" namespace

}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_DETAIL_GET_TEMPLATE_ARITY_HPP
