// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

#ifndef CYNODELIC_MULINUM_TEST_ARITHMETIC_OPERATIONS_HPP
#define CYNODELIC_MULINUM_TEST_ARITHMETIC_OPERATIONS_HPP


CYNODELIC_TESTER_TEST_CASE(arithmetic_operations);

CYNODELIC_TESTER_SECTION(arithmetic_operations,integer_ops)
{
	using value_1 = mln::int_c<19>;
	using value_2 = mln::int_c<11>;

	CYNODELIC_TESTER_MESSAGE
		<< "value_1 = int_c<" << value_1::value << ">" << tst::newline
		<< "value_2 = int_c<" << value_2::value << ">";

	// Addition
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::add<value_1,value_2>,mln::int_c<value_1::value + value_2::value>>::value));

	// Substraction
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::sub<value_1,value_2>,mln::int_c<value_1::value - value_2::value>>::value));

	// Multiplication
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::mul<value_1,value_2>,mln::int_c<value_1::value * value_2::value>>::value));

	// Division
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::div<value_1,value_2>,mln::int_c<value_1::value / value_2::value>>::value));

	// Modulo
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::mod<value_1,value_2>,mln::int_c<value_1::value % value_2::value>>::value));

	// Negation
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::negate<value_1>,mln::int_c<-value_1::value>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::negate<value_2>,mln::int_c<-value_2::value>>::value));

	// Bitwise AND
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::bit_and<value_1,value_2>,mln::int_c<value_1::value & value_2::value>>::value));
	
	// Bitwise OR
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::bit_or<value_1,value_2>,mln::int_c<value_1::value | value_2::value>>::value));
	
	// Bitwise XOR
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::bit_xor<value_1,value_2>,mln::int_c<value_1::value ^ value_2::value>>::value));
	
	// Bitwise NOT
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::bit_not<value_1>,mln::int_c<~value_1::value>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::bit_not<value_2>,mln::int_c<~value_2::value>>::value));

	// Less than
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::less<value_1,value_2>,mln::bool_c<(value_1::value < value_2::value)>>::value));

	// Less than or equals
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::less_equal<value_1,value_2>,mln::bool_c<(value_1::value <= value_2::value)>>::value));

	// Greater than
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::greater<value_1,value_2>,mln::bool_c<(value_1::value > value_2::value)>>::value));

	// Greater than or equals
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::greater_equal<value_1,value_2>,mln::bool_c<(value_1::value >= value_2::value)>>::value));

	// Equals
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::equals<value_1,value_2>,mln::bool_c<(value_1::value == value_2::value)>>::value));

	// Not equals
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::not_equals<value_1,value_2>,mln::bool_c<(value_1::value != value_2::value)>>::value));
}

CYNODELIC_TESTER_SECTION(arithmetic_operations,bool_ops)
{
	// Logical AND
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::logical_and<mln::true_,mln::false_>,mln::bool_c<true && false>>::value));

	// Logical OR
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::logical_or<mln::true_,mln::false_>,mln::bool_c<true || false>>::value));

	// Logical NOT
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::logical_not<mln::true_>,mln::bool_c<!true>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::logical_not<mln::false_>,mln::bool_c<!false>>::value));
}

CYNODELIC_TESTER_SECTION(arithmetic_operations,rational_ops)
{
	using value_1 = mln::rational<1,2>;
	using value_2 = mln::rational<4,3>;

	CYNODELIC_TESTER_MESSAGE
		<< "value_1 = rational<" << value_1::num << "," << value_1::den << ">" << tst::newline
		<< "value_2 = rational<" << value_2::num << "," << value_2::den << ">";

	// Simplified form
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::simplified_form<mln::rational<20113,40226>>,value_1>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::simplified_form<mln::rational<86308,64731>>,value_2>::value));

	// Addition
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::add<value_1,value_2>,mln::rational<value_1::num*value_2::den + value_2::num*value_1::den,value_1::den*value_2::den>>::value));

	// Substraction
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::sub<value_1,value_2>,mln::rational<value_1::num*value_2::den - value_2::num*value_1::den,value_1::den*value_2::den>>::value));

	// Multiplication
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::mul<value_1,value_2>,mln::simplified_form<mln::rational<value_1::num*value_2::num,value_1::den*value_2::den>>>::value));
	
	// Division
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::div<value_1,value_2>,mln::simplified_form<mln::rational<value_1::num*value_2::den,value_1::den*value_2::num>>>::value));
	
	// Negation
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::negate<value_1>,mln::rational<-value_1::num,value_1::den>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::negate<value_2>,mln::rational<-value_2::num,value_2::den>>::value));
	
	// Inverse
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::inverse<value_1>,mln::rational<value_1::den,value_1::num>>::value));
	CYNODELIC_TESTER_CHECK_TRUE((mln::equals<mln::inverse<value_2>,mln::rational<value_2::den,value_2::num>>::value));
}


#endif
