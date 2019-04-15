#include <iostream>
#include <cstdlib>
#include <cstddef>

#include <cynodelic/mulinum/mulinum_all.hpp>


namespace mln = cynodelic::mulinum;


template <typename,typename>
struct fibonacci_num_impl;

template <typename IntType,std::size_t Num>
struct fibonacci_num_impl<IntType,mln::size_c<Num>> :
	mln::add<
		typename fibonacci_num_impl<IntType,mln::size_c<Num - 1>>::type,
		typename fibonacci_num_impl<IntType,mln::size_c<Num - 2>>::type
	>
{};

template <typename IntType>
struct fibonacci_num_impl<IntType,mln::size_c<1>> :
	mln::integer_c<IntType,1>
{};

template <typename IntType>
struct fibonacci_num_impl<IntType,mln::size_c<0>> :
	mln::integer_c<IntType,0>
{};

template <typename IntType,typename Num>
using fibonacci_num = typename fibonacci_num_impl<IntType,Num>::type;


static_assert(mln::equals<fibonacci_num<int,mln::size_c<0>>,mln::int_c<0>>::value,"!");
static_assert(mln::equals<fibonacci_num<int,mln::size_c<1>>,mln::int_c<1>>::value,"!");
static_assert(mln::equals<fibonacci_num<int,mln::size_c<2>>,mln::int_c<1>>::value,"!");
static_assert(mln::equals<fibonacci_num<int,mln::size_c<3>>,mln::int_c<2>>::value,"!");
static_assert(mln::equals<fibonacci_num<int,mln::size_c<4>>,mln::int_c<3>>::value,"!");
static_assert(mln::equals<fibonacci_num<int,mln::size_c<5>>,mln::int_c<5>>::value,"!");
static_assert(mln::equals<fibonacci_num<int,mln::size_c<6>>,mln::int_c<8>>::value,"!");
static_assert(mln::equals<fibonacci_num<int,mln::size_c<7>>,mln::int_c<13>>::value,"!");
static_assert(mln::equals<fibonacci_num<int,mln::size_c<8>>,mln::int_c<21>>::value,"!");
static_assert(mln::equals<fibonacci_num<int,mln::size_c<9>>,mln::int_c<34>>::value,"!");
static_assert(mln::equals<fibonacci_num<int,mln::size_c<10>>,mln::int_c<55>>::value,"!");



template <typename,typename>
struct make_sequence_impl;

template <typename IntContainerTag>
struct make_sequence_impl<IntContainerTag,mln::size_c<0>> :
	mln::make_from_tag_c<
		IntContainerTag,
		fibonacci_num<
			typename IntContainerTag::value_type,
			mln::size_c<0>
		>::value
	>
{};

template <typename IntContainerTag,std::size_t Num>
struct make_sequence_impl<IntContainerTag,mln::size_c<Num>> :
	mln::push_back<
		typename make_sequence_impl<
			IntContainerTag,
			mln::size_c<Num - 1>
		>::type,
		fibonacci_num<
			typename IntContainerTag::value_type,
			mln::size_c<Num>
		>
	>
{};

template <typename IntContainerTag,typename Num>
using make_sequence = typename make_sequence_impl<IntContainerTag,Num>::type;


using namespace mln::placeholders;

// test_ftor::apply<_1,_2> ~= make_sequence<vector_c_tag<_2>,_1>
using test_ftor = mln::bind<
	make_sequence,
	mln::bind<
		mln::vector_c_tag,
		_2
	>,
	_1
>;

template <typename Ftor,typename... Args>
using fcall = typename Ftor::template apply<Args...>::type;


static_assert(
	mln::equals<
		fcall<test_ftor,mln::size_c<11>,long long>,
		mln::vector_c<long long,0,1,1,2,3,5,8,13,21,34,55,89>
	>::value,
	"!!!"
);


int main() {}
