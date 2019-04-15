// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

#include <cstddef>
#include <cstdint>

#include <cynodelic/mulinum/tags.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/equals.hpp>
#include <cynodelic/mulinum/vector_c.hpp>
#include <cynodelic/mulinum/iota.hpp>
#include <cynodelic/mulinum/placeholders.hpp>
#include <cynodelic/mulinum/bind.hpp>


namespace mln = cynodelic::mulinum;

using namespace mln::placeholders;


using bound_fobj = mln::bind<mln::iota,mln::vector_c_tag<std::size_t>,_1,_1,_2>;


static_assert(
	mln::equals<
		typename bound_fobj::template apply<mln::size_c<4>,mln::size_c<1>>::type,
		mln::vector_c<std::size_t,4,5,6,7>
	>::value,
	"!"
);

static_assert(
	mln::equals<
		typename bound_fobj::template apply<mln::size_c<5>,mln::size_c<4>>::type,
		mln::vector_c<std::size_t,5,9,13,17,21>
	>::value,
	"!"
);

static_assert(
	mln::equals<
		typename bound_fobj::template apply<mln::size_c<10>,mln::size_c<2>>::type,
		mln::vector_c<std::size_t,10,12,14,16,18,20,22,24,26,28>
	>::value,
	"!"
);


int main() {}
