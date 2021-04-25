// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file bind_impl.hpp
 *
 * @brief Defines the `bind_impl` helper functor.
 */


#ifndef CYNODELIC_MULINUM_DETAIL_BIND_IMPL_HPP
#define CYNODELIC_MULINUM_DETAIL_BIND_IMPL_HPP


#include <cstddef>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/vector.hpp>
#include <cynodelic/mulinum/push_back.hpp>
#include <cynodelic/mulinum/apply.hpp>
#include <cynodelic/mulinum/arg.hpp>
#include <cynodelic/mulinum/bind_fwd.hpp>


namespace cynodelic { namespace mulinum {

namespace detail
{
	/**
	 * @brief Helper for @ref bind.
	 */
	template <template <typename...> class, typename, typename>
	struct bind_impl;


	/**
	 * @brief Helper for @ref bind.
	 */
	template <
		template <typename...> class MetaFn,
		typename    FirstArg,
		typename... OtherArgs,
		typename    ArgsVec
	>
	struct bind_impl<MetaFn, vector<FirstArg, OtherArgs...>, ArgsVec>
	{
		template <typename... Args>
		struct apply_impl
		{
			using type = typename bind_impl<
				MetaFn,
				vector<OtherArgs...>,
				push_back<ArgsVec, FirstArg> /* inserts the argument */
			>::template apply<Args...>::type;
		};

		template <typename... Args>
		using apply = apply_impl<Args...>;
	};


	/**
	 * @brief Helper for @ref bind.
	 */
	template <
		template <typename...> class MetaFn,
		std::size_t ArgNum,
		typename... OtherArgs,
		typename    ArgsVec
	>
	struct bind_impl<MetaFn, vector<arg<ArgNum>, OtherArgs...>, ArgsVec>
	{
		template <typename... Args>
		struct apply_impl
		{
			using type = typename bind_impl<
				MetaFn,
				vector<OtherArgs...>,
				push_back<
					ArgsVec,
					typename arg<ArgNum>::template apply<Args...>::type  /* inserts the (ArgNum+1)-th argument from `Args...` */
				>
			>::template apply<Args...>::type;
		};

		template <typename... Args>
		using apply = apply_impl<Args...>;
	};


	/**
	 * @brief Helper for @ref bind.
	 */
	template <
		template <typename...> class MetaFn,
		template <typename...> class BindMetaFn,
		typename... BindArgs,
		typename... OtherArgs,
		typename    ArgsVec
	>
	struct bind_impl<MetaFn, vector<bind<BindMetaFn, BindArgs...>, OtherArgs...>, ArgsVec>
	{
		template <typename... Args>
		struct apply_impl
		{
			using type = typename bind_impl<
				MetaFn,
				vector<OtherArgs...>,
				push_back<
					ArgsVec,
					typename bind<BindMetaFn, BindArgs...>::template apply<Args...>::type  /* applies a nesting `bind` to `Args...` */
				>
			>::template apply<Args...>::type;
		};

		template <typename... Args>
		using apply = apply_impl<Args...>;
	};
	

	/**
	 * @brief Helper for @ref bind.
	 */
	template <
		template <typename...> class MetaFn,
		typename ArgsVec
	>
	struct bind_impl<MetaFn,vector<>,ArgsVec>
	{
		template <typename... Args>
		struct apply_impl
		{
			using type = apply<MetaFn, ArgsVec>; /* no arguments, ready for applying */
		};

		template <typename... Args>
		using apply = apply_impl<Args...>;
	};
} // end of "detail" namespace

}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_DETAIL_BIND_IMPL_HPP
