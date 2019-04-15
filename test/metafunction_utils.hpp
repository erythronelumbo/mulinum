// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

#ifndef CYNODELIC_MULINUM_TEST_METAFUNCTION_UTILS_HPP
#define CYNODELIC_MULINUM_TEST_METAFUNCTION_UTILS_HPP


template <typename Placeholder>
using bound_4 = mln::bind<mln::iota,mln::vector_c_tag<int>,Placeholder,mln::size_c<5>,mln::int_c<1>>;


CYNODELIC_TESTER_TEST_CASE_SINGLE_SECTION(bind)
{
	using namespace mln::placeholders;

	using bind_expr_test_1 = mln::bind<
		mln::iota,
		mln::vector_c_tag<std::size_t>,
		_1,
		_1,
		mln::bind<
			mln::add,
			_1,_2
		>
	>;

	CYNODELIC_TESTER_MESSAGE
		<< "bind_expr_test_1 is equivalent to iota<vector_c_tag<std::size_t>,_1,_1,add<_1,_2>>" << tst::newline
		<< "(being _1 and _2 the first and second metafunction arguments, respectively)";

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<fcall<bind_expr_test_1,mln::size_c<1>,mln::size_c<0>>,mln::vector_c<std::size_t,1>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<fcall<bind_expr_test_1,mln::size_c<2>,mln::size_c<0>>,mln::vector_c<std::size_t,2,4>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<fcall<bind_expr_test_1,mln::size_c<3>,mln::size_c<0>>,mln::vector_c<std::size_t,3,6,9>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<fcall<bind_expr_test_1,mln::size_c<4>,mln::size_c<0>>,mln::vector_c<std::size_t,4,8,12,16>>::value));

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<fcall<bind_expr_test_1,mln::size_c<1>,mln::size_c<2>>,mln::vector_c<std::size_t,1>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<fcall<bind_expr_test_1,mln::size_c<2>,mln::size_c<2>>,mln::vector_c<std::size_t,2,6>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<fcall<bind_expr_test_1,mln::size_c<3>,mln::size_c<2>>,mln::vector_c<std::size_t,3,8,13>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<fcall<bind_expr_test_1,mln::size_c<4>,mln::size_c<2>>,mln::vector_c<std::size_t,4,10,16,22>>::value));
}


CYNODELIC_TESTER_TEST_CASE_SINGLE_SECTION(curry)
{
	using namespace mln::placeholders;

	using curry_test = typename mln::curry<mln::transform>::
		template apply<
			mln::vector<mln::size_c<1>,mln::size_c<2>,mln::size_c<3>,mln::size_c<4>,mln::size_c<5>>
		>::
		template apply<
			mln::bind<mln::fill,mln::vector_tag,int,_1>
		>::type;

	using curry_expected = mln::vector<
		mln::vector<int>,
		mln::vector<int,int>,
		mln::vector<int,int,int>,
		mln::vector<int,int,int,int>,
		mln::vector<int,int,int,int,int>
	>;

	CYNODELIC_TESTER_MESSAGE
		<< "The curried metafunction is used in a similar way to \"curry(transform)(vector<...>)(bind<fill,vector_tag,int,_1>)\".";

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<curry_test,curry_expected>::value));
}


CYNODELIC_TESTER_TEST_CASE_SINGLE_SECTION(placeholders)
{
	using namespace mln::placeholders;

	using bound_1 = mln::bind<mln::make_from_tag,mln::vector_tag,int,int,int,_1>;

	using bound_2 = mln::bind<mln::make_from_tag,mln::vector_tag,_3,_2,_1>;

	using bound_3 = mln::bind<mln::make_from_tag,mln::vector_tag,char,char,_6,char,char>;

	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<fcall<bound_1,char>,mln::vector<int,int,int,char>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<fcall<bound_2,double,float,bool>,mln::vector<bool,float,double>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<fcall<bound_3,void,float,void,void,float,float>,mln::vector<char,char,float,char,char>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<fcall<bound_4<_1>,mln::int_c<0>,mln::int_c<1>,mln::int_c<2>,mln::int_c<3>,mln::int_c<4>>,mln::int_vector<0,1,2,3,4>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<fcall<bound_4<_2>,mln::int_c<0>,mln::int_c<1>,mln::int_c<2>,mln::int_c<3>,mln::int_c<4>>,mln::int_vector<1,2,3,4,5>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<fcall<bound_4<_3>,mln::int_c<0>,mln::int_c<1>,mln::int_c<2>,mln::int_c<3>,mln::int_c<4>>,mln::int_vector<2,3,4,5,6>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<fcall<bound_4<_4>,mln::int_c<0>,mln::int_c<1>,mln::int_c<2>,mln::int_c<3>,mln::int_c<4>>,mln::int_vector<3,4,5,6,7>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<fcall<bound_4<_5>,mln::int_c<0>,mln::int_c<1>,mln::int_c<2>,mln::int_c<3>,mln::int_c<4>>,mln::int_vector<4,5,6,7,8>>::value));
}


#endif
