// airspy-fmradion
// Software decoder for FM broadcast radio with Airspy
//
// Copyright (C) 2019 Kenji Rikitake, JJ1BDX
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

#ifndef SOFTFM_FILTERPARAMETERS_H
#define SOFTFM_FILTERPARAMETERS_H

#include "SoftFM.h"

// Class for providing filter parameters
// based on pre-calculated tables

// Class declaration

class FilterParameters {
public:
  static const std::vector<IQSample::value_type> lambdaprog_10000khz_div8;
  static const std::vector<IQSample::value_type> lambdaprog_1250khz_div4;
  static const std::vector<IQSample::value_type> jj1bdx_10000khz_div8;
  static const std::vector<IQSample::value_type> jj1bdx_1250khz_div4;
  static const std::vector<IQSample::value_type> jj1bdx_2500khz_div4;
  static const std::vector<IQSample::value_type> jj1bdx_600khz_625khz_div2;

  static const std::vector<SampleVector::value_type> lambdaprog_312_5khz_div6;
  static const std::vector<SampleVector::value_type> jj1bdx_312_5khz_div6;
  static const std::vector<SampleVector::value_type> jj1bdx_58_0333khz_fmaudio;

  static const std::vector<IQSample::value_type> delay_3taps_only_iq;

  static const std::vector<IQSample::value_type> jj1bdx_768kHz_div2;

  static const std::vector<SampleVector::value_type> delay_3taps_only_audio;

  static const std::vector<SampleVector::value_type> jj1bdx_384k_div4;
  static const std::vector<SampleVector::value_type> jj1bdx_96k_div2_fmaudio;

  static const std::vector<IQSample::value_type> jj1bdx_900kHz_div3;

  static const std::vector<SampleVector::value_type> jj1bdx_312_5khz_div4;
  static const std::vector<SampleVector::value_type> jj1bdx_78_125khz_fmaudio;
};

// Values of vectors

const std::vector<IQSample::value_type>
    FilterParameters::lambdaprog_10000khz_div8 = {
        0.000163684682470875, 0.000772584837442848, 0.002021239686872703,
        0.004435627121249832, 0.008375401475660970, 0.014239715819450282,
        0.022188299353843657, 0.032132032467856633, 0.043618498598846187,
        0.055856224488393495, 0.067771123204540540, 0.078156099008024574,
        0.085853232693530845, 0.089952397742173520, 0.089952397742173520,
        0.085853232693530845, 0.078156099008024574, 0.067771123204540540,
        0.055856224488393495, 0.043618498598846187, 0.032132032467856633,
        0.022188299353843657, 0.014239715819450282, 0.008375401475660970,
        0.004435627121249832, 0.002021239686872703, 0.000772584837442848,
        0.000163684682470875};

const std::vector<IQSample::value_type>
    FilterParameters::lambdaprog_1250khz_div4 = {
        0.000167223634636264,  0.000027551101146017,  -0.001378303988768317,
        -0.005408740169442248, -0.012543460485155080, -0.020712088221511341,
        -0.024363124345677958, -0.015648206458168671, 0.011948528295791011,
        0.059000708872984725,  0.117327789318493250,  0.171381314496520470,
        0.204012335784630960,  0.204012335784630960,  0.171381314496520470,
        0.117327789318493250,  0.059000708872984725,  0.011948528295791011,
        -0.015648206458168671, -0.024363124345677958, -0.020712088221511341,
        -0.012543460485155080, -0.005408740169442248, -0.001378303988768317,
        0.000027551101146017,  0.000167223634636264};

const std::vector<IQSample::value_type> FilterParameters::jj1bdx_10000khz_div8 =
    {21.36119551337325360E-6, 64.23297838960968420E-6, 147.4309780416262750E-6,
     281.1816227538553220E-6, 467.3621819016304360E-6, 690.9131117885839330E-6,
     912.6022259135866080E-6, 0.001064905900749416,    0.001053704071445249,
     768.2512232475683050E-6, 100.4505564551687370E-6, -0.001027263006651787,
     -0.002628756941039029,   -0.004621227226671674,   -0.006799707587161473,
     -0.008826817472778139,   -0.010244146961255442,   -0.010509173606462658,
     -0.009056901642605409,   -0.005380658161115998,   878.4386044793103560E-6,
     0.009847415897955569,    0.021358020576746649,    0.034917771825172313,
     0.049725046668614013,    0.064731024805009529,    0.078743538633693072,
     0.090560404362423963,    0.099113808552859561,    0.103604374747559846,
     0.103604374747559846,    0.099113808552859561,    0.090560404362423963,
     0.078743538633693072,    0.064731024805009529,    0.049725046668614013,
     0.034917771825172313,    0.021358020576746649,    0.009847415897955569,
     878.4386044793103560E-6, -0.005380658161115998,   -0.009056901642605409,
     -0.010509173606462658,   -0.010244146961255442,   -0.008826817472778139,
     -0.006799707587161473,   -0.004621227226671674,   -0.002628756941039029,
     -0.001027263006651787,   100.4505564551687370E-6, 768.2512232475683050E-6,
     0.001053704071445249,    0.001064905900749416,    912.6022259135866080E-6,
     690.9131117885839330E-6, 467.3621819016304360E-6, 281.1816227538553220E-6,
     147.4309780416262750E-6, 64.23297838960968420E-6, 21.36119551337325360E-6};

const std::vector<IQSample::value_type> FilterParameters::jj1bdx_1250khz_div4 =
    {-101.2333627967728940E-6, 250.2349833342094310E-6,
     645.7865823358838500E-6,  0.001185594446367747,
     0.001657018240191376,     0.001762857927351076,
     0.001214300532602415,     -121.6619257036877710E-6,
     -0.002078140767210259,    -0.004124032578785443,
     -0.005442547060825374,    -0.005173344260750808,
     -0.002767284054848108,    0.001659610700775450,
     0.007126096001020829,     0.011874315545065586,
     0.013801096578561531,     0.011159999601558538,
     0.003348442989991206,     -0.008501044818753632,
     -0.021379707943018567,    -0.030867727135134644,
     -0.032173069200468529,    -0.021504107543364244,
     0.002609388318050615,     0.038476290316378871,
     0.081205881169622102,     0.123575934759707587,
     0.157631268782022660,     0.176600862047171292,
     0.176600862047171292,     0.157631268782022660,
     0.123575934759707587,     0.081205881169622102,
     0.038476290316378871,     0.002609388318050615,
     -0.021504107543364244,    -0.032173069200468529,
     -0.030867727135134644,    -0.021379707943018567,
     -0.008501044818753632,    0.003348442989991206,
     0.011159999601558538,     0.013801096578561531,
     0.011874315545065586,     0.007126096001020829,
     0.001659610700775450,     -0.002767284054848108,
     -0.005173344260750808,    -0.005442547060825374,
     -0.004124032578785443,    -0.002078140767210259,
     -121.6619257036877710E-6, 0.001214300532602415,
     0.001762857927351076,     0.001657018240191376,
     0.001185594446367747,     645.7865823358838500E-6,
     250.2349833342094310E-6,  -101.2333627967728940E-6};

const std::vector<SampleVector::value_type>
    FilterParameters::jj1bdx_312_5khz_div6 = {
        25.80054878626173220E-6,  53.19138439356930800E-6,
        93.94341652418872000E-6,  137.4568420541721420E-6,
        169.2646452746862450E-6,  170.1197918995168830E-6,
        120.3731788804096250E-6,  6.878460766453898140E-6,
        -169.4350070856139040E-6, -387.1268307956495390E-6,
        -601.9520128968730430E-6, -750.9945347851355560E-6,
        -764.1694200258054930E-6, -582.4066841884884980E-6,
        -179.1367006559430310E-6, 420.3200334844814280E-6,
        0.001127808158433643,     0.001795763137990068,
        0.002238432727721262,     0.002270231316328288,
        0.001755404070146396,     658.5584995804709930E-6,
        -917.3481836964912190E-6, -0.002719126654856985,
        -0.004367409954619228,    -0.005419305236609882,
        -0.005462897158401273,    -0.004227121411698297,
        -0.001682964159551947,    0.001891085255069228,
        0.005903114706431550,     0.009515491121584566,
        0.011785386645285657,     0.011859963864035114,
        0.009192120706559108,     0.003732172131668413,
        -0.003950989874477156,    -0.012657237836959346,
        -0.020670880611145914,    -0.025999624008481784,
        -0.026705066970119724,    -0.021270079736126192,
        -0.008934816873859127,    0.010067313152961412,
        0.034428573152584428,     0.061869380606893967,
        0.089419158024582307,     0.113835495432123027,
        0.132092972947044474,     0.141856849092363069,
        0.141856849092363069,     0.132092972947044474,
        0.113835495432123027,     0.089419158024582307,
        0.061869380606893967,     0.034428573152584428,
        0.010067313152961412,     -0.008934816873859127,
        -0.021270079736126192,    -0.026705066970119724,
        -0.025999624008481784,    -0.020670880611145914,
        -0.012657237836959346,    -0.003950989874477156,
        0.003732172131668413,     0.009192120706559108,
        0.011859963864035114,     0.011785386645285657,
        0.009515491121584566,     0.005903114706431550,
        0.001891085255069228,     -0.001682964159551947,
        -0.004227121411698297,    -0.005462897158401273,
        -0.005419305236609882,    -0.004367409954619228,
        -0.002719126654856985,    -917.3481836964912190E-6,
        658.5584995804709930E-6,  0.001755404070146396,
        0.002270231316328288,     0.002238432727721262,
        0.001795763137990068,     0.001127808158433643,
        420.3200334844814280E-6,  -179.1367006559430310E-6,
        -582.4066841884884980E-6, -764.1694200258054930E-6,
        -750.9945347851355560E-6, -601.9520128968730430E-6,
        -387.1268307956495390E-6, -169.4350070856139040E-6,
        6.878460766453898140E-6,  120.3731788804096250E-6,
        170.1197918995168830E-6,  169.2646452746862450E-6,
        137.4568420541721420E-6,  93.94341652418872000E-6,
        53.19138439356930800E-6,  25.80054878626173220E-6};

const std::vector<IQSample::value_type> FilterParameters::jj1bdx_2500khz_div4 =
    {73.13971847920863920E-6,  -330.0256749275508810E-6,
     -0.001366254055032703,    -0.001626861489273801,
     0.001587549123179624,     0.008158799891784663,
     0.010785383665570344,     -0.001184155301685952,
     -0.027320773353768244,    -0.044177437884306121,
     -0.015145979484122959,    0.076835318664808083,
     0.201612449688249706,     0.292067941973416456,
     0.292067941973416456,     0.201612449688249706,
     0.076835318664808083,     -0.015145979484122959,
     -0.044177437884306121,    -0.027320773353768244,
     -0.001184155301685952,    0.010785383665570344,
     0.008158799891784663,     0.001587549123179624,
     -0.001626861489273801,    -0.001366254055032703,
     -330.0256749275508810E-6, 73.13971847920863920E-6};

const std::vector<IQSample::value_type>
    FilterParameters::jj1bdx_600khz_625khz_div2 = {
        -545.8813707762652710E-6, -0.001311101751774940,
        -570.5045743115042570E-6, 0.002707439630143049,
        0.005088556602326026,     571.7104117595350770E-6,
        -0.009675723888626678,    -0.012280263214089227,
        0.004281126974994384,     0.027126033986305767,
        0.022127191994464213,     -0.024324826580351202,
        -0.067671134553381751,    -0.030835520119447533,
        0.113118917507356836,     0.288438843142435619,
        0.367783020525792148,     0.288438843142435619,
        0.113118917507356836,     -0.030835520119447533,
        -0.067671134553381751,    -0.024324826580351202,
        0.022127191994464213,     0.027126033986305767,
        0.004281126974994384,     -0.012280263214089227,
        -0.009675723888626678,    571.7104117595350770E-6,
        0.005088556602326026,     0.002707439630143049,
        -570.5045743115042570E-6, -0.001311101751774940,
        -545.8813707762652710E-6};

const std::vector<SampleVector::value_type>
    FilterParameters::lambdaprog_312_5khz_div6 = {25.80054878626173220E-6,
                                                  53.19138439356930800E-6,
                                                  93.94341652418872000E-6,
                                                  137.4568420541721420E-6,
                                                  169.2646452746862450E-6,
                                                  170.1197918995168830E-6,
                                                  120.3731788804096250E-6,
                                                  6.878460766453898140E-6,
                                                  -169.4350070856139040E-6,
                                                  -387.1268307956495390E-6,
                                                  -601.9520128968730430E-6,
                                                  -750.9945347851355560E-6,
                                                  -764.1694200258054930E-6,
                                                  -582.4066841884884980E-6,
                                                  -179.1367006559430310E-6,
                                                  420.3200334844814280E-6,
                                                  0.001127808158433643,
                                                  0.001795763137990068,
                                                  0.002238432727721262,
                                                  0.002270231316328288,
                                                  0.001755404070146396,
                                                  658.5584995804709930E-6,
                                                  -917.3481836964912190E-6,
                                                  -0.002719126654856985,
                                                  -0.004367409954619228,
                                                  -0.005419305236609882,
                                                  -0.005462897158401273,
                                                  -0.004227121411698297,
                                                  -0.001682964159551947,
                                                  0.001891085255069228,
                                                  0.005903114706431550,
                                                  0.009515491121584566,
                                                  0.011785386645285657,
                                                  0.011859963864035114,
                                                  0.009192120706559108,
                                                  0.003732172131668413,
                                                  -0.003950989874477156,
                                                  -0.012657237836959346,
                                                  -0.020670880611145914,
                                                  -0.025999624008481784,
                                                  -0.026705066970119724,
                                                  -0.021270079736126192,
                                                  -0.008934816873859127,
                                                  0.010067313152961412,
                                                  0.034428573152584428,
                                                  0.061869380606893967,
                                                  0.089419158024582307,
                                                  0.113835495432123027,
                                                  0.132092972947044474,
                                                  0.141856849092363069,
                                                  0.141856849092363069,
                                                  0.132092972947044474,
                                                  0.113835495432123027,
                                                  0.089419158024582307,
                                                  0.061869380606893967,
                                                  0.034428573152584428,
                                                  0.010067313152961412,
                                                  -0.008934816873859127,
                                                  -0.021270079736126192,
                                                  -0.026705066970119724,
                                                  -0.025999624008481784,
                                                  -0.020670880611145914,
                                                  -0.012657237836959346,
                                                  -0.003950989874477156,
                                                  0.003732172131668413,
                                                  0.009192120706559108,
                                                  0.011859963864035114,
                                                  0.011785386645285657,
                                                  0.009515491121584566,
                                                  0.005903114706431550,
                                                  0.001891085255069228,
                                                  -0.001682964159551947,
                                                  -0.004227121411698297,
                                                  -0.005462897158401273,
                                                  -0.005419305236609882,
                                                  -0.004367409954619228,
                                                  -0.002719126654856985,
                                                  -917.3481836964912190E-6,
                                                  658.5584995804709930E-6,
                                                  0.001755404070146396,
                                                  0.002270231316328288,
                                                  0.002238432727721262,
                                                  0.001795763137990068,
                                                  0.001127808158433643,
                                                  420.3200334844814280E-6,
                                                  -179.1367006559430310E-6,
                                                  -582.4066841884884980E-6,
                                                  -764.1694200258054930E-6,
                                                  -750.9945347851355560E-6,
                                                  -601.9520128968730430E-6,
                                                  -387.1268307956495390E-6,
                                                  -169.4350070856139040E-6,
                                                  6.878460766453898140E-6,
                                                  120.3731788804096250E-6,
                                                  170.1197918995168830E-6,
                                                  169.2646452746862450E-6,
                                                  137.4568420541721420E-6,
                                                  93.94341652418872000E-6,
                                                  53.19138439356930800E-6,
                                                  25.80054878626173220E-6

};

const std::vector<SampleVector::value_type>
    FilterParameters::jj1bdx_58_0333khz_fmaudio = {
        -13.31754159381210560E-9, -177.5949964784599900E-9,
        7.669831800277871810E-9,  646.2335973456805500E-9,
        -714.4506753895029760E-9, -1.394210244567530840E-6,
        3.592505579152616590E-6,  197.2489860228590430E-9,
        -9.527541431816736410E-6, 9.029105391290764620E-6,
        13.26185828230945600E-6,  -32.98059924436763170E-6,
        3.440829620914961140E-6,  64.52846867036866740E-6,
        -67.56000514013605600E-6, -61.41500869262735310E-6,
        183.1417046357905750E-6,  -55.32874171295988220E-6,
        -275.7075732134916850E-6, 343.7092958790793200E-6,
        162.9564748994272350E-6,  -716.9736356641785730E-6,
        362.3954292082081000E-6,  836.0471726549128560E-6,
        -0.001295699101059630,    -185.4935717208842050E-6,
        0.002142264881121079,     -0.001540238523376498,
        -0.001889246765937533,    0.003854400017685209,
        -478.6147413092352280E-6, -0.005146311733250608,
        0.004953617945377139,     0.003170001306860060,
        -0.009556120347250415,    0.003449252933089842,
        0.010402313758557458,     -0.013296402686120536,
        -0.003418512107479527,    0.021136427961724779,
        -0.012689876382642761,    -0.018932980190958244,
        0.033691999070060916,     -0.001246126066494434,
        -0.048771574413898275,    0.045020395986346502,
        0.039480961575012991,     -0.124119692822918876,
        0.051778222820273834,     0.522725789877607649,
        0.522725789877607649,     0.051778222820273834,
        -0.124119692822918876,    0.039480961575012991,
        0.045020395986346502,     -0.048771574413898275,
        -0.001246126066494434,    0.033691999070060916,
        -0.018932980190958244,    -0.012689876382642761,
        0.021136427961724779,     -0.003418512107479527,
        -0.013296402686120536,    0.010402313758557458,
        0.003449252933089842,     -0.009556120347250415,
        0.003170001306860060,     0.004953617945377139,
        -0.005146311733250608,    -478.6147413092352280E-6,
        0.003854400017685209,     -0.001889246765937533,
        -0.001540238523376498,    0.002142264881121079,
        -185.4935717208842050E-6, -0.001295699101059630,
        836.0471726549128560E-6,  362.3954292082081000E-6,
        -716.9736356641785730E-6, 162.9564748994272350E-6,
        343.7092958790793200E-6,  -275.7075732134916850E-6,
        -55.32874171295988220E-6, 183.1417046357905750E-6,
        -61.41500869262735310E-6, -67.56000514013605600E-6,
        64.52846867036866740E-6,  3.440829620914961140E-6,
        -32.98059924436763170E-6, 13.26185828230945600E-6,
        9.029105391290764620E-6,  -9.527541431816736410E-6,
        197.2489860228590430E-9,  3.592505579152616590E-6,
        -1.394210244567530840E-6, -714.4506753895029760E-9,
        646.2335973456805500E-9,  7.669831800277871810E-9,
        -177.5949964784599900E-9, -13.31754159381210560E-9};

const std::vector<IQSample::value_type> FilterParameters::delay_3taps_only_iq =
    {0.0, 1.0, 0.0};

const std::vector<IQSample::value_type> FilterParameters::jj1bdx_768kHz_div2 = {
    -3.558290672228291e-05, -5.2400600880821804e-05, -8.264470260109024e-06,
    0.0001319488967976869,  0.00030292879525026814,  0.0003292611072446239,
    4.269922464392602e-05,  -0.0005135466115315335,  -0.0009708260439151363,
    -0.0008028192823307603, 0.00022838677400879363,  0.001654497370048719,
    0.002359599123367083,   0.001311646325161152,    -0.001414320102702467,
    -0.004170675505690288,  -0.004528360775658147,   -0.001135562488865618,
    0.004618841131022718,   0.008723764391554305,    0.007029580952978634,
    -0.001212907733348666,  -0.01145955850661641,    -0.015827175144708938,
    -0.008543086647041178,  0.00851043943486342,     0.024688870848976634,
    0.026208721810747584,   0.0061243185160818,      -0.0277165794055028,
    -0.0531903374617619,    -0.04463205701506304,    0.011359820670372268,
    0.10462473222819393,    0.2026825239237519,      0.26538456415816425,
    0.26538456415816425,    0.2026825239237519,      0.10462473222819393,
    0.011359820670372268,   -0.04463205701506304,    -0.0531903374617619,
    -0.0277165794055028,    0.0061243185160818,      0.026208721810747584,
    0.024688870848976634,   0.00851043943486342,     -0.008543086647041178,
    -0.015827175144708938,  -0.01145955850661641,    -0.001212907733348666,
    0.007029580952978634,   0.008723764391554305,    0.004618841131022718,
    -0.001135562488865618,  -0.004528360775658147,   -0.004170675505690288,
    -0.001414320102702467,  0.001311646325161152,    0.002359599123367083,
    0.001654497370048719,   0.00022838677400879363,  -0.0008028192823307603,
    -0.0009708260439151363, -0.0005135466115315335,  4.269922464392602e-05,
    0.0003292611072446239,  0.00030292879525026814,  0.0001319488967976869,
    -8.264470260109024e-06, -5.2400600880821804e-05, -3.558290672228291e-05};

const std::vector<SampleVector::value_type>
    FilterParameters::delay_3taps_only_audio = {0.0, 1.0, 0.0};

const std::vector<SampleVector::value_type> FilterParameters::jj1bdx_384k_div4 =
    {14.52947577785836590E-6,  95.20739719824624100E-6,
     214.4850143846749120E-6,  382.7608452902745170E-6,
     535.5797357801019420E-6,  577.3087372703312210E-6,
     390.1287377444069190E-6,  -114.5505466091317000E-6,
     -933.6065065446027800E-6, -0.001917037040648593,
     -0.002752241805831188,    -0.003014084368492198,
     -0.002289244969761553,    -353.7762005491940730E-6,
     0.002648511973508020,     0.006099899616750696,
     0.008944728872552828,     0.009905883873533625,
     0.007863588992941702,     0.002312676637895708,
     -0.006237931695418458,    -0.016074958765079868,
     -0.024417582532003029,    -0.027916246416227537,
     -0.023438500360446604,    -0.008961437656866217,
     0.015672652571522762,     0.048376313555821851,
     0.084969832010171720,     0.119886798568872466,
     0.147294655982957268,     0.162364006920025283,
     0.162364006920025283,     0.147294655982957268,
     0.119886798568872466,     0.084969832010171720,
     0.048376313555821851,     0.015672652571522762,
     -0.008961437656866217,    -0.023438500360446604,
     -0.027916246416227537,    -0.024417582532003029,
     -0.016074958765079868,    -0.006237931695418458,
     0.002312676637895708,     0.007863588992941702,
     0.009905883873533625,     0.008944728872552828,
     0.006099899616750696,     0.002648511973508020,
     -353.7762005491940730E-6, -0.002289244969761553,
     -0.003014084368492198,    -0.002752241805831188,
     -0.001917037040648593,    -933.6065065446027800E-6,
     -114.5505466091317000E-6, 390.1287377444069190E-6,
     577.3087372703312210E-6,  535.5797357801019420E-6,
     382.7608452902745170E-6,  214.4850143846749120E-6,
     95.20739719824624100E-6,  14.52947577785836590E-6};

const std::vector<SampleVector::value_type>
    FilterParameters::jj1bdx_96k_div2_fmaudio = {
        22.65350511944246750E-6,  -5.725703324882768010E-6,
        -71.35121973320370610E-6, -128.0209074407509040E-6,
        -87.80136969981688820E-6, 62.32477061894137900E-6,
        192.2878778979380740E-6,  128.0024258430840690E-6,
        -133.2103535366942140E-6, -336.5189766317962490E-6,
        -193.5919958690212750E-6, 250.8690534304952000E-6,
        544.1852338341574300E-6,  258.3917798970840070E-6,
        -448.2664655149519600E-6, -829.0314938014090560E-6,
        -302.2398981566634580E-6, 758.6140683428509420E-6,
        0.001198235941305315,     293.1596154294060170E-6,
        -0.001220251098823188,    -0.001650954385898930,
        -186.1498376669653110E-6, 0.001874792023629356,
        0.002174880002253524,     -78.20260917703814130E-6,
        -0.002764591247121571,    -0.002742325050530087,
        575.2442989102069080E-6,  0.003931105731799281,
        0.003307460341749164,     -0.001397493159903802,
        -0.005413158738939785,    -0.003802246262787485,
        0.002659000716172048,     0.007248711748553124,
        0.004132585464388777,     -0.004504156088876310,
        -0.009480551743476997,    -0.004170036568808575,
        0.007129924759425904,     0.012172360518096385,
        0.003734471566039598,     -0.010837187505786373,
        -0.015446045211741213,    -0.002551074508710326,
        0.016157420415095859,     0.019573207818830766,
        131.0909609931179890E-6,  -0.024205577191885028,
        -0.025238243988766569,    0.004610738752416145,
        0.037885654857815983,     0.034519165627077207,
        -0.015010662050859222,    -0.067922292047558369,
        -0.056884617972742989,    0.050260188057771486,
        0.211255215732334550,     0.330861968555346442,
        0.330861968555346442,     0.211255215732334550,
        0.050260188057771486,     -0.056884617972742989,
        -0.067922292047558369,    -0.015010662050859222,
        0.034519165627077207,     0.037885654857815983,
        0.004610738752416145,     -0.025238243988766569,
        -0.024205577191885028,    131.0909609931179890E-6,
        0.019573207818830766,     0.016157420415095859,
        -0.002551074508710326,    -0.015446045211741213,
        -0.010837187505786373,    0.003734471566039598,
        0.012172360518096385,     0.007129924759425904,
        -0.004170036568808575,    -0.009480551743476997,
        -0.004504156088876310,    0.004132585464388777,
        0.007248711748553124,     0.002659000716172048,
        -0.003802246262787485,    -0.005413158738939785,
        -0.001397493159903802,    0.003307460341749164,
        0.003931105731799281,     575.2442989102069080E-6,
        -0.002742325050530087,    -0.002764591247121571,
        -78.20260917703814130E-6, 0.002174880002253524,
        0.001874792023629356,     -186.1498376669653110E-6,
        -0.001650954385898930,    -0.001220251098823188,
        293.1596154294060170E-6,  0.001198235941305315,
        758.6140683428509420E-6,  -302.2398981566634580E-6,
        -829.0314938014090560E-6, -448.2664655149519600E-6,
        258.3917798970840070E-6,  544.1852338341574300E-6,
        250.8690534304952000E-6,  -193.5919958690212750E-6,
        -336.5189766317962490E-6, -133.2103535366942140E-6,
        128.0024258430840690E-6,  192.2878778979380740E-6,
        62.32477061894137900E-6,  -87.80136969981688820E-6,
        -128.0209074407509040E-6, -71.35121973320370610E-6,
        -5.725703324882768010E-6, 22.65350511944246750E-6};

const std::vector<IQSample::value_type> FilterParameters::jj1bdx_900kHz_div3 = {
    -3.9184268183076145e-05, -5.1168040421849314e-05, 3.57183113247969e-06,
    0.00017014317269493606,  0.00039893947955072987,  0.0005133642159239993,
    0.00028096027461201235,  -0.00039799204609540734, -0.001289148688199549,
    -0.001795114443851808,   -0.001237186319811439,   0.0006165034934838744,
    0.003094073672577088,    0.004657357602031685,    0.003656317693859886,
    -0.00045595709602810485, -0.006185075429721498,   -0.010174064133312666,
    -0.008835476715712288,   -0.0008255756903329796,  0.01109115407166714,
    0.020323545145040523,    0.01945424980747426,     0.004884966746798766,
    -0.019342598772685207,   -0.041172593743850475,   -0.04475990104815132,
    -0.017948861389643415,   0.040504601199922996,    0.11794082762769877,
    0.19125262486445285,     0.2357962581895923,      0.2357962581895923,
    0.19125262486445285,     0.11794082762769877,     0.040504601199922996,
    -0.017948861389643415,   -0.04475990104815132,    -0.041172593743850475,
    -0.019342598772685207,   0.004884966746798766,    0.01945424980747426,
    0.020323545145040523,    0.01109115407166714,     -0.0008255756903329796,
    -0.008835476715712288,   -0.010174064133312666,   -0.006185075429721498,
    -0.00045595709602810485, 0.003656317693859886,    0.004657357602031685,
    0.003094073672577088,    0.0006165034934838744,   -0.001237186319811439,
    -0.001795114443851808,   -0.001289148688199549,   -0.00039799204609540734,
    0.00028096027461201235,  0.0005133642159239993,   0.00039893947955072987,
    0.00017014317269493606,  3.57183113247969e-06,    -5.1168040421849314e-05,
    -3.9184268183076145e-05};

const std::vector<SampleVector::value_type>
    FilterParameters::jj1bdx_312_5khz_div4 = {
        2.310273074563419e-05,   2.7765746978454104e-05,
        3.133272450272754e-05,   1.1894754997570198e-05,
        -4.545901108670988e-05,  -0.00014649797036222535,
        -0.00027639519849497054, -0.0003922723643631967,
        -0.00042654838454170833, -0.0003051216722976002,
        1.929422549305301e-05,   0.0005287391988783393,
        0.001111020828309718,    0.001560770757468351,
        0.001622924061224899,    0.001079581928272591,
        -0.00014044758813750116, -0.001866663534299403,
        -0.003653349201954993,   -0.004845439737618339,
        -0.004754000125913957,   -0.002910406277410662,
        0.000674149184086274,    0.005341696272244652,
        0.009806364148937347,    0.012409127078679779,
        0.011586627365289695,    0.006448913621343515,
        -0.002703081701624913,   -0.014108166173172464,
        -0.024668903748536905,   -0.030514002737773854,
        -0.027911994272833127,   -0.014323141360369114,
        0.010697935339454267,    0.04503086163503215,
        0.08413582225617382,     0.1218429892837425,
        0.15162670338839906,     0.16805741271191055,
        0.16805741271191055,     0.15162670338839906,
        0.1218429892837425,      0.08413582225617382,
        0.04503086163503215,     0.010697935339454267,
        -0.014323141360369114,   -0.027911994272833127,
        -0.030514002737773854,   -0.024668903748536905,
        -0.014108166173172464,   -0.002703081701624913,
        0.006448913621343515,    0.011586627365289695,
        0.012409127078679779,    0.009806364148937347,
        0.005341696272244652,    0.000674149184086274,
        -0.002910406277410662,   -0.004754000125913957,
        -0.004845439737618339,   -0.003653349201954993,
        -0.001866663534299403,   -0.00014044758813750116,
        0.001079581928272591,    0.001622924061224899,
        0.001560770757468351,    0.001111020828309718,
        0.0005287391988783393,   1.929422549305301e-05,
        -0.0003051216722976002,  -0.00042654838454170833,
        -0.0003922723643631967,  -0.00027639519849497054,
        -0.00014649797036222535, -4.545901108670988e-05,
        1.1894754997570198e-05,  3.133272450272754e-05,
        2.7765746978454104e-05,  2.310273074563419e-05};

const std::vector<SampleVector::value_type>
    FilterParameters::jj1bdx_78_125khz_fmaudio = {
        3.938263413433272e-06,   8.550290364809104e-06,
        4.196234784908571e-06,   -8.741828296926024e-06,
        -1.2954183902540762e-05, 8.070953429997654e-06,
        2.7308987996860482e-05,  3.915359614121189e-06,
        -4.415794778166355e-05,  -3.267022892543764e-05,
        5.123032895596566e-05,   8.225747094086688e-05,
        -3.273583240805084e-05,  -0.0001440310395560812,
        -3.196951790887907e-05,  0.00019673294781308277,
        0.0001544608069204154,   -0.00020069129641051334,
        -0.00032949453450751664, 0.00010872539920927878,
        0.000518993400126341,    0.00012196332497835705,
        -0.0006502288333945616,  -0.0005027844187415905,
        0.0006197326480650718,   0.0009914896465127653,
        -0.0003202662796628332,  -0.001471884296269645,
        -0.00032149276563777474, 0.001757734356788909,
        0.001294017501100365,    -0.001620487142874808,
        -0.002460287999821805,   0.0008508931467448506,
        0.003538022090762006,    0.0006606041176365836,
        -0.004123583274776637,   -0.002836840334007854,
        0.003763528856664779,    0.005352101077401104,
        -0.002074016131799246,   -0.00761917436142613,
        -0.001117226584753118,   0.008846476234444737,
        0.005633189834315671,    -0.008168483276796725,
        -0.010857208694854298,   0.004831816622277339,
        0.01571511780379823,     0.001600931743316104,
        -0.018740405282225335,   -0.01107868715076026,
        0.01818858460891535,     0.022972441784513634,
        -0.012099001970019964,   -0.03610272457112327,
        -0.001975577723108436,   0.04889492553096149,
        0.028575170566483146,    -0.05963835450733642,
        -0.08328875467355532,    0.06679819994486572,
        0.31039469201128944,     0.4306885781975847,
        0.31039469201128944,     0.06679819994486572,
        -0.08328875467355532,    -0.05963835450733642,
        0.028575170566483146,    0.04889492553096149,
        -0.001975577723108436,   -0.03610272457112327,
        -0.012099001970019964,   0.022972441784513634,
        0.01818858460891535,     -0.01107868715076026,
        -0.018740405282225335,   0.001600931743316104,
        0.01571511780379823,     0.004831816622277339,
        -0.010857208694854298,   -0.008168483276796725,
        0.005633189834315671,    0.008846476234444737,
        -0.001117226584753118,   -0.00761917436142613,
        -0.002074016131799246,   0.005352101077401104,
        0.003763528856664779,    -0.002836840334007854,
        -0.004123583274776637,   0.0006606041176365836,
        0.003538022090762006,    0.0008508931467448506,
        -0.002460287999821805,   -0.001620487142874808,
        0.001294017501100365,    0.001757734356788909,
        -0.00032149276563777474, -0.001471884296269645,
        -0.0003202662796628332,  0.0009914896465127653,
        0.0006197326480650718,   -0.0005027844187415905,
        -0.0006502288333945616,  0.00012196332497835705,
        0.000518993400126341,    0.00010872539920927878,
        -0.00032949453450751664, -0.00020069129641051334,
        0.0001544608069204154,   0.00019673294781308277,
        -3.196951790887907e-05,  -0.0001440310395560812,
        -3.273583240805084e-05,  8.225747094086688e-05,
        5.123032895596566e-05,   -3.267022892543764e-05,
        -4.415794778166355e-05,  3.915359614121189e-06,
        2.7308987996860482e-05,  8.070953429997654e-06,
        -1.2954183902540762e-05, -8.741828296926024e-06,
        4.196234784908571e-06,   8.550290364809104e-06,
        3.938263413433272e-06};

#endif // SOFTFM_EQPARAMETERS_H
