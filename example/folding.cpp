// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

#include <iostream>
#include <cstdlib>

#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/vector.hpp>
#include <cynodelic/mulinum/string.hpp>
#include <cynodelic/mulinum/equals.hpp>
#include <cynodelic/mulinum/sub.hpp>
#include <cynodelic/mulinum/concat.hpp>
#include <cynodelic/mulinum/to_string.hpp>
#include <cynodelic/mulinum/fold_left.hpp>
#include <cynodelic/mulinum/fold_right.hpp>


namespace mln = cynodelic::mulinum;


using input_vec = mln::vector<mln::int_c<1>,mln::int_c<2>,mln::int_c<3>,mln::int_c<4>,mln::int_c<5>,mln::int_c<6>,mln::int_c<7>,mln::int_c<8>,mln::int_c<9>,mln::int_c<10>>;


template <typename,typename>
struct make_sub_string_impl;

template <typename IntType,IntType Lhs,IntType Rhs>
struct make_sub_string_impl<mln::integer_c<IntType,Lhs>,mln::integer_c<IntType,Rhs>> :
	mln::concat<mln::string<'('>,mln::to_string<mln::integer_c<IntType,Lhs>>,mln::string<' ','-',' '>,mln::to_string<mln::integer_c<IntType,Rhs>>,mln::string<')'>>
{};

template <char... LhsChars,typename IntType,IntType Rhs>
struct make_sub_string_impl<mln::string<LhsChars...>,mln::integer_c<IntType,Rhs>> :
	mln::concat<mln::string<'('>,mln::string<LhsChars...>,mln::string<' ','-',' '>,mln::to_string<mln::integer_c<IntType,Rhs>>,mln::string<')'>>
{};

template <typename IntType,IntType Lhs,char... RhsChars>
struct make_sub_string_impl<mln::integer_c<IntType,Lhs>,mln::string<RhsChars...>> :
	mln::concat<mln::string<'('>,mln::to_string<mln::integer_c<IntType,Lhs>>,mln::string<' ','-',' '>,mln::string<RhsChars...>,mln::string<')'>>
{};

template <char... LhsChars,char... RhsChars>
struct make_sub_string_impl<mln::string<LhsChars...>,mln::string<RhsChars...>> :
	mln::concat<mln::string<'('>,mln::string<LhsChars...>,mln::string<' ','-',' '>,mln::string<RhsChars...>,mln::string<')'>>
{};

template <typename Lhs,typename Rhs>
using make_sub_string = typename make_sub_string_impl<Lhs,Rhs>::type;


template <template <template <typename...> class,typename> class FoldFunc,typename T>
struct do_sub_with_folding
{
	using result     = FoldFunc<mln::sub,T>;
	using string_res = mln::concat<FoldFunc<make_sub_string,T>,mln::string<' ','=',' '>,mln::to_string<result>>;
};


static_assert(mln::equals<typename do_sub_with_folding<mln::fold_left,input_vec>::result,mln::int_c<(((((((((1 - 2) - 3) - 4) - 5) - 6) - 7) - 8) - 9) - 10)>>::value,"!");
static_assert(mln::equals<typename do_sub_with_folding<mln::fold_right,input_vec>::result,mln::int_c<(1 - (2 - (3 - (4 - (5 - (6 - (7 - (8 - (9 - 10)))))))))>>::value,"!");


int main()
{
	std::cout << do_sub_with_folding<mln::fold_left,input_vec>::string_res::c_str() << '\n';
	std::cout << do_sub_with_folding<mln::fold_right,input_vec>::string_res::c_str() << '\n';
}
