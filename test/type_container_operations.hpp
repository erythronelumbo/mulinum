// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

#ifndef CYNODELIC_MULINUM_TEST_TYPE_CONTAINER_OPERATIONS_HPP
#define CYNODELIC_MULINUM_TEST_TYPE_CONTAINER_OPERATIONS_HPP


CYNODELIC_TESTER_TEST_CASE(type_container_operations);

CYNODELIC_TESTER_SECTION(type_container_operations,vector)
{
	using namespace mln::placeholders;

	using cont_1 = mln::vector<int,float,bool,std::nullptr_t>;
	using cont_2 = mln::vector<char,double,short,unsigned>;
	using cont_3 = mln::vector<mln::false_,mln::true_>;
	using cont_4 = mln::vector<char,char,char,char,char>;

	using cprod_res = mln::vector<
		mln::vector<mln::false_,mln::false_,mln::false_>,
		mln::vector<mln::false_,mln::false_,mln::true_>,
		mln::vector<mln::false_,mln::true_,mln::false_>,
		mln::vector<mln::false_,mln::true_,mln::true_>,
		mln::vector<mln::true_,mln::false_,mln::false_>,
		mln::vector<mln::true_,mln::false_,mln::true_>,
		mln::vector<mln::true_,mln::true_,mln::false_>,
		mln::vector<mln::true_,mln::true_,mln::true_>
	>;

	using fdl_res = my_pair<my_pair<my_pair<char,double>,short>,unsigned>;
	using fdr_res = my_pair<char,my_pair<double,my_pair<short,unsigned>>>;

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::at<cont_1,mln::size_c<0>>,int>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::at<cont_1,mln::size_c<1>>,float>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::at<cont_1,mln::size_c<2>>,bool>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::at<cont_1,mln::size_c<3>>,std::nullptr_t>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::cartesian_product<cont_3,cont_3,cont_3>,cprod_res>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::concat<cont_1,cont_2>,mln::vector<int,float,bool,std::nullptr_t,char,double,short,unsigned>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::fill<mln::vector_tag,int,mln::size_c<5>>,mln::vector<int,int,int,int,int>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::find<char,cont_2>,mln::size_c<0>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::find<double,cont_2>,mln::size_c<1>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::find<short,cont_2>,mln::size_c<2>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::find<unsigned,cont_2>,mln::size_c<3>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::find<dummy<int>,cont_2>,mln::size_c<-1>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::fold_left<my_pair,cont_2>,fdl_res>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::fold_right<my_pair,cont_2>,fdr_res>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_4,float,mln::size_c<0>>,mln::vector<float,char,char,char,char,char>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_4,float,mln::size_c<1>>,mln::vector<char,float,char,char,char,char>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_4,float,mln::size_c<2>>,mln::vector<char,char,float,char,char,char>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_4,float,mln::size_c<3>>,mln::vector<char,char,char,float,char,char>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_4,float,mln::size_c<4>>,mln::vector<char,char,char,char,float,char>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_4,float,mln::size_c<5>>,mln::vector<char,char,char,char,char,float>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::is_empty<mln::vector<>>,mln::true_>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::is_empty<cont_3>,mln::false_>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::lexicographical_compare<my_comparator,cont_4,cont_2>,mln::true_>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::push_back<cont_1,char[3]>,mln::vector<int,float,bool,std::nullptr_t,char[3]>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::push_front<cont_1,char[3]>,mln::vector<char[3],int,float,bool,std::nullptr_t>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::transform<cont_3,my_mfun_obj>,mln::vector<my_pair<mln::false_,mln::false_>,my_pair<mln::true_,mln::true_>>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::remove<cont_1,mln::size_c<0>>,mln::vector<float,bool,std::nullptr_t>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::remove<cont_1,mln::size_c<1>>,mln::vector<int,bool,std::nullptr_t>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::remove<cont_1,mln::size_c<2>>,mln::vector<int,float,std::nullptr_t>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::remove<cont_1,mln::size_c<3>>,mln::vector<int,float,bool>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::remove_if<cont_1,mln::bind<mln::equals,_1,std::nullptr_t>>,mln::vector<int,float,bool>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::rename<dummy,cont_2>,dummy<char,double,short,unsigned>>::value));


	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::replace<cont_4,char[4][4],mln::size_c<0>>,mln::vector<char[4][4],char,char,char,char>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::replace<cont_4,char[4][4],mln::size_c<1>>,mln::vector<char,char[4][4],char,char,char>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::replace<cont_4,char[4][4],mln::size_c<2>>,mln::vector<char,char,char[4][4],char,char>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::replace<cont_4,char[4][4],mln::size_c<3>>,mln::vector<char,char,char,char[4][4],char>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::replace<cont_4,char[4][4],mln::size_c<4>>,mln::vector<char,char,char,char,char[4][4]>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::reverse<cont_1>,mln::vector<std::nullptr_t,bool,float,int>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::sort<mln::vector<mln::int_c<4>,mln::int_c<1>,mln::int_c<3>,mln::int_c<2>>,mln::lazy<mln::less>>,mln::vector<mln::int_c<1>,mln::int_c<2>,mln::int_c<3>,mln::int_c<4>>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::take<cont_2,mln::size_c<0>,mln::size_c<0>>,mln::vector<>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::take<cont_2,mln::size_c<0>,mln::size_c<2>>,mln::vector<char,double>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::take<cont_2,mln::size_c<1>,mln::size_c<3>>,mln::vector<double,short,unsigned>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::take<cont_2,mln::size_c<3>,mln::size_c<1>>,mln::vector<unsigned>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::take<cont_2,mln::size_c<1>,mln::size_c<2>>,mln::vector<double,short>>::value));
}

CYNODELIC_TESTER_SECTION(type_container_operations,list)
{
	using namespace mln::placeholders;
	
	using cont_1 = mln::list<int,float,bool,std::nullptr_t>;
	using cont_2 = mln::list<char,double,short,unsigned>;
	using cont_3 = mln::list<mln::false_,mln::true_>;
	using cont_4 = mln::list<char,char,char,char,char>;

	using cprod_res = mln::list<
		mln::list<mln::false_,mln::false_,mln::false_>,
		mln::list<mln::false_,mln::false_,mln::true_>,
		mln::list<mln::false_,mln::true_,mln::false_>,
		mln::list<mln::false_,mln::true_,mln::true_>,
		mln::list<mln::true_,mln::false_,mln::false_>,
		mln::list<mln::true_,mln::false_,mln::true_>,
		mln::list<mln::true_,mln::true_,mln::false_>,
		mln::list<mln::true_,mln::true_,mln::true_>
	>;

	using fdl_res = my_pair<my_pair<my_pair<char,double>,short>,unsigned>;
	using fdr_res = my_pair<char,my_pair<double,my_pair<short,unsigned>>>;

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<cont_2,mln::list_node<char,mln::list_node<double,mln::list_node<short,mln::list_node<unsigned,mln::null_type>>>>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::list<>,mln::null_type>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::at<cont_1,mln::size_c<0>>,int>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::at<cont_1,mln::size_c<1>>,float>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::at<cont_1,mln::size_c<2>>,bool>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::at<cont_1,mln::size_c<3>>,std::nullptr_t>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::cartesian_product<cont_3,cont_3,cont_3>,cprod_res>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::concat<cont_1,cont_2>,mln::list<int,float,bool,std::nullptr_t,char,double,short,unsigned>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::fill<mln::list_tag,int,mln::size_c<5>>,mln::list<int,int,int,int,int>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::find<char,cont_2>,mln::size_c<0>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::find<double,cont_2>,mln::size_c<1>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::find<short,cont_2>,mln::size_c<2>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::find<unsigned,cont_2>,mln::size_c<3>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::find<dummy<int>,cont_2>,mln::size_c<-1>>::value));
	
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::fold_left<my_pair,cont_2>,fdl_res>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::fold_right<my_pair,cont_2>,fdr_res>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_4,float,mln::size_c<0>>,mln::list<float,char,char,char,char,char>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_4,float,mln::size_c<1>>,mln::list<char,float,char,char,char,char>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_4,float,mln::size_c<2>>,mln::list<char,char,float,char,char,char>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_4,float,mln::size_c<3>>,mln::list<char,char,char,float,char,char>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_4,float,mln::size_c<4>>,mln::list<char,char,char,char,float,char>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::insert<cont_4,float,mln::size_c<5>>,mln::list<char,char,char,char,char,float>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::is_empty<mln::null_type>,mln::true_>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::is_empty<cont_3>,mln::false_>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::lexicographical_compare<my_comparator,cont_4,cont_2>,mln::true_>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::push_back<cont_1,char[3]>,mln::list<int,float,bool,std::nullptr_t,char[3]>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::push_front<cont_1,char[3]>,mln::list<char[3],int,float,bool,std::nullptr_t>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::transform<cont_3,my_mfun_obj>,mln::list<my_pair<mln::false_,mln::false_>,my_pair<mln::true_,mln::true_>>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::remove<cont_1,mln::size_c<0>>,mln::list<float,bool,std::nullptr_t>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::remove<cont_1,mln::size_c<1>>,mln::list<int,bool,std::nullptr_t>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::remove<cont_1,mln::size_c<2>>,mln::list<int,float,std::nullptr_t>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::remove<cont_1,mln::size_c<3>>,mln::list<int,float,bool>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::remove_if<cont_1,mln::bind<mln::equals,_1,std::nullptr_t>>,mln::list<int,float,bool>>::value));


	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::replace<cont_4,char[4][4],mln::size_c<0>>,mln::list<char[4][4],char,char,char,char>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::replace<cont_4,char[4][4],mln::size_c<1>>,mln::list<char,char[4][4],char,char,char>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::replace<cont_4,char[4][4],mln::size_c<2>>,mln::list<char,char,char[4][4],char,char>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::replace<cont_4,char[4][4],mln::size_c<3>>,mln::list<char,char,char,char[4][4],char>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::replace<cont_4,char[4][4],mln::size_c<4>>,mln::list<char,char,char,char,char[4][4]>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::reverse<cont_1>,mln::list<std::nullptr_t,bool,float,int>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::sort<mln::list<mln::int_c<4>,mln::int_c<1>,mln::int_c<3>,mln::int_c<2>>,mln::lazy<mln::less>>,mln::list<mln::int_c<1>,mln::int_c<2>,mln::int_c<3>,mln::int_c<4>>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::take<cont_2,mln::size_c<0>,mln::size_c<0>>,mln::null_type>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::take<cont_2,mln::size_c<0>,mln::size_c<2>>,mln::list<char,double>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::take<cont_2,mln::size_c<1>,mln::size_c<3>>,mln::list<double,short,unsigned>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::take<cont_2,mln::size_c<3>,mln::size_c<1>>,mln::list<unsigned>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::take<cont_2,mln::size_c<1>,mln::size_c<2>>,mln::list<double,short>>::value));
}


#endif
