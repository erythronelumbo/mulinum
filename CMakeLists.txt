# Copyright (c) 2019 Álvaro Ceballos
# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt


cmake_minimum_required(VERSION 3.11)


set(detail_header_files
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/detail/bind_impl.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/detail/cartesian_product_helpers.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/detail/dummy.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/detail/enable_if.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/detail/get_template_arity.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/detail/integer_traits.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/detail/list_concat_helper.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/detail/list_c_concat_helper.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/experimental/detail/olog_n_iota_helpers.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/preprocessor/detail/pp_string_helper.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/detail/remove_zeroes.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/detail/sort_merge.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/detail/special_functions.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/detail/split_helpers.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/detail/string_to_int_helpers.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/detail/vector_helpers.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/detail/void_t.hpp
)


set(header_files
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/add.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/apply.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/arg.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/arithmetic_traits.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/arity_of.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/at.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/bind.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/bind_fwd.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/bit_and.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/bit_not.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/bit_or.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/bit_xor.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/cartesian_product.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/concat.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/config.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/curry.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/div.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/equals.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/fill.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/find.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/fold_left.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/fold_right.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/greater.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/greater_equal.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/identity.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/if.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/insert.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/integer_c.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/inverse.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/iota.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/is_empty.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/is_metafunction_object.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/is_n_ary_metafunction_object.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/is_placeholder.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/iterate.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/lazy.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/less.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/less_equal.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/lexicographical_compare.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/list.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/list_c.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/logical_and.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/logical_not.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/logical_or.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/make_from_tag.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/make_from_tag_c.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/max.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/members_of.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/min.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/mod.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/mul.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/mulinum_all.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/negate.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/not_equals.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/null_type.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/placeholders.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/push_back.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/push_front.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/rational.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/remove.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/remove_if.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/rename.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/replace.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/reverse.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/simplified_form.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/sort.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/split.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/string.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/string_to_int.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/sub.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/tags.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/tag_traits.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/take.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/to_string.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/transform.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/vector.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/vector_c.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/experimental/olog_n_iota.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/experimental/sqrt.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/experimental/sqrt_c.hpp
	${PROJECT_SOURCE_DIR}/include/cynodelic/mulinum/preprocessor/pp_string.hpp
)


# Gets the version
file(READ include/cynodelic/mulinum/config.hpp _ver_impl)

string(REGEX MATCH "#define CYNODELIC_MULINUM_VERSION_MAJOR ([0-9]+)(.*)" _ ${_ver_impl})
set(cynodelic_mulinum_ver_major ${CMAKE_MATCH_1})

string(REGEX MATCH "#define CYNODELIC_MULINUM_VERSION_MINOR ([0-9]+)(.*)" _ ${_ver_impl})
set(cynodelic_mulinum_ver_minor ${CMAKE_MATCH_1})

string(REGEX MATCH "#define CYNODELIC_MULINUM_VERSION_PATCH ([0-9]+)(.*)" _ ${_ver_impl})
set(cynodelic_mulinum_ver_patch ${CMAKE_MATCH_1})

set(cynodelic_mulinum_ver_string "${cynodelic_mulinum_ver_major}.${cynodelic_mulinum_ver_minor}.${cynodelic_mulinum_ver_patch}")

message("Cynodelic::Mulinum, version ${cynodelic_mulinum_ver_string}")


# Project name and version
project(cynodelic_mulinum VERSION ${cynodelic_mulinum_ver_string} LANGUAGES CXX)


# Options
option(CYNODELIC_MULINUM_BUILD_EXAMPLES "Builds the examples" OFF)
option(CYNODELIC_MULINUM_BUILD_DOC "Builds the corresponding documentation" OFF)
option(CYNODELIC_MULINUM_BUILD_TEST "Builds the unit tests" ON)
set(CMAKE_CXX_STANDARD 14)


if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W3")
elseif(CMAKE_CXX_COMPILER_ID MATCHES "GNU" OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")
endif()


# Library operations
add_library(mulinum INTERFACE)
target_sources(mulinum INTERFACE $<BUILD_INTERFACE:${detail_header_files} ${header_files}>)
target_include_directories(mulinum INTERFACE $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>)

install(DIRECTORY "${PROJECT_SOURCE_DIR}/include/cynodelic" DESTINATION include)


# Builds unit tests
if (CYNODELIC_MULINUM_BUILD_TEST)
	enable_testing()
	add_subdirectory(test)
endif()


# Builds examples
if (CYNODELIC_MULINUM_BUILD_EXAMPLES)
	add_subdirectory(example)
endif()


# Builds documentation
if (CYNODELIC_MULINUM_BUILD_DOC)
	add_subdirectory(doc)
endif()
