// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file arity_of.hpp
 *
 * @brief Provides the `arity_of` metafunction.
 */


#ifndef CYNODELIC_MULINUM_ARITY_OF_HPP
#define CYNODELIC_MULINUM_ARITY_OF_HPP


#include <cstddef>

#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/detail/get_template_arity.hpp>


namespace cynodelic { namespace mulinum {


/**
 * @ingroup mfuncutils 
 * @brief Arity of a metafunction/template parameter pack.
 *
 * Counts the arity (i.e. the number of arguments) of a metafunction/template
 * type, returning a @ref size_c.
 *
 * NOTE: Since the instances of the underlying counting function are harcoded,
 * it supports template types up to 200 arguments.
 *
 * @param MetaFn The metafunction.
 */
template <template <typename...> class MetaFn>
struct arity_of : integer_c<std::size_t,detail::get_template_arity<MetaFn>()>
{};


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_ARITY_OF_HPP
