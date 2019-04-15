// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

#include <iostream>
#include <cstdlib>
#include <cstdint>
#include <cstddef>

#include <cynodelic/mulinum/mulinum_all.hpp>

#include "tester.hpp"


namespace mln = cynodelic::mulinum;
namespace tst = cynodelic::tester;


template <typename T1,typename T2>
struct my_pair {};


template <typename...>
struct dummy {};


struct my_mfun_obj
{
	template <typename X>
	struct apply
	{
		using type = my_pair<X,X>;
	};
};


struct my_comparator
{
	template <typename Lhs,typename Rhs>
	struct apply : mln::bool_c<(sizeof(Lhs) < sizeof(Rhs))> {};
};


struct my_functor
{
	template <typename X>
	struct apply
	{
		using type = mln::vector<X,X>;
	};
};


template <typename Func,typename... Args>
using fcall = typename Func::template apply<Args...>::type;


#include "control.hpp"
#include "arithmetic_operations.hpp"
#include "make_from_tag.hpp"
#include "string_operations.hpp"
#include "type_container_operations.hpp"
#include "integer_container_operations.hpp"
#include "metafunction_objects.hpp"
#include "metafunction_utils.hpp"
#include "experimental.hpp"
