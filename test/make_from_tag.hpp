// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

#ifndef CYNODELIC_MULINUM_TEST_MAKE_FROM_TAG_HPP
#define CYNODELIC_MULINUM_TEST_MAKE_FROM_TAG_HPP


CYNODELIC_TESTER_TEST_CASE_SINGLE_SECTION(make_from_tag)
{
	using namespace mln::placeholders;

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::make_from_tag<mln::vector_tag>,mln::vector<>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::make_from_tag<mln::vector_tag,unsigned>,mln::vector<unsigned>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::make_from_tag<mln::vector_tag,int,float,char,short,double>,mln::vector<int,float,char,short,double>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::make_from_tag<mln::list_tag>,mln::null_type>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::make_from_tag<mln::list_tag,unsigned>,mln::list_node<unsigned,mln::null_type>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::make_from_tag<mln::list_tag,int,float,char,short,double>,mln::list_node<int,mln::list_node<float,mln::list_node<char,mln::list_node<short,mln::list_node<double,mln::null_type>>>>>>::value));
}


CYNODELIC_TESTER_TEST_CASE_SINGLE_SECTION(make_from_tag_c)
{
	using namespace mln::placeholders;

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::make_from_tag_c<mln::integer_tag<int>,105>,mln::integer_c<int,105>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::make_from_tag_c<mln::rational_tag,-221,439>,mln::rational<-221,439>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::make_from_tag_c<mln::vector_c_tag<int>>,mln::int_vector<>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::make_from_tag_c<mln::vector_c_tag<int>,5>,mln::int_vector<5>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::make_from_tag_c<mln::vector_c_tag<int>,1,1,2,3,5,8,13,21>,mln::int_vector<1,1,2,3,5,8,13,21>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::make_from_tag_c<mln::list_c_tag<int>>,mln::null_type>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::make_from_tag_c<mln::list_c_tag<int>,1>,mln::int_list<1>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::make_from_tag_c<mln::list_c_tag<int>,1,1,2,3,5,8,13,21>,mln::int_list<1,1,2,3,5,8,13,21>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::make_from_tag_c<mln::string_tag>,mln::string<>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::make_from_tag_c<mln::string_tag,'X'>,mln::string<'X'>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::make_from_tag_c<mln::string_tag,'H','e','l','l','o'>,mln::string<'H','e','l','l','o'>>::value));
}


#endif
