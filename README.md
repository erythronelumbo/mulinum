# Mulinum

A header-only, template metaprogramming library for C++14.

## Requirements

- A C++14-compatible compiler

## Building and installation

This library is header-only, so no building is necessary for installing it. However, the examples, unit tests and documentation need to be built, using [CMake](http://cmake.org/).

Run `mkdir build && cd build && cmake [options] .. && make` (or your equivalent) for building.

### Building the examples

Use the `-DCYNODELIC_MULINUM_BUILD_EXAMPLES=1` option for building the examples.

### Building and running the tests

Use the `-DCYNODELIC_MULINUM_BUILD_TEST=1` option for building the unit tests.

Run the tests using `make test`.

### Building the documentation

The documentation is generated with [Doxygen](http://www.doxygen.nl/), if avaliable.

Use the `-DCYNODELIC_MULINUM_BUILD_DOC=1` for allowing its generation.

### Installing the library

The installation path is set using the `-DCMAKE_INSTALL_PREFIX=path/to/your/libraries` option.

Run `make install` to install the library, as well as its documentation.

The documentation will be installed in `path/to/your/libraries/doc/cynodelic/mulinum`.

## To-do

- Add more data types (e.g. map)
- Add a functionality for *lambda expressions* if possible

## License
This library is licensed under the Boost Software License.
