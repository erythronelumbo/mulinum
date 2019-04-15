// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

#include <cstddef>
#include <cstdint>

#include <cynodelic/mulinum/tags.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/equals.hpp>
#include <cynodelic/mulinum/list_c.hpp>
#include <cynodelic/mulinum/iota.hpp>
#include <cynodelic/mulinum/curry.hpp>


namespace mln = cynodelic::mulinum;

using curry_res_1 = typename mln::curry<mln::iota>::
	template apply<mln::list_c_tag<int>>::
	template apply<mln::int_c<5>>::
	template apply<mln::size_c<5>>::
	template apply<mln::int_c<7>>::
	type;

static_assert(mln::equals<curry_res_1,mln::int_list<5,12,19,26,33>>::value,"!");


int main() {}
