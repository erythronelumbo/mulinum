#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstddef>

#include <cynodelic/mulinum/mulinum_all.hpp>


namespace mln = cynodelic::mulinum;

using namespace mln::placeholders;


#ifndef STR_
#define STR_ CYNODELIC_MULINUM_STRING
#endif


using insects = mln::list<
	STR_("Bee"),
	STR_("Mosquito"),
	STR_("Beetle"),
	STR_("Fly"),
	STR_("Wasp"),
	STR_("Cockroach"),
	STR_("Bed bug"),
	STR_("Stick insect"),
	STR_("Bumblebee"),
	STR_("Moth"),
	STR_("Locust"),
	STR_("Flea"),
	STR_("Ladybug"),
	STR_("Butterfly"),
	STR_("Ant"),
	STR_("Dragonfly"),
	STR_("Horsefly"),
	STR_("Mantis"),
	STR_("Earwig"),
	STR_("Louse"),
	STR_("Firefly"),
	STR_("Cricket"),
	STR_("Grasshopper"),
	STR_("Cicada"),
	STR_("Termite"),
	STR_("Leaf insect")
>;


template <typename Lhs,typename Rhs>
using cmp_less = mln::lexicographical_compare<mln::lazy<mln::less>,Lhs,Rhs>;


template <typename Lhs,typename Rhs>
using cmp_greater = mln::lexicographical_compare<mln::lazy<mln::greater>,Lhs,Rhs>;


template <typename>
struct strvec_printer;

template <
	char...  Chars,
	typename Tail
>
struct strvec_printer<mln::list_node<mln::string<Chars...>,Tail>> :
	mln::concat<
		mln::string<'-',' '>,
		mln::string<Chars...>,
		mln::string<'\n'>,
		typename strvec_printer<Tail>::type
	>
{};

template <>
struct strvec_printer<mln::null_type> : mln::string<> {};



using output = mln::concat<
	STR_("A list of some insects:\n"),
	typename strvec_printer<insects>::type,
	STR_("\n"),
	STR_("The same insects, in alphabetical order:\n"),
	typename strvec_printer<mln::sort<insects,mln::bind<mln::lexicographical_compare,mln::lazy<mln::less>,_1,_2>>>::type,
	STR_("\n"),
	STR_("The same insects, in reverse alphabetical order:\n"),
	typename strvec_printer<mln::sort<insects,mln::bind<mln::lexicographical_compare,mln::lazy<mln::greater>,_1,_2>>>::type,
	STR_("\n")
>;


int main()
{
	std::cout << output::c_str();
}
