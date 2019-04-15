// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

#ifndef CYNODELIC_MULINUM_TEST_INTEGER_CONTAINER_OPERATIONS_HPP
#define CYNODELIC_MULINUM_TEST_INTEGER_CONTAINER_OPERATIONS_HPP


CYNODELIC_TESTER_TEST_CASE(integer_container_operations);

CYNODELIC_TESTER_SECTION(integer_container_operations,vector_c)
{
	using namespace mln::placeholders;
	
	using cont_1 = mln::int_vector<40,57,105,2>;
	using cont_2 = mln::int_vector<39,-51,906,345>;
	using cont_3 = mln::int_vector<4,4,4,4,4>;


	CYNODELIC_TESTER_MESSAGE
		<< "cont_1 = mln::int_vector<40,57,105,2>" << tst::newline
		<< "cont_2 = mln::int_vector<39,-51,906,345>" << tst::newline
		<< "cont_3 = mln::int_vector<4,4,4,4,4>";

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::at<cont_1,mln::size_c<0>>,mln::int_c<40>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::at<cont_1,mln::size_c<1>>,mln::int_c<57>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::at<cont_1,mln::size_c<2>>,mln::int_c<105>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::at<cont_1,mln::size_c<3>>,mln::int_c<2>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::concat<cont_1,cont_2>,mln::int_vector<40,57,105,2,39,-51,906,345>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::fill<mln::vector_c_tag<int>,mln::int_c<5>,mln::size_c<10>>,mln::int_vector<5,5,5,5,5,5,5,5,5,5>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::find<mln::int_c<40>,cont_1>,mln::size_c<0>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::find<mln::int_c<57>,cont_1>,mln::size_c<1>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::find<mln::int_c<105>,cont_1>,mln::size_c<2>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::find<mln::int_c<2>,cont_1>,mln::size_c<3>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::find<mln::int_c<999>,cont_1>,mln::size_c<-1>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::iota<mln::vector_c_tag<int>,mln::int_c<10>,mln::size_c<10>>,mln::int_vector<10,11,12,13,14,15,16,17,18,19>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_3,mln::int_c<-16>,mln::size_c<0>>,mln::int_vector<-16,4,4,4,4,4>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_3,mln::int_c<-16>,mln::size_c<1>>,mln::int_vector<4,-16,4,4,4,4>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_3,mln::int_c<-16>,mln::size_c<2>>,mln::int_vector<4,4,-16,4,4,4>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_3,mln::int_c<-16>,mln::size_c<3>>,mln::int_vector<4,4,4,-16,4,4>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_3,mln::int_c<-16>,mln::size_c<4>>,mln::int_vector<4,4,4,4,-16,4>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_3,mln::int_c<-16>,mln::size_c<5>>,mln::int_vector<4,4,4,4,4,-16>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::is_empty<mln::int_vector<>>,mln::true_>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::is_empty<cont_2>,mln::false_>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::lexicographical_compare<mln::lazy<mln::greater>,cont_1,cont_2>,mln::true_>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::push_back<cont_2,mln::int_c<65536>>,mln::int_vector<39,-51,906,345,65536>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::push_front<cont_2,mln::int_c<65536>>,mln::int_vector<65536,39,-51,906,345>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::remove<cont_2,mln::size_c<0>>,mln::int_vector<-51,906,345>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::remove<cont_2,mln::size_c<1>>,mln::int_vector<39,906,345>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::remove<cont_2,mln::size_c<2>>,mln::int_vector<39,-51,345>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::remove<cont_2,mln::size_c<3>>,mln::int_vector<39,-51,906>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::remove_if<cont_1,mln::bind<mln::less,_1,mln::int_c<50>>>,mln::int_vector<57,105>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::sort<cont_2,mln::lazy<mln::less>>,mln::int_vector<-51,39,345,906>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::take<cont_1,mln::size_c<0>,mln::size_c<2>>,mln::int_vector<40,57>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::take<cont_1,mln::size_c<1>,mln::size_c<0>>,mln::int_vector<>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::take<cont_1,mln::size_c<2>,mln::size_c<2>>,mln::int_vector<105,2>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::take<cont_1,mln::size_c<1>,mln::size_c<1>>,mln::int_vector<57>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::take<cont_1,mln::size_c<0>,mln::size_c<3>>,mln::int_vector<40,57,105>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::take<cont_1,mln::size_c<1>,mln::size_c<3>>,mln::int_vector<57,105,2>>::value));
}

CYNODELIC_TESTER_SECTION(integer_container_operations,list_c)
{
	using namespace mln::placeholders;
	
	using cont_1 = mln::int_list<40,57,105,2>;
	using cont_2 = mln::int_list<39,-51,906,345>;
	using cont_3 = mln::int_list<4,4,4,4,4>;

	CYNODELIC_TESTER_MESSAGE
		<< "cont_1 = mln::int_list<40,57,105,2>" << tst::newline
		<< "cont_2 = mln::int_list<39,-51,906,345>" << tst::newline
		<< "cont_3 = mln::int_list<4,4,4,4,4>";

	using cont_1_res = mln::int_lnode<40,mln::int_lnode<57,mln::int_lnode<105,mln::int_lnode<2,mln::null_type>>>>;

	CYNODELIC_TESTER_MESSAGE << "cont_1_res = mln::int_lnode<40,mln::int_lnode<57,mln::int_lnode<105,mln::int_lnode<2,mln::null_type>>>>";

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<cont_1,cont_1_res>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::at<cont_1,mln::size_c<0>>,mln::int_c<40>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::at<cont_1,mln::size_c<1>>,mln::int_c<57>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::at<cont_1,mln::size_c<2>>,mln::int_c<105>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::at<cont_1,mln::size_c<3>>,mln::int_c<2>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::concat<cont_1,cont_2>,mln::int_list<40,57,105,2,39,-51,906,345>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::fill<mln::list_c_tag<int>,mln::int_c<5>,mln::size_c<10>>,mln::int_list<5,5,5,5,5,5,5,5,5,5>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::find<mln::int_c<40>,cont_1>,mln::size_c<0>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::find<mln::int_c<57>,cont_1>,mln::size_c<1>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::find<mln::int_c<105>,cont_1>,mln::size_c<2>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::find<mln::int_c<2>,cont_1>,mln::size_c<3>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::find<mln::int_c<999>,cont_1>,mln::size_c<-1>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::iota<mln::list_c_tag<int>,mln::int_c<10>,mln::size_c<10>>,mln::int_list<10,11,12,13,14,15,16,17,18,19>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_3,mln::int_c<-16>,mln::size_c<0>>,mln::int_list<-16,4,4,4,4,4>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_3,mln::int_c<-16>,mln::size_c<1>>,mln::int_list<4,-16,4,4,4,4>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_3,mln::int_c<-16>,mln::size_c<2>>,mln::int_list<4,4,-16,4,4,4>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_3,mln::int_c<-16>,mln::size_c<3>>,mln::int_list<4,4,4,-16,4,4>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_3,mln::int_c<-16>,mln::size_c<4>>,mln::int_list<4,4,4,4,-16,4>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_3,mln::int_c<-16>,mln::size_c<5>>,mln::int_list<4,4,4,4,4,-16>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::is_empty<mln::int_list<>>,mln::true_>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::is_empty<cont_2>,mln::false_>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::lexicographical_compare<mln::lazy<mln::greater>,cont_1,cont_2>,mln::true_>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::push_back<cont_2,mln::int_c<65536>>,mln::int_list<39,-51,906,345,65536>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::push_front<cont_2,mln::int_c<65536>>,mln::int_list<65536,39,-51,906,345>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::remove<cont_2,mln::size_c<0>>,mln::int_list<-51,906,345>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::remove<cont_2,mln::size_c<1>>,mln::int_list<39,906,345>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::remove<cont_2,mln::size_c<2>>,mln::int_list<39,-51,345>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::remove<cont_2,mln::size_c<3>>,mln::int_list<39,-51,906>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::remove_if<cont_1,mln::bind<mln::less,_1,mln::int_c<50>>>,mln::int_list<57,105>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::sort<cont_2,mln::lazy<mln::less>>,mln::int_list<-51,39,345,906>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::take<cont_1,mln::size_c<0>,mln::size_c<2>>,mln::int_list<40,57>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::take<cont_1,mln::size_c<1>,mln::size_c<0>>,mln::int_list<>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::take<cont_1,mln::size_c<2>,mln::size_c<2>>,mln::int_list<105,2>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::take<cont_1,mln::size_c<1>,mln::size_c<1>>,mln::int_list<57>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::take<cont_1,mln::size_c<0>,mln::size_c<3>>,mln::int_list<40,57,105>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::take<cont_1,mln::size_c<1>,mln::size_c<3>>,mln::int_list<57,105,2>>::value));
}

CYNODELIC_TESTER_SECTION(integer_container_operations,string)
{
	using namespace mln::placeholders;
	
	using cont_1 = mln::string<'h','e','l','l','o'>;
	using cont_2 = mln::string<'w','o','r','l','d'>;
	using cont_3 = mln::string<'y','y','y','y','y'>;

	CYNODELIC_TESTER_MESSAGE
		<< "cont_1 = mln::string<\'h\',\'e\',\'l\',\'l\',\'o\'> [string: \"" << cont_1::c_str() << "\"]" << tst::newline
		<< "cont_2 = mln::string<\'w\',\'o\',\'r\',\'l\',\'d\'> [string: \"" << cont_2::c_str() << "\"]" << tst::newline
		<< "cont_3 = mln::string<\'y\',\'y\',\'y\',\'y\',\'y\'> [string: \"" << cont_3::c_str() << "\"]";

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::at<cont_1,mln::size_c<0>>,mln::char_c<'h'>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::at<cont_1,mln::size_c<1>>,mln::char_c<'e'>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::at<cont_1,mln::size_c<2>>,mln::char_c<'l'>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::at<cont_1,mln::size_c<3>>,mln::char_c<'l'>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::at<cont_1,mln::size_c<4>>,mln::char_c<'o'>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::concat<cont_1,cont_2>,mln::string<'h','e','l','l','o','w','o','r','l','d'>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::fill<mln::string_tag,mln::char_c<'A'>,mln::size_c<10>>,mln::string<'A','A','A','A','A','A','A','A','A','A'>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::find<mln::char_c<'w'>,cont_2>,mln::size_c<0>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::find<mln::char_c<'o'>,cont_2>,mln::size_c<1>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::find<mln::char_c<'r'>,cont_2>,mln::size_c<2>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::find<mln::char_c<'l'>,cont_2>,mln::size_c<3>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::find<mln::char_c<'d'>,cont_2>,mln::size_c<4>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::find<mln::char_c<'s'>,cont_2>,mln::size_c<-1>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::iota<mln::string_tag,mln::char_c<'h'>,mln::size_c<10>>,mln::string<'h','i','j','k','l','m','n','o','p','q'>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_3,mln::char_c<'X'>,mln::size_c<0>>,mln::string<'X','y','y','y','y','y'>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_3,mln::char_c<'X'>,mln::size_c<1>>,mln::string<'y','X','y','y','y','y'>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_3,mln::char_c<'X'>,mln::size_c<2>>,mln::string<'y','y','X','y','y','y'>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_3,mln::char_c<'X'>,mln::size_c<3>>,mln::string<'y','y','y','X','y','y'>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_3,mln::char_c<'X'>,mln::size_c<4>>,mln::string<'y','y','y','y','X','y'>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_3,mln::char_c<'X'>,mln::size_c<5>>,mln::string<'y','y','y','y','y','X'>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::is_empty<mln::string<>>,mln::true_>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::is_empty<cont_2>,mln::false_>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::lexicographical_compare<mln::lazy<mln::less>,cont_1,cont_2>,mln::true_>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::push_back<cont_2,mln::char_c<'*'>>,mln::string<'w','o','r','l','d','*'>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::push_front<cont_2,mln::char_c<'*'>>,mln::string<'*','w','o','r','l','d'>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::remove<cont_2,mln::size_c<0>>,mln::string<'o','r','l','d'>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::remove<cont_2,mln::size_c<1>>,mln::string<'w','r','l','d'>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::remove<cont_2,mln::size_c<2>>,mln::string<'w','o','l','d'>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::remove<cont_2,mln::size_c<3>>,mln::string<'w','o','r','d'>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::remove<cont_2,mln::size_c<4>>,mln::string<'w','o','r','l'>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::remove_if<cont_1,mln::bind<mln::equals,_1,mln::char_c<'o'>>>,mln::string<'h','e','l','l'>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::sort<cont_2,mln::lazy<mln::less>>,mln::string<'d','l','o','r','w'>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::take<cont_1,mln::size_c<0>,mln::size_c<2>>,mln::string<'h','e'>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::take<cont_1,mln::size_c<4>,mln::size_c<1>>,mln::string<'o'>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::take<cont_1,mln::size_c<1>,mln::size_c<3>>,mln::string<'e','l','l'>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::take<cont_1,mln::size_c<2>,mln::size_c<2>>,mln::string<'l','l'>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::take<cont_1,mln::size_c<1>,mln::size_c<0>>,mln::string<>>::value));
}


#endif
