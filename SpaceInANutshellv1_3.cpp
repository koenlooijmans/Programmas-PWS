#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{

/*              Version 1.3.

                WELCOME USER!

                You can here enter the constants, values, positions, etc. for your simulation.
                Please make sure to stay within the "editing area" and to keep strictly to the guidelines.
                This means that you may edit as you wish in the section bordered with "GREEN ZONE".
                Furthermore, you may edit as you wish in the section "GRAY ZONE", however, this is ill-advised.
                In closing, you do have the privilige of editing the section "RED ZONE", this being HIGHLY bold and rarely necessary.

                Gratias tibi agemus.
                Authors:	Rens Christiaan Blaauwendraad.
				Koen Johannes Amadeo Looijmans.

                PS: When finished you can compile this file (SpaceInANutShell.cpp) as a C++ file and run it:
                NB: Make sure to place the file in a separate folder, as it will create the results in the same file, which may be a great lot.

                LINUX:      1. Open the terminal and move to the right directory using the 'cd' command.
                            2. Run the command: g++ SpaceInANutShell.cpp -o 'SpaceCompiled -std=c++11'.
                            3. Run the command: './SpaceCompiled'.
                            4. You are now in the UI of the simulation, follow further directions from your terminal.

                MAC-OS:     1. Open the terminal and move to the right directory using the 'cd' command.
                            2. Run the command: 'g++ SpaceInANutShell.cpp -o SpaceCompiled -std=c++11'.
                            3. Run the command: './SpaceCompiled'.
                            4. You are now in the UI of the simulation, follow further directions from your terminal.

                WINDOWS:    1. Download a compiler and run this file. More instructions may follow in later versions
                            2. You are now in the UI of the simulation, follow further directions from the compilers terminal.
                */

                /*








                START OF GREEN ZONE












                */








                /*Foremost, you are able to change/add/remove planets and comets from the list below,
                provided that you use that exact order in the lists following after. */

                int amountOfObjects = 9; /*First please change this value to the amount of objects you will be using.*/

                string planets[amountOfObjects] = {
                        "sun",              //name star 1.
                        "jupiter",          //name planet 1.
                        "earth",            //name planet 2.
                        "mars",             //name planet 3.
                        "mercury",          //name planet 4.
                        "saturn",           //name planet 5.
                        "venus",            //name planet 6.
                        "uranus",           //name planet 7.
                        "neptune",          //name planet 8.
                        //"halley"            //name comet 1.
                        };


                /*Secondly, make sure that each planet and comet has the correct mass in kilograms.
                    NB: You are strongly advised to check the order.

                 */

                long double masses[amountOfObjects] =   {
                                            1.988544e30,        //mass star 1.
                                            3.79626e27,         //mass planet 1.
                                            5.97219e24,         //mass planet 2.
                                            6.4185e23,          //mass planet 3.
                                            3.302e23,           //mass planet 4.
                                            5.68319e26,         //mass planet 5.
                                            4.8685e24,          //mass planet 6.
                                            8.68103e25,         //mass planet 7.
                                            1.0241e26,          //mass planet 8.
                                            //2.2e14              //mass comet 1.
                                            };

                /*You may now enter the starting positions and velocities for the planets and comets.
                It contains the values of the 15 timesteps prior to the simulation, which will need these values for calculations.
                The positions are in metres, the velocities are in metres/second.
                Please make sure to input exactly as instructed.

                !FOR EACH PLANET!   {
                                    {x-position, y-position, z-position, x-velocity, y-velocity, z-velocity} !for time(seconds) = 0 timeSteps.!
                                    {x-position, y-position, z-position, x-velocity, y-velocity, z-velocity} !for time(seconds) = 1 timeStep.!
                                    {x-position, y-position, z-position, x-velocity, y-velocity, z-velocity} !for time(seconds) = 2 timeSteps.!
                                    {x-position, y-position, z-position, x-velocity, y-velocity, z-velocity} !for time(seconds) = 3 timeSteps.!
                                    {x-position, y-position, z-position, x-velocity, y-velocity, z-velocity} !for time(seconds) = 4 timeSteps.!
                                    {x-position, y-position, z-position, x-velocity, y-velocity, z-velocity} !for time(seconds) = 5 timeSteps.!
                                    {x-position, y-position, z-position, x-velocity, y-velocity, z-velocity} !for time(seconds) = 6 timeSteps.!
                                    {x-position, y-position, z-position, x-velocity, y-velocity, z-velocity} !for time(seconds) = 7 timeSteps.!
                                    {x-position, y-position, z-position, x-velocity, y-velocity, z-velocity} !for time(seconds) = 8 timeSteps.!
                                    {x-position, y-position, z-position, x-velocity, y-velocity, z-velocity} !for time(seconds) = 9 timeSteps.!
                                    {x-position, y-position, z-position, x-velocity, y-velocity, z-velocity} !for time(seconds) = 10 timeSteps.!
                                    {x-position, y-position, z-position, x-velocity, y-velocity, z-velocity} !for time(seconds) = 11 timeSteps.!
                                    {x-position, y-position, z-position, x-velocity, y-velocity, z-velocity} !for time(seconds) = 12 timeSteps.!
                                    {x-position, y-position, z-position, x-velocity, y-velocity, z-velocity} !for time(seconds) = 13 timeSteps.!
                                    {x-position, y-position, z-position, x-velocity, y-velocity, z-velocity} !for time(seconds) = 14 timeSteps.!
                                    },

                                    */

                long double positionsTemplate[amountOfObjects][15][6] ={
                            {
{//star 1
{3.773323153151961E+08, 8.066248607573063E+08, -2.050857342394942E+07, -8.236513812053307E+00, 9.975796105207848E+00, 1.846258640534905E-01},
{3.773239140000733E+08, 8.066350360189923E+08, -2.050838510384777E+07, -8.236653095516432E+00, 9.975697397976262E+00, 1.846292371674423E-01},
{3.773155125428810E+08, 8.066452111800003E+08, -2.050819678030541E+07, -8.236792379646651E+00, 9.975598697005254E+00, 1.846326105221165E-01},
{3.773071109436186E+08, 8.066553862403365E+08, -2.050800845332223E+07, -8.236931664444905E+00, 9.975500002294916E+00, 1.846359841176375E-01},
{3.772987092022853E+08, 8.066655612000071E+08, -2.050782012289780E+07, -8.237070949912119E+00, 9.975401313845340E+00, 1.846393579541250E-01},
{3.772903073188805E+08, 8.066757360590189E+08, -2.050763178903190E+07, -8.237210236049227E+00, 9.975302631656628E+00, 1.846427320317009E-01},
{3.772819052934035E+08, 8.066859108173779E+08, -2.050744345172436E+07, -8.237349522857155E+00, 9.975203955728876E+00, 1.846461063504876E-01},
{3.772735031258537E+08, 8.066960854750907E+08, -2.050725511097483E+07, -8.237488810336830E+00, 9.975105286062191E+00, 1.846494809106059E-01},
{3.772651008162302E+08, 8.067062600321636E+08, -2.050706676678319E+07, -8.237628098489181E+00, 9.975006622656673E+00, 1.846528557121782E-01},
{3.772566983645326E+08, 8.067164344886029E+08, -2.050687841914908E+07, -8.237767387315130E+00, 9.974907965512430E+00, 1.846562307553272E-01},
{3.772482957707599E+08, 8.067266088444153E+08, -2.050669006807241E+07, -8.237906676815603E+00, 9.974809314629575E+00, 1.846596060401727E-01},
{3.772398930349116E+08, 8.067367830996069E+08, -2.050650171355275E+07, -8.238045966991519E+00, 9.974710670008219E+00, 1.846629815668416E-01},
{3.772314901569870E+08, 8.067469572541843E+08, -2.050631335558993E+07, -8.238185257843804E+00, 9.974612031648475E+00, 1.846663573354533E-01},
{3.772230871369854E+08, 8.067571313081536E+08, -2.050612499418372E+07, -8.238324549373377E+00, 9.974513399550463E+00, 1.846697333461314E-01},
{3.772146839749060E+08, 8.067673052615214E+08, -2.050593662933377E+07, -8.238463841581155E+00, 9.974414773714300E+00, 1.846731095989985E-01}
},
{//planet 1
{-7.191620501163782E+11, -3.817000200992812E+11, 1.766850658559488E+10, 5.972666265647950E+03, -1.091946667439710E+04, -8.819675040806496E+01},
{-7.191559579242448E+11, -3.817111578997695E+11, 1.766841662259330E+10, 5.972808387648646E+03, -1.091935802682946E+04, -8.820130130447801E+01},
{-7.191498655874991E+11, -3.817222955900987E+11, 1.766832665492104E+10, 5.972949827763754E+03, -1.091925068134725E+04, -8.820590867362155E+01},
{-7.191437731068109E+11, -3.817334331716124E+11, 1.766823668252030E+10, 5.973090636235258E+03, -1.091914466820322E+04, -8.821057285588108E+01},
{-7.191376804827985E+11, -3.817445706456844E+11, 1.766814670533298E+10, 5.973230864571564E+03, -1.091904001559268E+04, -8.821529410040618E+01},
{-7.191315877160267E+11, -3.817557080137157E+11, 1.766805672330086E+10, 5.973370565461647E+03, -1.091893674961752E+04, -8.822007256505193E+01},
{-7.191254948070060E+11, -3.817668452771332E+11, 1.766796673636547E+10, 5.973509792688930E+03, -1.091883489425112E+04, -8.822490831636065E+01},
{-7.191194017561920E+11, -3.817779824373870E+11, 1.766787674446842E+10, 5.973648601044733E+03, -1.091873447130451E+04, -8.822980132959080E+01},
{-7.191133085639833E+11, -3.817891194959484E+11, 1.766778674755132E+10, 5.973787046241255E+03, -1.091863550039395E+04, -8.823475148880355E+01},
{-7.191072152307218E+11, -3.818002564543075E+11, 1.766769674555600E+10, 5.973925184823949E+03, -1.091853799891022E+04, -8.823975858701916E+01},
{-7.191011217566911E+11, -3.818113933139710E+11, 1.766760673842454E+10, 5.974063074083260E+03, -1.091844198198973E+04, -8.824482232644648E+01},
{-7.190950281421158E+11, -3.818225300764599E+11, 1.766751672609934E+10, 5.974200771965687E+03, -1.091834746248773E+04, -8.824994231879968E+01},
{-7.190889343871614E+11, -3.818336667433072E+11, 1.766742670852324E+10, 5.974338336984107E+03, -1.091825445095370E+04, -8.825511808569697E+01},
{-7.190828404919335E+11, -3.818448033160554E+11, 1.766733668563969E+10, 5.974475828127386E+03, -1.091816295560929E+04, -8.826034905916869E+01},
{-7.190767464564770E+11, -3.818559397962542E+11, 1.766724665739262E+10, 5.974613304769242E+03, -1.091807298232876E+04, -8.826563458225323E+01}
},
{//planet 2
{1.244443302728297E+11, -8.602554305645901E+10, -1.713747404942289E+07, 1.660012665466259E+04, 2.430572862491876E+04, -1.677654419138364E++00},
{1.244612599339345E+11, -8.600074946836509E+10, -1.713918665655330E+07, 1.659528714242881E+04, 2.430914983216558E+04, -1.680397672886969E++00},
{1.244781846583274E+11, -8.597595239112476E+10, -1.714090205841884E+07, 1.659044682749702E+04, 2.431257008834299E+04, -1.683134287665311E++00},
{1.244951044451897E+11, -8.595115182570840E+10, -1.714262024822831E+07, 1.658560571005695E+04, 2.431598939294968E+04, -1.685864237311208E++00},
{1.245120192937031E+11, -8.592634777308685E+10, -1.714434121918678E+07, 1.658076379029963E+04, 2.431940774548434E+04, -1.688587495733529E++00},
{1.245289292030492E+11, -8.590154023423149E+10, -1.714606496444345E+07, 1.657592106841747E+04, 2.432282514544562E+04, -1.691304036901542E++00},
{1.245458341724100E+11, -8.587672921011418E+10, -1.714779147713259E+07, 1.657107754460425E+04, 2.432624159233219E+04, -1.694013834857344E++00},
{1.245627342009676E+11, -8.585191470170733E+10, -1.714952075036243E+07, 1.656623321905507E+04, 2.432965708564269E+04, -1.696716863719416E++00},
{1.245796292879044E+11, -8.582709670998386E+10, -1.715125277721509E+07, 1.656138809196645E+04, 2.433307162487579E+04, -1.699413097666636E++00},
{1.245965194324028E+11, -8.580227523591715E+10, -1.715298755076528E+07, 1.655654216353622E+04, 2.433648520953015E+04, -1.702102510954262E++00},
{1.246134046336456E+11, -8.577745028048114E+10, -1.715472506401315E+07, 1.655169543396360E+04, 2.433989783910445E+04, -1.704785077913940E++00},
{1.246302848908157E+11, -8.575262184465028E+10, -1.715646530998498E+07, 1.654684790344916E+04, 2.434330951309740E+04, -1.707460772939484E++00},
{1.246471602030964E+11, -8.572778992939949E+10, -1.715820828163996E+07, 1.654199957219483E+04, 2.434672023100773E+04, -1.710129570506425E++00},
{1.246640305696708E+11, -8.570295453570427E+10, -1.715995397195965E+07, 1.653715044040392E+04, 2.435012999233421E+04, -1.712791445161344E++00},
{1.246808959897227E+11, -8.567811566454054E+10, -1.716170237383619E+07, 1.653230050828111E+04, 2.435353879657564E+04, -1.715446371516549E++00}
},
{//planet 3
{-1.706805916319282E+11, 1.792657215180936E+11, 7.917258348043613E+09, -1.658549175511716E+04, -1.469024390828470E+04, 9.896891890256221E+01},
{-1.706975080530128E+11, 1.792507366549193E+11, 7.917359260120600E+09, -1.658396132930648E+04, -1.469184072188785E+04, 9.889789858605091E+01},
{-1.707144229129935E+11, 1.792357501630725E+11, 7.917460099756435E+09, -1.658243076691301E+04, -1.469343738368080E+04, 9.882687739455420E+01},
{-1.707313362117310E+11, 1.792207620427084E+11, 7.917560866950244E+09, -1.658090006813359E+04, -1.469503389303161E+04, 9.875585545831811E+01},
{-1.707482479490862E+11, 1.792057722939827E+11, 7.917661561701387E+09, -1.657936923329251E+04, -1.469663024950307E+04, 9.868483295515151E+01},
{-1.707651581249208E+11, 1.791907809170515E+11, 7.917762184009343E+09, -1.657783826279713E+04, -1.469822645283258E+04, 9.861381009064463E+01},
{-1.707820667390964E+11, 1.791757879120710E+11, 7.917862733873934E+09, -1.657630715709846E+04, -1.469982250291213E+04, 9.854278708072695E+01},
{-1.707989737914754E+11, 1.791607932791976E+11, 7.917963211295016E+09, -1.657477591665668E+04, -1.470141839976834E+04, 9.847176413658687E+01},
{-1.708158792819207E+11, 1.791457970185875E+11, 7.918063616272844E+09, -1.657324454191165E+04, -1.470301414354258E+04, 9.840074145194677E+01},
{-1.708327832102954E+11, 1.791307991303968E+11, 7.918163948807731E+09, -1.657171303325829E+04, -1.470460973447124E+04, 9.832971919267486E+01},
{-1.708496855764631E+11, 1.791157996147811E+11, 7.918264208900198E+09, -1.657018139102692E+04, -1.470620517286598E+04, 9.825869748874627E+01},
{-1.708665863802878E+11, 1.791007984718959E+11, 7.918364396550834E+09, -1.656864961546858E+04, -1.470780045909421E+04, 9.818767642857917E+01},
{-1.708834856216334E+11, 1.790857957018961E+11, 7.918464511760332E+09, -1.656711770674530E+04, -1.470939559355955E+04, 9.811665605568720E+01},
{-1.709003833003643E+11, 1.790707913049365E+11, 7.918564554529399E+09, -1.656558566492519E+04, -1.471099057668242E+04, 9.804563636770425E+01},
{-1.709172794163446E+11, 1.790557852811710E+11, 7.918664524858736E+09, -1.656405348998269E+04, -1.471258540888070E+04, 9.797461731775137E+01}
},
{//planet 4
{3.466914082802179E+10, -5.381963617559582E+10, -7.630092841824029E+09, 3.152359011780100E+04, 2.830452174558838E+04, -5.805287833757387E+02},
{3.470128624382357E+10, -5.379075179718227E+10, -7.630683063110366E+09, 3.150663335252020E+04, 2.833151348253149E+04, -5.767675986253273E+02},
{3.473341435273182E+10, -5.376183988988252E+10, -7.631269447199199E+09, 3.148965503104693E+04, 2.835849995162746E+04, -5.730048667533811E+02},
{3.476552513275497E+10, -5.373290045907651E+10, -7.631851992512628E+09, 3.147265514505406E+04, 2.838548113969216E+04, -5.692405880732778E+02},
{3.479761856189296E+10, -5.370393351015759E+10, -7.632430697473064E+09, 3.145563368621150E+04, 2.841245703352228E+04, -5.654747628996990E+02},
{3.482969461813724E+10, -5.367493904853265E+10, -7.633005560503248E+09, 3.143859064618619E+04, 2.843942761989531E+04, -5.617073915486284E+02},
{3.486175327947075E+10, -5.364591707962205E+10, -7.633576580026228E+09, 3.142152601664217E+04, 2.846639288556943E+04, -5.579384743373499E+02},
{3.489379452386792E+10, -5.361686760885964E+10, -7.634143754465409E+09, 3.140443978924055E+04, 2.849335281728360E+04, -5.541680115844603E+02},
{3.492581832929469E+10, -5.358779064169285E+10, -7.634707082244486E+09, 3.138733195563957E+04, 2.852030740175743E+04, -5.503960036098636E+02},
{3.495782467370848E+10, -5.355868618358263E+10, -7.635266561787505E+09, 3.137020250749454E+04, 2.854725662569118E+04, -5.466224507347821E+02},
{3.498981353505819E+10, -5.352955424000354E+10, -7.635822191518828E+09, 3.135305143645797E+04, 2.857420047576579E+04, -5.428473532817666E+02},
{3.502178489128423E+10, -5.350039481644371E+10, -7.636373969863154E+09, 3.133587873417945E+04, 2.860113893864276E+04, -5.390707115746718E+02},
{3.505373872031846E+10, -5.347120791840490E+10, -7.636921895245511E+09, 3.131868439230578E+04, 2.862807200096416E+04, -5.352925259386989E+02},
{3.508567500008424E+10, -5.344199355140249E+10, -7.637465966091242E+09, 3.130146840248091E+04, 2.865499964935263E+04, -5.315127967003654E+02},
{3.511759370849638E+10, -5.341275172096552E+10, -7.638006180826060E+09, 3.128423075634604E+04, 2.868192187041130E+04, -5.277315241875424E+02}
},
{//planet 5
{-1.000276976858177E+11, -1.500638304997512E+12, 3.007291359054583E+10, 9.109071204544687E+03, -6.740377390032829E+02, -3.506038213908652E+02},
{-1.000184064301675E+11, -1.500638992483179E+12, 3.007255597270018E+10, 9.109077125220333E+03, -6.739733746114341E+02, -3.506076391837157E+02},
{-1.000091151684901E+11, -1.500639679903202E+12, 3.007219835096568E+10, 9.109083022912882E+03, -6.739090257758946E+02, -3.506114461785665E+02},
{-9.999982390080814E+10, -1.500640367257596E+12, 3.007184072535348E+10, 9.109088898900328E+03, -6.738446923043879E+02, -3.506152425815746E+02},
{-9.999053262714326E+10, -1.500641054546379E+12, 3.007148309587431E+10, 9.109094754422742E+03, -6.737803739416117E+02, -3.506190286278611E+02},
{-9.998124134751567E+10, -1.500641741769565E+12, 3.007112546253860E+10, 9.109100590677713E+03, -6.737160703725644E+02, -3.506228045794467E+02},
{-9.997195006194443E+10, -1.500642428927167E+12, 3.007076782535613E+10, 9.109106408816173E+03, -6.736517812261694E+02, -3.506265707230757E+02},
{-9.996265877044746E+10, -1.500643116019203E+12, 3.007041018433750E+10, 9.109112209938633E+03, -6.735875060791559E+02, -3.506303273679506E+02},
{-9.995336747304158E+10, -1.500643803045684E+12, 3.007005253949142E+10, 9.109117995091838E+03, -6.735232444601570E+02, -3.506340748433976E+02},
{-9.994407616974258E+10, -1.500644490006626E+12, 3.006969489082783E+10, 9.109123765265924E+03, -6.734589958539859E+02, -3.506378134964828E+02},
{-9.993478486056523E+10, -1.500645176902040E+12, 3.006933723835498E+10, 9.109129521391990E+03, -6.733947597060497E+02, -3.506415436896045E+02},
{-9.992549354552341E+10, -1.500645863731940E+12, 3.006897958208144E+10, 9.109135264340189E+03, -6.733305354268598E+02, -3.506452657980765E+02},
{-9.991620222463018E+10, -1.500646550496336E+12, 3.006862192201519E+10, 9.109140994918276E+03, -6.732663223966058E+02, -3.506489802077254E+02},
{-9.990691089789774E+10, -1.500647237195241E+12, 3.006826425816405E+10, 9.109146713870643E+03, -6.732021199697459E+02, -3.506526873125207E+02},
{-9.989761956533760E+10, -1.500647923828665E+12, 3.006790659053570E+10, 9.109152421877850E+03, -6.731379274795859E+02, -3.506563875122513E+02}
},
{//planet 6
{5.985435235147826E+10, 9.094050251594062E+10, -2.216341635088265E+09, -2.935037474119565E+04, 1.914488794535754E+04, 1.955888068757070E+03},
{5.982441171117658E+10, 9.096002536310199E+10, -2.214346508990318E+09, -2.935676257624853E+04, 1.913520416808559E+04, 1.956123852544946E+03},
{5.979446455690199E+10, 9.097953833170961E+10, -2.212351142501421E+09, -2.936314723696360E+04, 1.912551823225913E+04, 1.956359423544079E+03},
{5.976451089189271E+10, 9.099904141956225E+10, -2.210355535838641E+09, -2.936952872259610E+04, 1.911583013891739E+04, 1.956594781725747E+03},
{5.973455071938768E+10, 9.101853462445979E+10, -2.208359689219080E+09, -2.937590703240163E+04, 1.910613988909987E+04, 1.956829927061258E+03},
{5.970458404262664E+10, 9.103801794420317E+10, -2.206363602859821E+09, -2.938228216563611E+04, 1.909644748384633E+04, 1.957064859521927E+03},
{5.967461086485007E+10, 9.105749137659435E+10, -2.204367276978035E+09, -2.938865412155577E+04, 1.908675292419679E+04, 1.957299579079106E+03},
{5.964463118929920E+10, 9.107695491943638E+10, -2.202370711790901E+09, -2.939502289941722E+04, 1.907705621119155E+04, 1.957534085704165E+03},
{5.961464501921605E+10, 9.109640857053338E+10, -2.200373907515604E+09, -2.940138849847737E+04, 1.906735734587119E+04, 1.957768379368495E+03},
{5.958465235784335E+10, 9.111585232769053E+10, -2.198376864369400E+09, -2.940775091799349E+04, 1.905765632927652E+04, 1.958002460043517E+03},
{5.955465320842464E+10, 9.113528618871403E+10, -2.196379582569540E+09, -2.941411015722316E+04, 1.904795316244865E+04, 1.958236327700661E+03},
{5.952464757420417E+10, 9.115471015141121E+10, -2.194382062333319E+09, -2.942046621542433E+04, 1.903824784642893E+04, 1.958469982311392E+03},
{5.949463545842697E+10, 9.117412421359037E+10, -2.192384303878069E+09, -2.942681909185524E+04, 1.902854038225901E+04, 1.958703423847201E+03},
{5.946461686433885E+10, 9.119352837306099E+10, -2.190386307421133E+09, -2.943316878577451E+04, 1.901883077098077E+04, 1.958936652279590E+03},
{5.943459179518630E+10, 9.121292262763353E+10, -2.188388073179889E+09, -2.943951529644106E+04, 1.900911901363639E+04, 1.959169667580094E+03}
},
{//planet 7
{2.687460157454824E+12, 1.287827969339115E+12, -3.003350343971610E+10, -2.993108231583222E+03, 5.823908210005673E+03, 6.039605220664068E+01},
{2.687457104476938E+12, 1.287833909722532E+12, -3.003344183342743E+10, -2.993122903964700E+03, 5.823902409181720E+03, 6.040060034264982E+01},
{2.687454051484128E+12, 1.287839850100026E+12, -3.003338022247511E+10, -2.993137495691831E+03, 5.823896597027740E+03, 6.040519632382457E+01},
{2.687450998476475E+12, 1.287845790471586E+12, -3.003331860681140E+10, -2.993152004984621E+03, 5.823890772948527E+03, 6.040983827519586E+01},
{2.687447945454066E+12, 1.287851730837199E+12, -3.003325698639023E+10, -2.993166430112688E+03, 5.823884936350249E+03, 6.041452424858429E+01},
{2.687444892416987E+12, 1.287857671196852E+12, -3.003319536116761E+10, -2.993180769398144E+03, 5.823879086641115E+03, 6.041925222395239E+01},
{2.687441839365326E+12, 1.287863611550531E+12, -3.003313373110199E+10, -2.993195021218453E+03, 5.823873223232063E+03, 6.042402011089232E+01},
{2.687438786299174E+12, 1.287869551898222E+12, -3.003307209615380E+10, -2.993209184009246E+03, 5.823867345537446E+03, 6.042882575024811E+01},
{2.687435733218622E+12, 1.287875492239911E+12, -3.003301045628554E+10, -2.993223256267096E+03, 5.823861452975730E+03, 6.043366691588448E+01},
{2.687432680123762E+12, 1.287881432575581E+12, -3.003294881146187E+10, -2.993237236552249E+03, 5.823855544970210E+03, 6.043854131657334E+01},
{2.687429627014690E+12, 1.287887372905217E+12, -3.003288716165072E+10, -2.993251123491292E+03, 5.823849620949714E+03, 6.044344659802503E+01},
{2.687426573891503E+12, 1.287893313228802E+12, -3.003282550682122E+10, -2.993264915779765E+03, 5.823843680349322E+03, 6.044838034504174E+01},
{2.687423520754295E+12, 1.287899253546319E+12, -3.003276384694588E+10, -2.993278612184697E+03, 5.823837722611076E+03, 6.045334008379699E+01},
{2.687420467603167E+12, 1.287905193857750E+12, -3.003270218199939E+10, -2.993292211547078E+03, 5.823831747184719E+03, 6.045832328423995E+01},
{2.687417414438217E+12, 1.287911134163077E+12, -3.003264051195937E+10, -2.993305712784242E+03, 5.823825753528398E+03, 6.046332736261739E+01}
},
{//planet 8
{4.272371082155849E+12, -1.346720854466352E+12, -7.072789972275341E+10, 1.598637403747318E+03, 5.216616739514357E+03, -1.444023858924546E+02},
{4.272372712764037E+12, -1.346715533519906E+12, -7.072804701756674E+10, 1.598633530944940E+03, 5.216611574179034E+03, -1.444109690706163E+02},
{4.272374343368211E+12, -1.346710212578766E+12, -7.072819432112122E+10, 1.598629535784448E+03, 5.216606333889572E+03, -1.444195250928741E+02},
{4.272375973968248E+12, -1.346704891643009E+12, -7.072834163338828E+10, 1.598625417876442E+03, 5.216601019804129E+03, -1.444280525790951E+02},
{4.272377604564022E+12, -1.346699570712710E+12, -7.072848895433825E+10, 1.598621176851071E+03, 5.216595633092619E+03, -1.444365501536877E+02},
{4.272379235155407E+12, -1.346694249787942E+12, -7.072863628393996E+10, 1.598616812358097E+03, 5.216590174936525E+03, -1.444450164458255E+02},
{4.272380865742277E+12, -1.346688928868777E+12, -7.072878362216073E+10, 1.598612324066948E+03, 5.216584646528711E+03, -1.444534500896619E+02},
{4.272382496324506E+12, -1.346683607955287E+12, -7.072893096896648E+10, 1.598607711666771E+03, 5.216579049073228E+03, -1.444618497245527E+02},
{4.272384126901966E+12, -1.346678287047540E+12, -7.072907832432210E+10, 1.598602974866487E+03, 5.216573383785133E+03, -1.444702139952687E+02},
{4.272385757474532E+12, -1.346672966145607E+12, -7.072922568819058E+10, 1.598598113394829E+03, 5.216567651890282E+03, -1.444785415522174E+02},
{4.272387388042075E+12, -1.346667645249553E+12, -7.072937306053400E+10, 1.598593127000398E+03, 5.216561854625139E+03, -1.444868310516532E+02},
{4.272389018604468E+12, -1.346662324359445E+12, -7.072952044131273E+10, 1.598588015451692E+03, 5.216555993236585E+03, -1.444950811558974E+02},
{4.272390649161584E+12, -1.346657003475348E+12, -7.072966783048558E+10, 1.598582778537152E+03, 5.216550068981713E+03, -1.445032905335479E+02},
{4.272392279713294E+12, -1.346651682597325E+12, -7.072981522801089E+10, 1.598577416065188E+03, 5.216544083127628E+03, -1.445114578596935E+02},
{4.272393910259470E+12, -1.346646361725439E+12, -7.072996263384491E+10, 1.598571927864219E+03, 5.216538036951247E+03, -1.445195818161253E+02}
}//,

                       /*     {//comet 1.
                            {-3.058613306757840E+12, 3.892801647048648E+12, -1.482998564629125E+12, 1.600495787755951E+02, 1.284636679466526E+03, -1.690462038392793E+02},
                            {-3.058613306757840E+12, 3.892801647048648E+12, -1.482998564629125E+12, 1.600495787755951E+02, 1.284636679466526E+03, -1.690462038392793E+02},
                            {-3.058613306757840E+12, 3.892801647048648E+12, -1.482998564629125E+12, 1.600495787755951E+02, 1.284636679466526E+03, -1.690462038392793E+02},
                            {-3.058613306757840E+12, 3.892801647048648E+12, -1.482998564629125E+12, 1.600495787755951E+02, 1.284636679466526E+03, -1.690462038392793E+02},
                            {-3.058613306757840E+12, 3.892801647048648E+12, -1.482998564629125E+12, 1.600495787755951E+02, 1.284636679466526E+03, -1.690462038392793E+02},
                            {-3.058613306757840E+12, 3.892801647048648E+12, -1.482998564629125E+12, 1.600495787755951E+02, 1.284636679466526E+03, -1.690462038392793E+02},
                            {-3.058613306757840E+12, 3.892801647048648E+12, -1.482998564629125E+12, 1.600495787755951E+02, 1.284636679466526E+03, -1.690462038392793E+02},
                            {-3.058613306757840E+12, 3.892801647048648E+12, -1.482998564629125E+12, 1.600495787755951E+02, 1.284636679466526E+03, -1.690462038392793E+02},
                            {-3.058613306757840E+12, 3.892801647048648E+12, -1.482998564629125E+12, 1.600495787755951E+02, 1.284636679466526E+03, -1.690462038392793E+02},
                            {-3.058613306757840E+12, 3.892801647048648E+12, -1.482998564629125E+12, 1.600495787755951E+02, 1.284636679466526E+03, -1.690462038392793E+02},
                            {-3.058613306757840E+12, 3.892801647048648E+12, -1.482998564629125E+12, 1.600495787755951E+02, 1.284636679466526E+03, -1.690462038392793E+02},
                            {-3.058613306757840E+12, 3.892801647048648E+12, -1.482998564629125E+12, 1.600495787755951E+02, 1.284636679466526E+03, -1.690462038392793E+02},
                            {-3.058613306757840E+12, 3.892801647048648E+12, -1.482998564629125E+12, 1.600495787755951E+02, 1.284636679466526E+03, -1.690462038392793E+02},
                            {-3.058613306757840E+12, 3.892801647048648E+12, -1.482998564629125E+12, 1.600495787755951E+02, 1.284636679466526E+03, -1.690462038392793E+02},
                            {-3.058613306757840E+12, 3.892801647048648E+12, -1.482998564629125E+12, 1.600495787755951E+02, 1.284636679466526E+03, -1.690462038392793E+02}
                            }*/
                            };



    /*













    END OF GREEN ZONE.

    START OF GRAY ZONE.
    Please be catious of changes you make, in a normal environment they will NOT be needed!!!













    */

    //constant variables:
    int c = 299792458;              //speed of light, and thus the speed of gravity, in metres/sec.
    long double G = 6.673e-11;      //universal gravitational constant, in m^3*kg^-1*s^-2.


    /*













    END OF GRAY ZONE.
    START OF RED ZONE.
    You are urged not to change anything, unless you are sure about what you are doing.
    However, do not let this disencourage you to take a look at the code.























    */



    /////////////////////////////////////////////
    ////////  VARIABLE DECLARATIONS  ////////////
    /////////////////////////////////////////////



    //force variables:
    long double totalDist;
    long double totalFx;
    long double totalFy;
    long double totalFz;
    long double Fx;
    long double Fy;
    long double Fz;
    long double Ftotal;

    //user input variables:
    double xChange;
    double yChange;
    double zChange;
    double vxChange;
    double vyChange;
    double vzChange;
    double massChange;
    int objectInputNumber;

    //filename variables:
    ostringstream firstWrite;
    ostringstream secondWrite;
    ostringstream zeroWrite;

    //time variables:
    long int time;
    long int endTime;
    long int stepTime;
    long int startingTime;
    long int pastTime;

    //run number variables:
    long int runNumber;
    long int amountOfTimesteps;
    long int amountOfRuns;

    //loop number variables:
    int firstArrayObjectNumber;
    int firstCurrentObjectNumber;
    int secondCurrentObjectNumber;
    int gravityExertingObjectNumber;

    //loop "counters":
    int counterZero;
    int counterOne;
    int counterTwo;
    int counterThree;
    int counterFour;



    /////////////////////////////////////////////
    ////////  USER INTERFACE SCRIPT  ////////////
    /////////////////////////////////////////////



    cout << "Welcome to this simulation." << endl;
    cout << "You are strongly adviced to look at the source file of this program before running" << endl;
    cout << endl;
    cout << "Please assure that the following are in order:" << endl;
    cout << "1. The directory, in which this program is placed, does not contain any files with names containing space object names." << endl;
    cout << "2. The source file, from which this simulation is compiled, contains the correct settings." << endl;
    cout << endl;
    cout << "Please enter the steptime in seconds. Please note that it should be the same as the timesteps used in the settings" << endl;

    cin >> stepTime;

    startingTime = stepTime * 15;

    cout << "Please enter the amount of timesteps each simulation should run." << endl;

    cin >> amountOfTimesteps;

    endTime = amountOfTimesteps*stepTime;

    cout << "Please enter the amount of simulations you'd like to run." << endl;

    cin >> amountOfRuns;

    cout << endl;

    cout << "Here is a list of all the objects specified in the .cpp file:" << endl;
    cout << endl;



    for(counterZero=0; counterZero<amountOfObjects; counterZero++)
    {

        cout << counterZero << ". " << planets[counterZero] << endl;

    }

    cout << "Please enter the number of the object of which you would like to change the mass, positions and velocities." << endl;

    cin >> objectInputNumber;

    cout << endl;
    cout << "The current mass of that object is equal to " << masses[objectInputNumber] << "kg." << endl;
    cout << "Please enter what number should be added to the mass of this object in kg each run." << endl;

    cin >> massChange;


    cout << "Please enter (in the correct order) what number should be added to the x, y and z positions of the object in meters each run." << endl;
    cout << "The 'enter' key will jump to the next input value" << endl;

    cin >> xChange;
    cin >> yChange;
    cin >> zChange;

    cout << "Please enter (in the correct order) what number should be added to the x, y and z velocities of the object in metres/second each run." << endl;
    cout << "The 'enter' key will jump to the next input value" << endl;

    cin >> vxChange;
    cin >> vyChange;
    cin >> vzChange;


    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "The simulation will now start running " << amountOfRuns << " times, with the following values:" << endl;
    cout << "Steptime = " << stepTime << endl;
    cout << "Amount of timesteps = " << amountOfTimesteps << endl;
    cout << "End time = " << endTime << endl;

    cout << endl;
    cout << endl;


    /////////////////////////////////////////////
    ////////  ACTUAL SIMULATION CODE ////////////
    /////////////////////////////////////////////

    for(runNumber=1; runNumber<=amountOfRuns; runNumber++)
    { //This loop contains one whole simulation, and makes it run as much times as instructed in the UI.

        cout << "Starting run number " << runNumber << endl;

        long double positions[amountOfObjects][15][6];  //Creates a new array to store the positions and velocities of the space objects in.

        for(firstArrayObjectNumber=0; firstArrayObjectNumber<amountOfObjects; firstArrayObjectNumber++)
        {//Loops through the space object array in the positions array, to set new values in regard to the changes each run, specified in the UI.
            if(firstArrayObjectNumber==objectInputNumber)
            {//Checks if the current firstArrayObjectNumber needs to be changed.
                for(counterOne=0; counterOne<15; counterOne++)
                {//Loops through the timesteps array in the earlier set object array number in the positions array.

                    positions[firstArrayObjectNumber][counterOne][0] = positionsTemplate[firstArrayObjectNumber][counterOne][0] + ((runNumber-1)*xChange);  //changes the x-position.
                    positions[firstArrayObjectNumber][counterOne][1] = positionsTemplate[firstArrayObjectNumber][counterOne][1] + ((runNumber-1)*yChange);  //changes the y-position.
                    positions[firstArrayObjectNumber][counterOne][2] = positionsTemplate[firstArrayObjectNumber][counterOne][2] + ((runNumber-1)*zChange);  //changes the z-position.

                    positions[firstArrayObjectNumber][counterOne][3] = positionsTemplate[firstArrayObjectNumber][counterOne][3] + ((runNumber-1)*vxChange); //changes the x-velocity.
                    positions[firstArrayObjectNumber][counterOne][4] = positionsTemplate[firstArrayObjectNumber][counterOne][4] + ((runNumber-1)*vyChange); //changes the y-velocity.
                    positions[firstArrayObjectNumber][counterOne][5] = positionsTemplate[firstArrayObjectNumber][counterOne][5] + ((runNumber-1)*vzChange); //changes the z-velocity.

                    masses[firstArrayObjectNumber] = masses[firstArrayObjectNumber] + massChange;

                    zeroWrite.str("");
                    zeroWrite.clear();  //Clears the string that shall contain the name of the file that should be written to.

                    zeroWrite << planets[firstArrayObjectNumber] << runNumber << ".txt";    //Fills the string with the correct file name.

                    ofstream posWriterZero(zeroWrite.str(), ios::app);  //Opens the file.

                    posWriterZero.precision(16);

                    posWriterZero
                    << counterOne*stepTime                                  //Write the correct time.
                    << " "                                                  //Writes a blank space.
                    << positions[firstArrayObjectNumber][counterOne][0]     //Writes the x-position for that time.
                    << " "                                                  //Writes a blank space.
                    << positions[firstArrayObjectNumber][counterOne][1]     //Writes the y-position for that time.
                    << " "                                                  //Writes a blank space.
                    << positions[firstArrayObjectNumber][counterOne][2]     //Writes the z-position for that time.
                    << " "                                                  //Writes a blank space.
                    << positions[firstArrayObjectNumber][counterOne][3]     //Writes the x-velocity for that time.
                    << " "                                                  //Writes a blank space.
                    << positions[firstArrayObjectNumber][counterOne][4]     //Writes the y-velocity for that time.
                    << " "                                                  //Writes a blank space.
                    << positions[firstArrayObjectNumber][counterOne][5]     //Writes the z-velocity for that time.
                    << "\n";                                                //Ends the line, forcing the next write action to be on a new line.


                    posWriterZero.close();                                  //Closes the file.

                }//End of the "counterOne"-loop.
            }
            else
            {//If the current arrayobject doesn't need to be changed.
                for(counterOne=0; counterOne<15; counterOne++)
                {//Loops through the timesteps array in the earlier set object array number in the positions array.

                    positions[firstArrayObjectNumber][counterOne][0] = positionsTemplate[firstArrayObjectNumber][counterOne][0];  //changes the x-position.
                    positions[firstArrayObjectNumber][counterOne][1] = positionsTemplate[firstArrayObjectNumber][counterOne][1];  //changes the y-position.
                    positions[firstArrayObjectNumber][counterOne][2] = positionsTemplate[firstArrayObjectNumber][counterOne][2];  //changes the z-position.

                    positions[firstArrayObjectNumber][counterOne][3] = positionsTemplate[firstArrayObjectNumber][counterOne][3]; //changes the x-velocity.
                    positions[firstArrayObjectNumber][counterOne][4] = positionsTemplate[firstArrayObjectNumber][counterOne][4]; //changes the y-velocity.
                    positions[firstArrayObjectNumber][counterOne][5] = positionsTemplate[firstArrayObjectNumber][counterOne][5]; //changes the z-velocity.


                    zeroWrite.str("");
                    zeroWrite.clear();  //Clears the string that shall contain the name of the file that should be written to.

                    zeroWrite << planets[firstArrayObjectNumber] << runNumber << ".txt";    //Fills the string with the correct file name.

                    ofstream posWriterZero(zeroWrite.str(), ios::app);  //Opens the file.

                    posWriterZero.precision(16);

                    posWriterZero
                    << counterOne*stepTime                                  //Write the correct time.
                    << " "                                                  //Writes a blank space.
                    << positions[firstArrayObjectNumber][counterOne][0]     //Writes the x-position for that time.
                    << " "                                                  //Writes a blank space.
                    << positions[firstArrayObjectNumber][counterOne][1]     //Writes the y-position for that time.
                    << " "                                                  //Writes a blank space.
                    << positions[firstArrayObjectNumber][counterOne][2]     //Writes the z-position for that time.
                    << " "                                                  //Writes a blank space.
                    << positions[firstArrayObjectNumber][counterOne][3]     //Writes the x-velocity for that time.
                    << " "                                                  //Writes a blank space.
                    << positions[firstArrayObjectNumber][counterOne][4]     //Writes the y-velocity for that time.
                    << " "                                                  //Writes a blank space.
                    << positions[firstArrayObjectNumber][counterOne][5]     //Writes the z-velocity for that time.
                    << "\n";                                                //Ends the line, forcing the next write action to be on a new line.


                    posWriterZero.close();                                  //Closes the file.

                }//End of the "counterOne"-loop.
            }//if-statement.
        }//End of the "firstArrayObjectNumber"-loop.



        for(time=startingTime; time<=endTime; time+=stepTime)
        {//for-loop for every timestep.
            for(firstCurrentObjectNumber=0; firstCurrentObjectNumber<amountOfObjects; firstCurrentObjectNumber++)
            {//for-loop for every space object.
                //Objective: Give the space object the correct x-, y- and z-positions for the current timestep.
                //2a. Move all the arrays in the space object's array one back, destroying the oldest timestep.
                //2b. Calculate the new x-, y- and z-positions and add them to the positions-array.
                //    Using the formula: "Qposition = oldQposition + oldQvelocity * stepTime", with Q is x, y or z.
                //2c. Write the new x-, y- and z-positions to the file of the corresponding space object.

                //2a:
                for(counterTwo=0; counterTwo<14; counterTwo++)
                {//for-loop for every timestep array of the space object.
                    for(counterThree=0; counterThree<6; counterThree++)
                        {//for-loop for every position and velocity in the timestep array of the space-object.
                        positions[firstCurrentObjectNumber][counterTwo][counterThree] = positions[firstCurrentObjectNumber][counterTwo+1][counterThree];
                        }//End of "counterThree"-loop.
                    }//End of "counterTwo"-loop.

                //2b:
                positions[firstCurrentObjectNumber][14][0] = (positions[firstCurrentObjectNumber][13][0] + (positions[firstCurrentObjectNumber][13][3])*stepTime);  //Calculates the new x-position.
                positions[firstCurrentObjectNumber][14][1] = (positions[firstCurrentObjectNumber][13][1] + (positions[firstCurrentObjectNumber][13][4])*stepTime);  //Calculates the new y-position
                positions[firstCurrentObjectNumber][14][2] = (positions[firstCurrentObjectNumber][13][2] + (positions[firstCurrentObjectNumber][13][5])*stepTime);  //Calculates the new z-position.

                //2c:
                firstWrite.str("");
                firstWrite.clear(); //Clears the string that shall contain the name of the file that should be written to.

                firstWrite << planets[firstCurrentObjectNumber] << runNumber << ".txt"; //Fills the string with the correct file name.

                ofstream posWriterOne(firstWrite.str(), ios::app);  //Opens the file.

                posWriterOne.precision(16);

                posWriterOne
                << time                                         //Writes the correct time.
                << " "                                          //Writes a blank space.
                << positions[firstCurrentObjectNumber][14][0]   //Writes the x-position for that time.
                << " "                                          //Writes a blank space.
                << positions[firstCurrentObjectNumber][14][1]   //Writes the y-position for that time.
                << " "                                          //Writes a blank space.
                << positions[firstCurrentObjectNumber][14][2]   //Writes the z-position for that time.
                << " ";                                         //Writes a blank space.

                posWriterOne.close();                           //Closes the file.

            }//End of the "firstCurrentObjectNumber"-loop.

            for(secondCurrentObjectNumber=0; secondCurrentObjectNumber<amountOfObjects; secondCurrentObjectNumber++)
            {//for-loop for every space object.
                //Objective: Give the space object the correct x-, y- and z-positions for the current timestep.
                //3a. Calculate the force that each other space object will exert on the space object being exerted.
                //3b. Calculate the new x-, y- and z-velocities and add them to the positions-array.
                //    Using the formula: "Qvelocity = oldQvelocity + (totalQforce/exertedObjectMass) * stepTime", with Q is x, y or z.
                //3c. Write the new x-, y- and z-velocities to the file of the corresponding space object.

                totalFx=0;  //Set the total force to the space object in the x-direction to 0.
                totalFy=0;  //Set the total force to the space object in the y-direction to 0.
                totalFz=0;  //Set the total force to the space object in the z-direction to 0.

                //3a:
                for(gravityExertingObjectNumber=0; gravityExertingObjectNumber<amountOfObjects; gravityExertingObjectNumber++)
                {//for-loop for every other space object that will exert gravitational force on the space object being exerted.
                    //Objective: Calculate the force that each other space object will exert on the space object being exerted.
                    //4a. Make sure that the exerting space object is not equal to the object being exerted gravity.
                    //4b.

                    //4a:
                    if(gravityExertingObjectNumber!=secondCurrentObjectNumber)
                    {//if-loop.
                        //Objective: Make sure that the exerting space object is not equal to the object being exerted gravity.

                        //4b:
                        for(counterFour=14; counterFour>-1; counterFour--)
                        {//for-loop for every timestep array of the exerting space object.
                            //Objective: Returning the force that the exerting space object will exert to the space object being exerted.
                            //5a. Calculate the 3-dimensional distance between the exerting space object and the space object being exerted for the current timestep.
                            //    Using the formula sqrt(((xa-xb)^2)+((ya-yb)^2)+((za-zb)^2)) with a = the exerting space object and b = the space object being exerted.
                            //5b. Check if the distance calculated is equal to the distance gravity could have traveled between the timestep used for that calculation and the current timestep.

                            //5a:
                            totalDist = sqrt(((positions[gravityExertingObjectNumber][counterFour][0]-positions[secondCurrentObjectNumber][14][0])*(positions[gravityExertingObjectNumber][counterFour][0]-positions[secondCurrentObjectNumber][14][0]))+((positions[gravityExertingObjectNumber][counterFour][1]-positions[secondCurrentObjectNumber][14][1])*(positions[gravityExertingObjectNumber][counterFour][1]-positions[secondCurrentObjectNumber][14][1]))+((positions[gravityExertingObjectNumber][counterFour][2]-positions[secondCurrentObjectNumber][14][2])*(positions[gravityExertingObjectNumber][counterFour][2]-positions[secondCurrentObjectNumber][14][2])));

                            //5b:
                            pastTime = counterFour * stepTime;

                            if(totalDist>(c*(pastTime-(0.5*stepTime))) && totalDist<=(c*(pastTime+(0.5*stepTime))))
                            {//if-statement.
                                //Objective: Calcute the seperate gravitational force for the x-, y- and z-direction exerted by the exerting planet on the planet being exerted and add it to the total force for each direction.
                                //6a. Calculate the total gravitational force exerted by the exerting planet on the planet being exerted.
                                //    Using Newton's law of universal gravitation.
                                //6b. Calculate the seperate gravitational forces for the x-, y- and z-direction.
                                //    Using: ForceQ = (positionQexertingObjectOnThatTimestep - (positionQexetredObjectOnCurrentTimestep * totalForce))/distance.
                                //6c. Add those seperate forces to their corresponding "total force" variable for that direction.

                                //6a:
                                Ftotal = ((G*masses[secondCurrentObjectNumber]*masses[gravityExertingObjectNumber])/(totalDist*totalDist));

                                //6b:
                                Fx=(((positions[gravityExertingObjectNumber][counterFour][0]-positions[secondCurrentObjectNumber][14][0])*Ftotal)/totalDist);
                                Fy=(((positions[gravityExertingObjectNumber][counterFour][1]-positions[secondCurrentObjectNumber][14][1])*Ftotal)/totalDist);
                                Fz=(((positions[gravityExertingObjectNumber][counterFour][2]-positions[secondCurrentObjectNumber][14][2])*Ftotal)/totalDist);

                                //6c:
                                totalFx = totalFx + Fx;
                                totalFy = totalFy + Fy;
                                totalFz = totalFz + Fz;
                                break;      //Breaks out of the "counterFour"-loop, as the correct graviational force has been found and calculated.
                            }//End of if-statement.
                        }//End of "counterFour"-loop.
                    }//End of if-statement.
                }//End of "gravityExertingObjectNumber"-loop.


                //3b:
                positions[secondCurrentObjectNumber][14][3] = positions[secondCurrentObjectNumber][13][3] + ((totalFx/masses[secondCurrentObjectNumber])*stepTime); //Calculates the new x-velocity.
                positions[secondCurrentObjectNumber][14][4] = positions[secondCurrentObjectNumber][13][4] + ((totalFy/masses[secondCurrentObjectNumber])*stepTime); //Calculates the new y-velocity.
                positions[secondCurrentObjectNumber][14][5] = positions[secondCurrentObjectNumber][13][5] + ((totalFz/masses[secondCurrentObjectNumber])*stepTime); //Calculates the new z-velocity.

                //3c:
                secondWrite.str("");
                secondWrite.clear();    //Clears the string that shall contain the name of the file that should be written to.


                secondWrite << planets[secondCurrentObjectNumber] << runNumber << ".txt";   //Fills the string with the correct file name.

                ofstream posWriterTwo(secondWrite.str(), ios::app); //Opens the file.

                posWriterTwo.precision(16);

                posWriterTwo
                << positions[secondCurrentObjectNumber][14][3]  //Writes the x-velocity for the correct time.
                << " "                                          //Writes a blank space.
                << positions[secondCurrentObjectNumber][14][4]  //Writes the y-velocity for the correct time.
                << " "                                          //Writes a blank space.
                << positions[secondCurrentObjectNumber][14][5]  //Writes the z-velocity for the correct time.
                << "\n";                                        //Ends the line, forcing the next write action to be on a new line.


                posWriterTwo.close(); //Closes the file.

            }
        }//End of the "time"-loop.
    }//End of the "runNumber"-loop.

    /////////////////////////////////////////////
    ////////  USER INTERFACE SCRIPT  ////////////
    /////////////////////////////////////////////

    cout << "The simulation has successfully run, please check the directory in which the program was based for the results." << endl;
    cout << "We hope everything is to satisfaction." << endl;
    return 0;

}//End of the main-loop.

