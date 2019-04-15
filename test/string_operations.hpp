// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

#ifndef CYNODELIC_MULINUM_TEST_STRING_OPERATIONS_HPP
#define CYNODELIC_MULINUM_TEST_STRING_OPERATIONS_HPP


CYNODELIC_TESTER_TEST_CASE_SINGLE_SECTION(split)
{
	using str_1 = CYNODELIC_MULINUM_STRING("worm|dog|horse|mouse|cat|fox");
	using str_2 = CYNODELIC_MULINUM_STRING(",,banana,,apple,lemon,,,,,,,,,,,,pear,,cherry,,,grape,,");

	CYNODELIC_TESTER_MESSAGE
		<< "Strings to split:" << tst::newline
		<< "    \"" << str_1::c_str() << "\"" << tst::newline
		<< "    \"" << str_2::c_str() << "\"";

	using splitted_1a = mln::split<str_1,mln::char_c<'|'>,mln::vector_tag,mln::false_>;
	using splitted_1b = mln::split<str_1,mln::char_c<'|'>,mln::list_tag,mln::false_>;
	using splitted_2a = mln::split<str_2,mln::char_c<','>,mln::vector_tag,mln::true_>;
	using splitted_2b = mln::split<str_2,mln::char_c<','>,mln::list_tag,mln::true_>;

	using expected_1a = mln::vector<
		CYNODELIC_MULINUM_STRING("worm"),
		CYNODELIC_MULINUM_STRING("dog"),
		CYNODELIC_MULINUM_STRING("horse"),
		CYNODELIC_MULINUM_STRING("mouse"),
		CYNODELIC_MULINUM_STRING("cat"),
		CYNODELIC_MULINUM_STRING("fox")
	>;
	using expected_1b = mln::list<
		CYNODELIC_MULINUM_STRING("worm"),
		CYNODELIC_MULINUM_STRING("dog"),
		CYNODELIC_MULINUM_STRING("horse"),
		CYNODELIC_MULINUM_STRING("mouse"),
		CYNODELIC_MULINUM_STRING("cat"),
		CYNODELIC_MULINUM_STRING("fox")
	>;
	using expected_2a = mln::vector<
		CYNODELIC_MULINUM_STRING("banana"),
		CYNODELIC_MULINUM_STRING("apple"),
		CYNODELIC_MULINUM_STRING("lemon"),
		CYNODELIC_MULINUM_STRING("pear"),
		CYNODELIC_MULINUM_STRING("cherry"),
		CYNODELIC_MULINUM_STRING("grape")
	>;
	using expected_2b = mln::list<
		CYNODELIC_MULINUM_STRING("banana"),
		CYNODELIC_MULINUM_STRING("apple"),
		CYNODELIC_MULINUM_STRING("lemon"),
		CYNODELIC_MULINUM_STRING("pear"),
		CYNODELIC_MULINUM_STRING("cherry"),
		CYNODELIC_MULINUM_STRING("grape")
	>;

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<splitted_1a,expected_1a>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<splitted_1b,expected_1b>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<splitted_2a,expected_2a>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<splitted_2b,expected_2b>::value));
}


CYNODELIC_TESTER_TEST_CASE_SINGLE_SECTION(string_to_int)
{
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::string_to_int<long long,CYNODELIC_MULINUM_STRING("0")>,mln::llong_c<0>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::string_to_int<long long,CYNODELIC_MULINUM_STRING("-1")>,mln::llong_c<-1>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::string_to_int<long long,CYNODELIC_MULINUM_STRING("-277804")>,mln::llong_c<-277804>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::string_to_int<long long,CYNODELIC_MULINUM_STRING("-31655595906211")>,mln::llong_c<-31655595906211>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::string_to_int<long long,CYNODELIC_MULINUM_STRING("45")>,mln::llong_c<45>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::string_to_int<long long,CYNODELIC_MULINUM_STRING("6994012")>,mln::llong_c<6994012>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::string_to_int<long long,CYNODELIC_MULINUM_STRING("99620155001563")>,mln::llong_c<99620155001563>>::value));
}


CYNODELIC_TESTER_TEST_CASE_SINGLE_SECTION(to_string)
{
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::to_string<mln::llong_c<0>>,CYNODELIC_MULINUM_STRING("0")>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::to_string<mln::llong_c<-415>>,CYNODELIC_MULINUM_STRING("-415")>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::to_string<mln::llong_c<2111708>>,CYNODELIC_MULINUM_STRING("2111708")>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::to_string<mln::llong_c<-80003134571093483>>,CYNODELIC_MULINUM_STRING("-80003134571093483")>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::to_string<mln::llong_c<24468012374032813>>,CYNODELIC_MULINUM_STRING("24468012374032813")>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::to_string<mln::rational<-29,17>>,CYNODELIC_MULINUM_STRING("-29/17")>::value));
}


#endif
