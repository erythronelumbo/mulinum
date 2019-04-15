# Copyright (c) 2019 Álvaro Ceballos
# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt


set(example_names
	alphabetical_order
	bind
	cartesian_product
	curry
	fibonacci_sequence
	folding
	transform
)

foreach(example_nm ${example_names})
	add_executable(${example_nm} ${example_nm}.cpp)
	target_include_directories(${example_nm} PUBLIC ${PROJECT_SOURCE_DIR}/include ${PROJECT_BINARY_DIR}/include ${image_libs_libraries})
endforeach()
