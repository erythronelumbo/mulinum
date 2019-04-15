// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

#ifndef CYNODELIC_MULINUM_TEST_CONTROL_HPP
#define CYNODELIC_MULINUM_TEST_CONTROL_HPP


CYNODELIC_TESTER_TEST_CASE_SINGLE_SECTION(control)
{
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<int,int>::value));
	CYNODELIC_TESTER_CHECK_FALSE((mln::equals<char[3][3],int[1]>::value));

	CYNODELIC_TESTER_CHECK_FALSE((mln::not_equals<int,int>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::not_equals<char[3][3],int[1]>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::if_<true,double,bool>,double>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::if_<false,double,bool>,bool>::value));
}


#endif
