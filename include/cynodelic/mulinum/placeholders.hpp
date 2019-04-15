// Copyright (c) 2019 Álvaro Ceballos
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt

/**
 * @file placeholders.hpp
 *
 * @brief Provides placeholders for `bind`.
 */


#ifndef CYNODELIC_MULINUM_PLACEHOLDERS_HPP
#define CYNODELIC_MULINUM_PLACEHOLDERS_HPP


#include <cynodelic/mulinum/config.hpp>
#include <cynodelic/mulinum/arg.hpp>


namespace cynodelic { namespace mulinum {


/**
 * @ingroup mfuncutils
 * @brief Placeholders.
 *
 * Objects used for the unbound arguments in @ref bind. When used, they pass
 * the N-th argument of the `apply` member.
 * These objects are named as `_1`, `_2`, `_3`. ..., `_200`.
 */
namespace placeholders
{
#ifndef DOXYGEN_SHOULD_SKIP_THIS
	using _1   = arg<0>;
	using _2   = arg<1>;
	using _3   = arg<2>;
	using _4   = arg<3>;
	using _5   = arg<4>;
	using _6   = arg<5>;
	using _7   = arg<6>;
	using _8   = arg<7>;
	using _9   = arg<8>;
	using _10  = arg<9>;
	using _11  = arg<10>;
	using _12  = arg<11>;
	using _13  = arg<12>;
	using _14  = arg<13>;
	using _15  = arg<14>;
	using _16  = arg<15>;
	using _17  = arg<16>;
	using _18  = arg<17>;
	using _19  = arg<18>;
	using _20  = arg<19>;
	using _21  = arg<20>;
	using _22  = arg<21>;
	using _23  = arg<22>;
	using _24  = arg<23>;
	using _25  = arg<24>;
	using _26  = arg<25>;
	using _27  = arg<26>;
	using _28  = arg<27>;
	using _29  = arg<28>;
	using _30  = arg<29>;
	using _31  = arg<30>;
	using _32  = arg<31>;
	using _33  = arg<32>;
	using _34  = arg<33>;
	using _35  = arg<34>;
	using _36  = arg<35>;
	using _37  = arg<36>;
	using _38  = arg<37>;
	using _39  = arg<38>;
	using _40  = arg<39>;
	using _41  = arg<40>;
	using _42  = arg<41>;
	using _43  = arg<42>;
	using _44  = arg<43>;
	using _45  = arg<44>;
	using _46  = arg<45>;
	using _47  = arg<46>;
	using _48  = arg<47>;
	using _49  = arg<48>;
	using _50  = arg<49>;
	using _51  = arg<50>;
	using _52  = arg<51>;
	using _53  = arg<52>;
	using _54  = arg<53>;
	using _55  = arg<54>;
	using _56  = arg<55>;
	using _57  = arg<56>;
	using _58  = arg<57>;
	using _59  = arg<58>;
	using _60  = arg<59>;
	using _61  = arg<60>;
	using _62  = arg<61>;
	using _63  = arg<62>;
	using _64  = arg<63>;
	using _65  = arg<64>;
	using _66  = arg<65>;
	using _67  = arg<66>;
	using _68  = arg<67>;
	using _69  = arg<68>;
	using _70  = arg<69>;
	using _71  = arg<70>;
	using _72  = arg<71>;
	using _73  = arg<72>;
	using _74  = arg<73>;
	using _75  = arg<74>;
	using _76  = arg<75>;
	using _77  = arg<76>;
	using _78  = arg<77>;
	using _79  = arg<78>;
	using _80  = arg<79>;
	using _81  = arg<80>;
	using _82  = arg<81>;
	using _83  = arg<82>;
	using _84  = arg<83>;
	using _85  = arg<84>;
	using _86  = arg<85>;
	using _87  = arg<86>;
	using _88  = arg<87>;
	using _89  = arg<88>;
	using _90  = arg<89>;
	using _91  = arg<90>;
	using _92  = arg<91>;
	using _93  = arg<92>;
	using _94  = arg<93>;
	using _95  = arg<94>;
	using _96  = arg<95>;
	using _97  = arg<96>;
	using _98  = arg<97>;
	using _99  = arg<98>;
	using _100 = arg<99>;
	using _101 = arg<100>;
	using _102 = arg<101>;
	using _103 = arg<102>;
	using _104 = arg<103>;
	using _105 = arg<104>;
	using _106 = arg<105>;
	using _107 = arg<106>;
	using _108 = arg<107>;
	using _109 = arg<108>;
	using _110 = arg<109>;
	using _111 = arg<110>;
	using _112 = arg<111>;
	using _113 = arg<112>;
	using _114 = arg<113>;
	using _115 = arg<114>;
	using _116 = arg<115>;
	using _117 = arg<116>;
	using _118 = arg<117>;
	using _119 = arg<118>;
	using _120 = arg<119>;
	using _121 = arg<120>;
	using _122 = arg<121>;
	using _123 = arg<122>;
	using _124 = arg<123>;
	using _125 = arg<124>;
	using _126 = arg<125>;
	using _127 = arg<126>;
	using _128 = arg<127>;
	using _129 = arg<128>;
	using _130 = arg<129>;
	using _131 = arg<130>;
	using _132 = arg<131>;
	using _133 = arg<132>;
	using _134 = arg<133>;
	using _135 = arg<134>;
	using _136 = arg<135>;
	using _137 = arg<136>;
	using _138 = arg<137>;
	using _139 = arg<138>;
	using _140 = arg<139>;
	using _141 = arg<140>;
	using _142 = arg<141>;
	using _143 = arg<142>;
	using _144 = arg<143>;
	using _145 = arg<144>;
	using _146 = arg<145>;
	using _147 = arg<146>;
	using _148 = arg<147>;
	using _149 = arg<148>;
	using _150 = arg<149>;
	using _151 = arg<150>;
	using _152 = arg<151>;
	using _153 = arg<152>;
	using _154 = arg<153>;
	using _155 = arg<154>;
	using _156 = arg<155>;
	using _157 = arg<156>;
	using _158 = arg<157>;
	using _159 = arg<158>;
	using _160 = arg<159>;
	using _161 = arg<160>;
	using _162 = arg<161>;
	using _163 = arg<162>;
	using _164 = arg<163>;
	using _165 = arg<164>;
	using _166 = arg<165>;
	using _167 = arg<166>;
	using _168 = arg<167>;
	using _169 = arg<168>;
	using _170 = arg<169>;
	using _171 = arg<170>;
	using _172 = arg<171>;
	using _173 = arg<172>;
	using _174 = arg<173>;
	using _175 = arg<174>;
	using _176 = arg<175>;
	using _177 = arg<176>;
	using _178 = arg<177>;
	using _179 = arg<178>;
	using _180 = arg<179>;
	using _181 = arg<180>;
	using _182 = arg<181>;
	using _183 = arg<182>;
	using _184 = arg<183>;
	using _185 = arg<184>;
	using _186 = arg<185>;
	using _187 = arg<186>;
	using _188 = arg<187>;
	using _189 = arg<188>;
	using _190 = arg<189>;
	using _191 = arg<190>;
	using _192 = arg<191>;
	using _193 = arg<192>;
	using _194 = arg<193>;
	using _195 = arg<194>;
	using _196 = arg<195>;
	using _197 = arg<196>;
	using _198 = arg<197>;
	using _199 = arg<198>;
	using _200 = arg<199>;
#endif // DOXYGEN_SHOULD_SKIP_THIS
} // end of "placeholders" namespace


}} // end of "cynodelic::mulinum" namespace


#endif // CYNODELIC_MULINUM_PLACEHOLDERS_HPP
