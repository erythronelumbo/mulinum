// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file rename.hpp
 *
 * @brief Defines the `rename` metafunction.
 */


#ifndef CYNODELIC_MULINUM_RENAME_HPP
#define CYNODELIC_MULINUM_RENAME_HPP


#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/null_type.hpp>
#include <cynodelic/mulinum/list.hpp>
#include <cynodelic/mulinum/concat.hpp>


namespace cynodelic { namespace mulinum {


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/**
 * @brief Helper for `rename`.
 */
template <template <typename...> class,typename>
struct rename_impl {};


/**
 * @brief Helper for `rename`.
 */
template <
	template <typename...> class OutContainer,
	template <typename...> class InContainer,
	typename... Items
>
struct rename_impl<OutContainer,InContainer<Items...>>
{
	using type = OutContainer<Items...>;
};


/**
 * @brief Helper for `rename`.
 */
template <
	template <typename...> class OutContainer,
	typename Head,
	typename Tail
>
struct rename_impl<OutContainer,list_node<Head,Tail>>
{
	using type = concat<
		OutContainer<Head>,
		typename rename_impl<OutContainer,Tail>::type
	>;
};


/**
 * @brief Helper for `rename`.
 */
template <
	template <typename...> class OutContainer,
	typename Head
>
struct rename_impl<OutContainer,list_node<Head,null_type>>
{
	using type = OutContainer<Head>;
};

#endif // DOXYGEN_SHOULD_SKIP_THIS


/**
 * @ingroup containerops
 * @brief Renames a type container.
 *
 * Converts a type container (or anything with only type parameters)
 * into another one.
 *
 * @param OutContainer The type of the output container.
 * @param InContainer  The container to convert.
 */
template <template <typename...> class OutContainer,typename InContainer>
using rename = typename rename_impl<OutContainer,InContainer>::type;


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_RENAME_HPP
