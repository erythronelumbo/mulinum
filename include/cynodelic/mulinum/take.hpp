// Copyright (c) 2021 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file take.hpp
 *
 * @brief Defines the `take` metafunction.
 */


#ifndef CYNODELIC_MULINUM_TAKE_HPP
#define CYNODELIC_MULINUM_TAKE_HPP


#include <cstddef>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/equals.hpp>
#include <cynodelic/mulinum/vector.hpp>
#include <cynodelic/mulinum/list.hpp>
#include <cynodelic/mulinum/string.hpp>
#include <cynodelic/mulinum/vector_c.hpp>
#include <cynodelic/mulinum/list_c.hpp>
#include <cynodelic/mulinum/concat.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `take`.
 */
template <typename, typename, typename>
class take_impl {};


/**
 * @brief Helper for `take`.
 */
template <typename... Items, std::size_t From, std::size_t Num>
class take_impl<vector<Items...>, integer_c<std::size_t, From>, integer_c<std::size_t, Num>>
{
	private:
		using input = vector<Items...>;


		template <typename, std::size_t, bool>
		struct take_first_impl;

		template <typename T, std::size_t Num_>
		struct take_first_impl<T, Num_, true>
		{
			using type = vector<>;
		};

		template <typename First, typename... Others, std::size_t Num_>
		struct take_first_impl<vector<First, Others...>, Num_, false>
		{
			using type = concat<
				vector<First>,
				typename take_first_impl<vector<Others...>, Num_ - 1, (Num_ - 1) == 0>::type
			>;
		};

		template <typename VectorT, std::size_t Num_>
		using take_first = typename take_first_impl<VectorT, Num_, Num_ == 0>::type;


		template <typename, std::size_t, bool>
		struct take_last_impl;

		template <typename First, typename... Others, std::size_t Num_>
		struct take_last_impl<vector<First, Others...>, Num_, false>
		{
			using type = typename take_last_impl<vector<Others...>, Num_ - 1, (Num_ - 1) == 0>::type;
		};

		template <typename... Items_, std::size_t Num_>
		struct take_last_impl<vector<Items_...>, Num_, true>
		{
			using type = vector<Items_...>;
		};

		template <typename VectorT, std::size_t Num_>
		using take_last = typename take_last_impl<VectorT, Num_, Num_ == 0>::type;
	public:
		using type = take_first<take_last<vector<Items...>, From>, Num>;
};


/**
 * @brief Helper for `take`.
 */
template <typename Head, typename Tail, std::size_t From, std::size_t Num>
class take_impl<list_node<Head, Tail>, integer_c<std::size_t, From>, integer_c<std::size_t, Num>>
{
	private:
		using input = list_node<Head, Tail>;

		template <typename, std::size_t, bool>
		struct take_first_impl;

		template <typename Head_, typename Tail_, std::size_t Num_>
		struct take_first_impl<list_node<Head_, Tail_>, Num_, false>
		{
			using type = list_node<
				Head_,
				typename take_first_impl<Tail_, Num_ - 1, (Num_ - 1) == 0>::type
			>;
		};

		template <typename Head_, typename Tail_, std::size_t Num_>
		struct take_first_impl<list_node<Head_, Tail_>, Num_, true>
		{
			using type = null_type;
		};

		template <std::size_t Num_>
		struct take_first_impl<null_type, Num_, true>
		{
			using type = null_type;
		};

		template <typename ListT, std::size_t Num_>
		using take_first = typename take_first_impl<ListT, Num_, Num_ == 0>::type;


		template <typename, std::size_t, bool>
		struct take_last_impl;

		template <typename Head_, typename Tail_, std::size_t Num_>
		struct take_last_impl<list_node<Head_, Tail_>, Num_, false>
		{
			using type = typename take_last_impl<Tail_, Num_ - 1, (Num_ - 1) == 0>::type;
		};

		template <typename Head_, typename Tail_, std::size_t Num_>
		struct take_last_impl<list_node<Head_, Tail_>, Num_, true>
		{
			using type = list_node<Head_, Tail_>;
		};

		template <std::size_t Num_>
		struct take_last_impl<null_type, Num_, true>
		{
			using type = null_type;
		};

		template <typename ListT, std::size_t Num_>
		using take_last = typename take_last_impl<ListT, Num_, Num_ == 0>::type;
	public:
		using type = take_first<take_last<list_node<Head, Tail>, From>, Num>;
};


/**
 * @brief Helper for `take`.
 */
template <char... Chars, std::size_t From, std::size_t Num>
class take_impl<string<Chars...>, integer_c<std::size_t, From>, integer_c<std::size_t, Num>>
{
	private:
		template <typename, std::size_t, bool>
		struct take_first_impl;

		template <typename T, std::size_t Num_>
		struct take_first_impl<T, Num_, true>
		{
			using type = string<>;
		};

		template <char First, char... Others, std::size_t Num_>
		struct take_first_impl<string<First, Others...>, Num_, false>
		{
			using type = concat<
				string<First>,
				typename take_first_impl<string<Others...>, Num_ - 1, (Num_ - 1) == 0>::type
			>;
		};

		template <typename StringT, std::size_t Num_>
		using take_first = typename take_first_impl<StringT, Num_, Num_ == 0>::type;


		template <typename, std::size_t, bool>
		struct take_last_impl;

		template <char First, char... Others, std::size_t Num_>
		struct take_last_impl<string<First, Others...>, Num_, false>
		{
			using type = typename take_last_impl<string<Others...>, Num_ - 1, (Num_ - 1) == 0>::type;
		};

		template <char... Chars_, std::size_t Num_>
		struct take_last_impl<string<Chars_...>, Num_, true>
		{
			using type = string<Chars_...>;
		};

		template <typename StringT, std::size_t Num_>
		using take_last = typename take_last_impl<StringT, Num_, Num_ == 0>::type;
	public:
		using type = take_first<take_last<string<Chars...>, From>, Num>;
};


/**
 * @brief Helper for `take`.
 */
template <typename IntType, IntType... Items, std::size_t From, std::size_t Num>
class take_impl<vector_c<IntType, Items...>, integer_c<std::size_t, From>, integer_c<std::size_t, Num>>
{
	private:
		template <typename, std::size_t, bool>
		struct take_first_impl;

		template <typename T, std::size_t Num_>
		struct take_first_impl<T, Num_, true>
		{
			using type = vector_c<IntType>;
		};

		template <IntType First, IntType... Others, std::size_t Num_>
		struct take_first_impl<vector_c<IntType, First, Others...>, Num_, false>
		{
			using type = concat<
				vector_c<IntType, First>,
				typename take_first_impl<vector_c<IntType, Others...>, Num_ - 1, (Num_ - 1) == 0>::type
			>;
		};

		template <typename IntVector, std::size_t Num_>
		using take_first = typename take_first_impl<IntVector, Num_, Num_ == 0>::type;


		template <typename, std::size_t, bool>
		struct take_last_impl;

		template <IntType First, IntType... Others, std::size_t Num_>
		struct take_last_impl<vector_c<IntType, First, Others...>, Num_, false>
		{
			using type = typename take_last_impl<vector_c<IntType, Others...>, Num_ - 1, (Num_ - 1) == 0>::type;
		};

		template <IntType... Chars_, std::size_t Num_>
		struct take_last_impl<vector_c<IntType, Chars_...>, Num_, true>
		{
			using type = vector_c<IntType, Chars_...>;
		};

		template <typename IntVector, std::size_t Num_>
		using take_last = typename take_last_impl<IntVector, Num_, Num_ == 0>::type;
	public:
		using type = take_first<take_last<vector_c<IntType, Items...>, From>, Num>;
};


/**
 * @brief Helper for `take`.
 */
template <typename IntType, IntType Head, typename Tail, std::size_t From, std::size_t Num>
class take_impl<list_node_c<IntType, Head, Tail>, integer_c<std::size_t, From>, integer_c<std::size_t, Num>>
{
	private:
		template <typename, std::size_t, bool>
		struct take_first_impl;

		template <IntType Head_, typename Tail_, std::size_t Num_>
		struct take_first_impl<list_node_c<IntType, Head_, Tail_>, Num_, false>
		{
			using type = list_node_c<
				IntType, Head_,
				typename take_first_impl<Tail_, Num_ - 1, (Num_ - 1) == 0>::type
			>;
		};

		template <IntType Head_, typename Tail_, std::size_t Num_>
		struct take_first_impl<list_node_c<IntType, Head_, Tail_>, Num_, true>
		{
			using type = null_type;
		};

		template <std::size_t Num_>
		struct take_first_impl<null_type, Num_, true>
		{
			using type = null_type;
		};

		template <typename IntList, std::size_t Num_>
		using take_first = typename take_first_impl<IntList, Num_, Num_ == 0>::type;


		template <typename, std::size_t, bool>
		struct take_last_impl;

		template <IntType Head_, typename Tail_, std::size_t Num_>
		struct take_last_impl<list_node_c<IntType, Head_, Tail_>, Num_, false>
		{
			using type = typename take_last_impl<Tail_, Num_ - 1, (Num_ - 1) == 0>::type;
		};

		template <IntType Head_, typename Tail_, std::size_t Num_>
		struct take_last_impl<list_node_c<IntType, Head_, Tail_>, Num_, true>
		{
			using type = list_node_c<IntType, Head_, Tail_>;
		};

		template <std::size_t Num_>
		struct take_last_impl<null_type, Num_, true>
		{
			using type = null_type;
		};

		template <typename IntList, std::size_t Num_>
		using take_last = typename take_last_impl<IntList, Num_, Num_ == 0>::type;
	public:
		using type = take_first<take_last<list_node_c<IntType, Head, Tail>, From>, Num>;
};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup containerops
 * @brief Takes part of a container.
 *
 * Takes part of a container, given the the position of the start and the new
 * container's size.
 *
 * @param Container Any container.
 * @param From      Begin position (a @ref size_c).
 * @param Num       Number of items to take (a @ref size_c).
 */
template <typename Container, typename From, typename Num>
using take = typename take_impl<Container, From, Num>::type;


/**
 * @ingroup containerops
 * @brief Takes part of a container.
 *
 * Takes part of a container, given the the position of the start and the new
 * container's size.
 *
 * @param Container Any container.
 * @param From      Begin position.
 * @param Num       Number of items to take.
 */
template <typename Container, std::size_t From, std::size_t Num>
using take_c = typename take_impl<Container, integer_c<std::size_t, From>, integer_c<std::size_t, Num>>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_TAKE_HPP
