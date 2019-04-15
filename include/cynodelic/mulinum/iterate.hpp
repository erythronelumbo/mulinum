// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file iterate.hpp
 *
 * @brief Defines the `iterate` metafunction object.
 */


#ifndef CYNODELIC_MULINUM_ITERATE_HPP
#define CYNODELIC_MULINUM_ITERATE_HPP


#include <cstddef>

#include <cynodelic/mulinum/config.hpp>


namespace cynodelic { namespace mulinum {


/**
 * @ingroup mfuncobjs
 * @brief Iterates a metafunction object.
 *
 * Iterates `Num` times a given unary metafunction object.
 *
 * @param Functor The metafunction object.
 * @param Num     The number of iterations.
 */
template <typename Functor,std::size_t Num>
class iterate
{
	private:
		template <typename T,std::size_t Num_>
		struct apply_impl
		{
			using type = typename Functor::template apply<
				typename apply_impl<T,Num_ - 1>::type
			>::type;
		};

		template <typename T>
		struct apply_impl<T,1>
		{
			using type = typename Functor::template apply<T>::type;
		};
	public:
		template <typename T>
		struct apply
		{
			using type = typename apply_impl<T,Num>::type;
		};
};


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_ITERATE_HPP

