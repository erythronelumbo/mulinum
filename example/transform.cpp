// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

#include <cstddef>
#include <cstdint>

#include <cynodelic/mulinum/tags.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/equals.hpp>
#include <cynodelic/mulinum/list.hpp>
#include <cynodelic/mulinum/string.hpp>
#include <cynodelic/mulinum/iota.hpp>
#include <cynodelic/mulinum/placeholders.hpp>
#include <cynodelic/mulinum/bind.hpp>
#include <cynodelic/mulinum/transform.hpp>


namespace mln = cynodelic::mulinum;

using namespace mln::placeholders;


using input_list = mln::list<mln::size_c<1>,mln::size_c<2>,mln::size_c<3>,mln::size_c<4>,mln::size_c<5>,mln::size_c<6>,mln::size_c<7>,mln::size_c<8>,mln::size_c<9>,mln::size_c<10>>;


static_assert(
	mln::equals<
		mln::transform<
			input_list,
			mln::bind<
				mln::iota,
				mln::string_tag,
				mln::char_c<'a'>,
				_1
			>
		>,
		mln::list<
			CYNODELIC_MULINUM_STRING("a"),
			CYNODELIC_MULINUM_STRING("ab"),
			CYNODELIC_MULINUM_STRING("abc"),
			CYNODELIC_MULINUM_STRING("abcd"),
			CYNODELIC_MULINUM_STRING("abcde"),
			CYNODELIC_MULINUM_STRING("abcdef"),
			CYNODELIC_MULINUM_STRING("abcdefg"),
			CYNODELIC_MULINUM_STRING("abcdefgh"),
			CYNODELIC_MULINUM_STRING("abcdefghi"),
			CYNODELIC_MULINUM_STRING("abcdefghij")
		>
	>::value,
	"!"
);


int main() {}
