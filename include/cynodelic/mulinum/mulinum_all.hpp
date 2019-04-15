// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file mulinum_all.hpp
 *
 * @brief All headers.
 */


#ifndef CYNODELIC_MULINUM_MULINUM_ALL_HPP
#define CYNODELIC_MULINUM_MULINUM_ALL_HPP


#include <cynodelic/mulinum/config.hpp>

// Type tags
#include <cynodelic/mulinum/tags.hpp>

// Control
#include <cynodelic/mulinum/if.hpp>
#include <cynodelic/mulinum/equals.hpp>
#include <cynodelic/mulinum/not_equals.hpp>

// Arithmetic types
#include <cynodelic/mulinum/integer_c.hpp>
#include <cynodelic/mulinum/rational.hpp>

// Arithmetic operations
#include <cynodelic/mulinum/add.hpp>
#include <cynodelic/mulinum/sub.hpp>
#include <cynodelic/mulinum/mul.hpp>
#include <cynodelic/mulinum/div.hpp>
#include <cynodelic/mulinum/mod.hpp>
#include <cynodelic/mulinum/negate.hpp>
#include <cynodelic/mulinum/inverse.hpp>
#include <cynodelic/mulinum/bit_and.hpp>
#include <cynodelic/mulinum/bit_or.hpp>
#include <cynodelic/mulinum/bit_xor.hpp>
#include <cynodelic/mulinum/bit_not.hpp>
#include <cynodelic/mulinum/logical_and.hpp>
#include <cynodelic/mulinum/logical_or.hpp>
#include <cynodelic/mulinum/logical_not.hpp>

// Arithmetic comparisions
#include <cynodelic/mulinum/less.hpp>
#include <cynodelic/mulinum/less_equal.hpp>
#include <cynodelic/mulinum/greater.hpp>
#include <cynodelic/mulinum/greater_equal.hpp>

// Type containers
#include <cynodelic/mulinum/vector.hpp>
#include <cynodelic/mulinum/null_type.hpp>
#include <cynodelic/mulinum/list.hpp>

// Integer containers
#include <cynodelic/mulinum/string.hpp>
#include <cynodelic/mulinum/vector_c.hpp>
#include <cynodelic/mulinum/list_c.hpp>

// Type traits
#include <cynodelic/mulinum/arithmetic_traits.hpp>
#include <cynodelic/mulinum/arity_of.hpp>
#include <cynodelic/mulinum/is_empty.hpp>
#include <cynodelic/mulinum/is_n_ary_metafunction_object.hpp>
#include <cynodelic/mulinum/is_metafunction_object.hpp>
#include <cynodelic/mulinum/is_placeholder.hpp>
#include <cynodelic/mulinum/members_of.hpp>

// Metafunction objects
#include <cynodelic/mulinum/arg.hpp>
#include <cynodelic/mulinum/identity.hpp>
#include <cynodelic/mulinum/iterate.hpp>
#include <cynodelic/mulinum/lazy.hpp>

// Container operations
#include <cynodelic/mulinum/at.hpp>
#include <cynodelic/mulinum/cartesian_product.hpp>
#include <cynodelic/mulinum/concat.hpp>
#include <cynodelic/mulinum/fill.hpp>
#include <cynodelic/mulinum/find.hpp>
#include <cynodelic/mulinum/fold_left.hpp>
#include <cynodelic/mulinum/fold_right.hpp>
#include <cynodelic/mulinum/iota.hpp>
#include <cynodelic/mulinum/insert.hpp>
#include <cynodelic/mulinum/is_empty.hpp>
#include <cynodelic/mulinum/lexicographical_compare.hpp>
#include <cynodelic/mulinum/make_from_tag.hpp>
#include <cynodelic/mulinum/make_from_tag_c.hpp>
#include <cynodelic/mulinum/push_back.hpp>
#include <cynodelic/mulinum/push_front.hpp>
#include <cynodelic/mulinum/transform.hpp>
#include <cynodelic/mulinum/remove.hpp>
#include <cynodelic/mulinum/remove_if.hpp>
#include <cynodelic/mulinum/rename.hpp>
#include <cynodelic/mulinum/replace.hpp>
#include <cynodelic/mulinum/reverse.hpp>
#include <cynodelic/mulinum/sort.hpp>
#include <cynodelic/mulinum/take.hpp>

// Other metafunctions
#include <cynodelic/mulinum/max.hpp>
#include <cynodelic/mulinum/min.hpp>
#include <cynodelic/mulinum/simplified_form.hpp>

// String operations
#include <cynodelic/mulinum/split.hpp>
#include <cynodelic/mulinum/string_to_int.hpp>
#include <cynodelic/mulinum/to_string.hpp>

// Metafunction utilities
#include <cynodelic/mulinum/apply.hpp>
#include <cynodelic/mulinum/bind.hpp>
#include <cynodelic/mulinum/curry.hpp>
#include <cynodelic/mulinum/placeholders.hpp>

// Experimental
#include <cynodelic/mulinum/experimental/olog_n_iota.hpp>
#include <cynodelic/mulinum/experimental/sqrt.hpp>
#include <cynodelic/mulinum/experimental/sqrt_c.hpp>


#endif // CYNODELIC_MULINUM_MULINUM_ALL_HPP
