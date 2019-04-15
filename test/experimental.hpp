// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

#ifndef CYNODELIC_MULINUM_TEST_EXPERIMENTAL_HPP
#define CYNODELIC_MULINUM_TEST_EXPERIMENTAL_HPP


CYNODELIC_TESTER_TEST_CASE_SINGLE_SECTION(olog_n_iota)
{
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::experimental::olog_n_iota<mln::int_vector_tag,mln::int_c<0>,mln::size_c<10>,mln::int_c<1>>,mln::int_vector<0,1,2,3,4,5,6,7,8,9>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::experimental::olog_n_iota<mln::int_vector_tag,mln::int_c<1>,mln::size_c<5>,mln::int_c<2>>,mln::int_vector<1,3,5,7,9>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::experimental::olog_n_iota<mln::int_vector_tag,mln::int_c<5>,mln::size_c<4>,mln::int_c<7>>,mln::int_vector<5,12,19,26>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::experimental::olog_n_iota<mln::int_vector_tag,mln::int_c<5>,mln::size_c<4>,mln::int_c<7>>,mln::iota<mln::int_vector_tag,mln::int_c<5>,mln::size_c<4>,mln::int_c<7>>>::value));
}


#endif
