// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

#include <cstddef>
#include <cstdint>

#include <cynodelic/mulinum/tags.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/rational.hpp>
#include <cynodelic/mulinum/equals.hpp>
#include <cynodelic/mulinum/vector.hpp>
#include <cynodelic/mulinum/cartesian_product.hpp>


namespace mln = cynodelic::mulinum;


using cart_prod = mln::cartesian_product<
	mln::vector<mln::rational<5,4>,mln::rational<2,3>>,
	mln::vector<mln::char_c<'A'>,mln::char_c<'B'>,mln::char_c<'C'>,mln::char_c<'D'>>,
	mln::vector<mln::char_c<'W'>,mln::char_c<'X'>,mln::char_c<'Y'>,mln::char_c<'Z'>>
>;


static_assert(
	mln::equals<
		cart_prod,
		mln::vector<
			mln::vector<mln::rational<5,4>,mln::char_c<'A'>,mln::char_c<'W'>>,
			mln::vector<mln::rational<5,4>,mln::char_c<'A'>,mln::char_c<'X'>>,
			mln::vector<mln::rational<5,4>,mln::char_c<'A'>,mln::char_c<'Y'>>,
			mln::vector<mln::rational<5,4>,mln::char_c<'A'>,mln::char_c<'Z'>>,
			mln::vector<mln::rational<5,4>,mln::char_c<'B'>,mln::char_c<'W'>>,
			mln::vector<mln::rational<5,4>,mln::char_c<'B'>,mln::char_c<'X'>>,
			mln::vector<mln::rational<5,4>,mln::char_c<'B'>,mln::char_c<'Y'>>,
			mln::vector<mln::rational<5,4>,mln::char_c<'B'>,mln::char_c<'Z'>>,
			mln::vector<mln::rational<5,4>,mln::char_c<'C'>,mln::char_c<'W'>>,
			mln::vector<mln::rational<5,4>,mln::char_c<'C'>,mln::char_c<'X'>>,
			mln::vector<mln::rational<5,4>,mln::char_c<'C'>,mln::char_c<'Y'>>,
			mln::vector<mln::rational<5,4>,mln::char_c<'C'>,mln::char_c<'Z'>>,
			mln::vector<mln::rational<5,4>,mln::char_c<'D'>,mln::char_c<'W'>>,
			mln::vector<mln::rational<5,4>,mln::char_c<'D'>,mln::char_c<'X'>>,
			mln::vector<mln::rational<5,4>,mln::char_c<'D'>,mln::char_c<'Y'>>,
			mln::vector<mln::rational<5,4>,mln::char_c<'D'>,mln::char_c<'Z'>>,
			mln::vector<mln::rational<2,3>,mln::char_c<'A'>,mln::char_c<'W'>>,
			mln::vector<mln::rational<2,3>,mln::char_c<'A'>,mln::char_c<'X'>>,
			mln::vector<mln::rational<2,3>,mln::char_c<'A'>,mln::char_c<'Y'>>,
			mln::vector<mln::rational<2,3>,mln::char_c<'A'>,mln::char_c<'Z'>>,
			mln::vector<mln::rational<2,3>,mln::char_c<'B'>,mln::char_c<'W'>>,
			mln::vector<mln::rational<2,3>,mln::char_c<'B'>,mln::char_c<'X'>>,
			mln::vector<mln::rational<2,3>,mln::char_c<'B'>,mln::char_c<'Y'>>,
			mln::vector<mln::rational<2,3>,mln::char_c<'B'>,mln::char_c<'Z'>>,
			mln::vector<mln::rational<2,3>,mln::char_c<'C'>,mln::char_c<'W'>>,
			mln::vector<mln::rational<2,3>,mln::char_c<'C'>,mln::char_c<'X'>>,
			mln::vector<mln::rational<2,3>,mln::char_c<'C'>,mln::char_c<'Y'>>,
			mln::vector<mln::rational<2,3>,mln::char_c<'C'>,mln::char_c<'Z'>>,
			mln::vector<mln::rational<2,3>,mln::char_c<'D'>,mln::char_c<'W'>>,
			mln::vector<mln::rational<2,3>,mln::char_c<'D'>,mln::char_c<'X'>>,
			mln::vector<mln::rational<2,3>,mln::char_c<'D'>,mln::char_c<'Y'>>,
			mln::vector<mln::rational<2,3>,mln::char_c<'D'>,mln::char_c<'Z'>>
		>
	>::value,
	"!"
);


int main() {}
