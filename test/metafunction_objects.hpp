// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

#ifndef CYNODELIC_MULINUM_TEST_METAFUNCTION_OBJECTS_HPP
#define CYNODELIC_MULINUM_TEST_METAFUNCTION_OBJECTS_HPP


CYNODELIC_TESTER_TEST_CASE_SINGLE_SECTION(arg)
{
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<typename mln::arg<0>::template apply<char[5],char[4],char[3],char[2],char[1]>::type,char[5]>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<typename mln::arg<1>::template apply<char[5],char[4],char[3],char[2],char[1]>::type,char[4]>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<typename mln::arg<2>::template apply<char[5],char[4],char[3],char[2],char[1]>::type,char[3]>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<typename mln::arg<3>::template apply<char[5],char[4],char[3],char[2],char[1]>::type,char[2]>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<typename mln::arg<4>::template apply<char[5],char[4],char[3],char[2],char[1]>::type,char[1]>::value));
}


CYNODELIC_TESTER_TEST_CASE_SINGLE_SECTION(identity)
{
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<typename mln::identity::template apply<double>::type,double>::value));
}


CYNODELIC_TESTER_TEST_CASE_SINGLE_SECTION(iterate)
{
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<typename mln::iterate<my_functor,3>::template apply<char>::type,mln::vector<mln::vector<mln::vector<char,char>,mln::vector<char,char>>,mln::vector<mln::vector<char,char>,mln::vector<char,char>>>>::value));
}


CYNODELIC_TESTER_TEST_CASE_SINGLE_SECTION(lazy)
{
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<typename mln::lazy<mln::add>::template apply<mln::uint_c<15>,mln::uint_c<11>>::type,mln::uint_c<26>>::value));
}


#endif
