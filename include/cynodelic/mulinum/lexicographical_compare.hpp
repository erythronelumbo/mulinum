// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file lexicographical_compare.hpp
 *
 * @brief Provides the `lexicographical_compare` metafunction.
 */


#ifndef CYNODELIC_MULINUM_LEXICOGRAPHICAL_COMPARE_HPP
#define CYNODELIC_MULINUM_LEXICOGRAPHICAL_COMPARE_HPP


#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/if.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/equals.hpp>
#include <cynodelic/mulinum/null_type.hpp>
#include <cynodelic/mulinum/vector.hpp>
#include <cynodelic/mulinum/list.hpp>
#include <cynodelic/mulinum/vector_c.hpp>
#include <cynodelic/mulinum/list_c.hpp>
#include <cynodelic/mulinum/string.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `lexicographical_compare`.
 */
template <typename,typename,typename>
struct lexicographical_compare_impl {};


/**
 * @brief Helper for `lexicographical_compare`.
 */
template <
	typename Comparator,
	char First1,char... Others1,
	char First2,char... Others2
>
struct lexicographical_compare_impl<
	Comparator,
	string<First1,Others1...>,
	string<First2,Others2...>
> : if_<
	(First1 == First2),
	typename lexicographical_compare_impl<
		Comparator,
		string<Others1...>,
		string<Others2...>
	>::type,
	typename Comparator::template apply<char_c<First1>,char_c<First2>>::type
>
{};


/**
 * @brief Helper for `lexicographical_compare`.
 */
template <
	typename Comparator,
	char... Chars
>
struct lexicographical_compare_impl<
	Comparator,
	string<Chars...>,
	string<>
> : Comparator::template apply<size_c<sizeof...(Chars)>,size_c<0>>::type
{};


/**
 * @brief Helper for `lexicographical_compare`.
 */
template <
	typename Comparator,
	char... Chars
>
struct lexicographical_compare_impl<
	Comparator,
	string<>,
	string<Chars...>
> : Comparator::template apply<size_c<0>,size_c<sizeof...(Chars)>>::type
{};


/**
 * @brief Helper for `lexicographical_compare`.
 */
template <
	typename Comparator
>
struct lexicographical_compare_impl<
	Comparator,
	string<>,
	string<>
> : false_
{};


/**
 * @brief Helper for `lexicographical_compare`.
 */
template <
	typename Comparator,
	typename IntType,
	IntType  First1,IntType... Others1,
	IntType  First2,IntType... Others2
>
struct lexicographical_compare_impl<
	Comparator,
	vector_c<IntType,First1,Others1...>,
	vector_c<IntType,First2,Others2...>
> : if_<
	(First1 == First2),
	typename lexicographical_compare_impl<
		Comparator,
		vector_c<IntType,Others1...>,
		vector_c<IntType,Others2...>
	>::type,
	typename Comparator::template apply<integer_c<IntType,First1>,integer_c<IntType,First2>>::type
>
{};


/**
 * @brief Helper for `lexicographical_compare`.
 */
template <
	typename   Comparator,
	typename   IntType,
	IntType... Items
>
struct lexicographical_compare_impl<
	Comparator,
	vector_c<IntType,Items...>,
	vector_c<IntType>
> : Comparator::template apply<size_c<sizeof...(Items)>,size_c<0>>::type
{};


/**
 * @brief Helper for `lexicographical_compare`.
 */
template <
	typename   Comparator,
	typename   IntType,
	IntType... Items
>
struct lexicographical_compare_impl<
	Comparator,
	vector_c<IntType>,
	vector_c<IntType,Items...>
> : Comparator::template apply<size_c<0>,size_c<sizeof...(Items)>>::type
{};


/**
 * @brief Helper for `lexicographical_compare`.
 */
template <
	typename Comparator,
	typename IntType
>
struct lexicographical_compare_impl<
	Comparator,
	vector_c<IntType>,
	vector_c<IntType>
> : false_
{};


/**
 * @brief Helper for `lexicographical_compare`.
 */
template <
	typename Comparator,
	typename IntType,
	IntType  First1,typename Tail1,
	IntType  First2,typename Tail2
>
struct lexicographical_compare_impl<
	Comparator,
	list_node_c<IntType,First1,Tail1>,
	list_node_c<IntType,First2,Tail2>
> : if_<
	(First1 == First2),
	typename lexicographical_compare_impl<
		Comparator,
		Tail1,
		Tail2
	>::type,
	typename Comparator::template apply<integer_c<IntType,First1>,integer_c<IntType,First2>>::type
>
{};


/**
 * @brief Helper for `lexicographical_compare`.
 */
template <
	typename Comparator,
	typename IntType,
	IntType  First,
	typename Tail
>
struct lexicographical_compare_impl<
	Comparator,
	list_node_c<IntType,First,Tail>,
	null_type
> : Comparator::template apply<size_c<list_node_c<IntType,First,Tail>::size>,size_c<0>>::type
{};


/**
 * @brief Helper for `lexicographical_compare`.
 */
template <
	typename Comparator,
	typename IntType,
	IntType  First,
	typename Tail
>
struct lexicographical_compare_impl<
	Comparator,
	null_type,
	list_node_c<IntType,First,Tail>
> : Comparator::template apply<size_c<0>,size_c<list_node_c<IntType,First,Tail>::size>>::type
{};


/**
 * @brief Helper for `lexicographical_compare`.
 */
template <
	typename Comparator,
	typename First1,typename... Others1,
	typename First2,typename... Others2
>
struct lexicographical_compare_impl<
	Comparator,
	vector<First1,Others1...>,
	vector<First2,Others2...>
> : if_<
	equals<First1,First2>::value,
	typename lexicographical_compare_impl<
		Comparator,
		vector<Others1...>,
		vector<Others2...>
	>::type,
	typename Comparator::template apply<First1,First2>::type
>
{};


/**
 * @brief Helper for `lexicographical_compare`.
 */
template <
	typename    Comparator,
	typename... Items
>
struct lexicographical_compare_impl<
	Comparator,
	vector<Items...>,
	vector<>
> : Comparator::template apply<size_c<sizeof...(Items)>,size_c<0>>::type
{};


/**
 * @brief Helper for `lexicographical_compare`.
 */
template <
	typename    Comparator,
	typename... Items
>
struct lexicographical_compare_impl<
	Comparator,
	vector<>,
	vector<Items...>
> : Comparator::template apply<size_c<0>,size_c<sizeof...(Items)>>::type
{};


/**
 * @brief Helper for `lexicographical_compare`.
 */
template <
	typename Comparator
>
struct lexicographical_compare_impl<
	Comparator,
	vector<>,
	vector<>
> : false_
{};


/**
 * @brief Helper for `lexicographical_compare`.
 */
template <
	typename Comparator,
	typename First1,typename Tail1,
	typename First2,typename Tail2
>
struct lexicographical_compare_impl<
	Comparator,
	list_node<First1,Tail1>,
	list_node<First2,Tail2>
> : if_<
	equals<First1,First2>::value,
	typename lexicographical_compare_impl<
		Comparator,
		Tail1,
		Tail2
	>::type,
	typename Comparator::template apply<First1,First2>::type
>
{};


/**
 * @brief Helper for `lexicographical_compare`.
 */
template <
	typename Comparator,
	typename First,
	typename Tail
>
struct lexicographical_compare_impl<
	Comparator,
	list_node<First,Tail>,
	null_type
> : Comparator::template apply<size_c<list_node<First,Tail>::size>,size_c<0>>::type
{};


/**
 * @brief Helper for `lexicographical_compare`.
 */
template <
	typename Comparator,
	typename First,
	typename Tail
>
struct lexicographical_compare_impl<
	Comparator,
	null_type,
	list_node<First,Tail>
> : Comparator::template apply<size_c<0>,size_c<list_node<First,Tail>::size>>::type
{};


/**
 * @brief Helper for `lexicographical_compare`.
 */
template <
	typename Comparator
>
struct lexicographical_compare_impl<
	Comparator,
	null_type,
	null_type
> : false_
{};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup containerops
 * @brief Lexicographical comparator.
 *
 * Performs a lexicographical comparision bewueen two containers, based on a
 * given comparator.
 *
 * @param Comparator The comparator (must be a metafunction object).
 * @param Container1 A container.
 * @param Container2 A container.
 */
template <typename Comparator,typename Container1,typename Container2>
using lexicographical_compare = typename lexicographical_compare_impl<Comparator,Container1,Container2>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_LEXICOGRAPHICAL_COMPARE_HPP
