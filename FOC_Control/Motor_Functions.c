#include <XMC4400.h>
#include "Motor_Functions.h"

const int16_t sintable16[3600]=
    {
        0,57,114,171,228,285,343,400,457,514,571,628,686,743,800,857,
914,971,1029,1086,1143,1200,1257,1314,1371,1428,1486,1543,1600,1657,1714,1771,
1828,1885,1942,1999,2057,2114,2171,2228,2285,2342,2399,2456,2513,2570,2627,2684,
2741,2798,2855,2912,2969,3026,3082,3139,3196,3253,3310,3367,3424,3481,3538,3594,
3651,3708,3765,3822,3878,3935,3992,4049,4105,4162,4219,4276,4332,4389,4446,4502,
4559,4615,4672,4729,4785,4842,4898,4955,5011,5068,5124,5181,5237,5294,5350,5406,
5463,5519,5576,5632,5688,5745,5801,5857,5913,5970,6026,6082,6138,6194,6250,6307,
6363,6419,6475,6531,6587,6643,6699,6755,6811,6867,6923,6978,7034,7090,7146,7202,
7257,7313,7369,7425,7480,7536,7592,7647,7703,7758,7814,7869,7925,7980,8036,8091,
8147,8202,8257,8313,8368,8423,8478,8534,8589,8644,8699,8754,8809,8864,8919,8974,
9029,9084,9139,9194,9249,9304,9359,9413,9468,9523,9578,9632,9687,9742,9796,9851,
9905,9960,10014,10069,10123,10177,10232,10286,10340,10394,10449,10503,10557,10611,10665,10719,
10773,10827,10881,10935,10989,11043,11097,11150,11204,11258,11311,11365,11419,11472,11526,11579,
11633,11686,11740,11793,11846,11900,11953,12006,12059,12112,12166,12219,12272,12325,12378,12430,
12483,12536,12589,12642,12695,12747,12800,12852,12905,12958,13010,13063,13115,13167,13220,13272,
13324,13376,13429,13481,13533,13585,13637,13689,13741,13793,13844,13896,13948,14000,14051,14103,
14155,14206,14258,14309,14361,14412,14463,14515,14566,14617,14668,14719,14770,14821,14872,14923,
14974,15025,15076,15126,15177,15228,15278,15329,15379,15430,15480,15531,15581,15631,15681,15732,
15782,15832,15882,15932,15982,16032,16082,16131,16181,16231,16280,16330,16379,16429,16478,16528,
16577,16626,16676,16725,16774,16823,16872,16921,16970,17019,17068,17117,17165,17214,17263,17311,
17360,17408,17457,17505,17553,17601,17650,17698,17746,17794,17842,17890,17938,17985,18033,18081,
18129,18176,18224,18271,18319,18366,18413,18461,18508,18555,18602,18649,18696,18743,18790,18837,
18883,18930,18977,19023,19070,19116,19163,19209,19255,19302,19348,19394,19440,19486,19532,19578,
19624,19669,19715,19761,19806,19852,19897,19943,19988,20033,20078,20123,20169,20214,20259,20303,
20348,20393,20438,20482,20527,20572,20616,20660,20705,20749,20793,20837,20882,20926,20969,21013,
21057,21101,21145,21188,21232,21275,21319,21362,21406,21449,21492,21535,21578,21621,21664,21707,
21750,21792,21835,21878,21920,21963,22005,22047,22090,22132,22174,22216,22258,22300,22342,22384,
22425,22467,22508,22550,22591,22633,22674,22715,22757,22798,22839,22880,22920,22961,23002,23043,
23083,23124,23164,23205,23245,23285,23325,23366,23406,23446,23485,23525,23565,23605,23644,23684,
23723,23763,23802,23841,23881,23920,23959,23998,24036,24075,24114,24153,24191,24230,24268,24307,
24345,24383,24421,24459,24497,24535,24573,24611,24649,24686,24724,24761,24799,24836,24873,24910,
24947,24985,25021,25058,25095,25132,25168,25205,25242,25278,25314,25351,25387,25423,25459,25495,
25531,25566,25602,25638,25673,25709,25744,25779,25815,25850,25885,25920,25955,25990,26025,26059,
26094,26128,26163,26197,26231,26266,26300,26334,26368,26402,26436,26469,26503,26536,26570,26603,
26637,26670,26703,26736,26769,26802,26835,26868,26900,26933,26965,26998,27030,27062,27095,27127,
27159,27191,27223,27254,27286,27318,27349,27381,27412,27443,27474,27505,27536,27567,27598,27629,
27660,27690,27721,27751,27782,27812,27842,27872,27902,27932,27962,27992,28021,28051,28080,28110,
28139,28168,28197,28226,28255,28284,28313,28342,28370,28399,28427,28456,28484,28512,28540,28568,
28596,28624,28652,28680,28707,28735,28762,28790,28817,28844,28871,28898,28925,28952,28978,29005,
29032,29058,29084,29111,29137,29163,29189,29215,29241,29266,29292,29318,29343,29368,29394,29419,
29444,29469,29494,29519,29544,29568,29593,29617,29642,29666,29690,29714,29738,29762,29786,29810,
29833,29857,29881,29904,29927,29950,29974,29997,30020,30042,30065,30088,30110,30133,30155,30178,
30200,30222,30244,30266,30288,30309,30331,30353,30374,30395,30417,30438,30459,30480,30501,30522,
30542,30563,30584,30604,30624,30645,30665,30685,30705,30725,30745,30764,30784,30803,30823,30842,
30861,30880,30899,30918,30937,30956,30975,30993,31012,31030,31048,31067,31085,31103,31121,31138,
31156,31174,31191,31209,31226,31243,31260,31277,31294,31311,31328,31345,31361,31378,31394,31410,
31427,31443,31459,31475,31490,31506,31522,31537,31553,31568,31583,31598,31613,31628,31643,31658,
31673,31687,31702,31716,31730,31744,31759,31773,31786,31800,31814,31827,31841,31854,31868,31881,
31894,31907,31920,31933,31945,31958,31971,31983,31995,32008,32020,32032,32044,32055,32067,32079,
32090,32102,32113,32124,32136,32147,32158,32168,32179,32190,32200,32211,32221,32232,32242,32252,
32262,32272,32281,32291,32301,32310,32320,32329,32338,32347,32356,32365,32374,32383,32391,32400,
32408,32416,32425,32433,32441,32449,32456,32464,32472,32479,32487,32494,32501,32508,32515,32522,
32529,32536,32542,32549,32555,32562,32568,32574,32580,32586,32592,32598,32603,32609,32614,32619,
32625,32630,32635,32640,32645,32649,32654,32659,32663,32667,32672,32676,32680,32684,32687,32691,
32695,32698,32702,32705,32708,32712,32715,32718,32720,32723,32726,32728,32731,32733,32735,32737,
32740,32741,32743,32745,32747,32748,32750,32751,32752,32753,32755,32755,32756,32757,32758,32758,
32759,32759,32759,32759,32760,32759,32759,32759,32759,32758,32758,32757,32756,32755,32755,32753,
32752,32751,32750,32748,32747,32745,32743,32741,32740,32737,32735,32733,32731,32728,32726,32723,
32720,32718,32715,32712,32708,32705,32702,32698,32695,32691,32687,32684,32680,32676,32672,32667,
32663,32659,32654,32649,32645,32640,32635,32630,32625,32619,32614,32609,32603,32598,32592,32586,
32580,32574,32568,32562,32555,32549,32542,32536,32529,32522,32515,32508,32501,32494,32487,32479,
32472,32464,32456,32449,32441,32433,32425,32416,32408,32400,32391,32383,32374,32365,32356,32347,
32338,32329,32320,32310,32301,32291,32281,32272,32262,32252,32242,32232,32221,32211,32200,32190,
32179,32168,32158,32147,32136,32124,32113,32102,32090,32079,32067,32055,32044,32032,32020,32008,
31995,31983,31971,31958,31945,31933,31920,31907,31894,31881,31868,31854,31841,31827,31814,31800,
31786,31773,31759,31744,31730,31716,31702,31687,31673,31658,31643,31628,31613,31598,31583,31568,
31553,31537,31522,31506,31490,31475,31459,31443,31427,31410,31394,31378,31361,31345,31328,31311,
31294,31277,31260,31243,31226,31209,31191,31174,31156,31138,31121,31103,31085,31067,31048,31030,
31012,30993,30975,30956,30937,30918,30899,30880,30861,30842,30823,30803,30784,30764,30745,30725,
30705,30685,30665,30645,30624,30604,30584,30563,30542,30522,30501,30480,30459,30438,30417,30395,
30374,30353,30331,30309,30288,30266,30244,30222,30200,30178,30155,30133,30110,30088,30065,30042,
30020,29997,29974,29950,29927,29904,29881,29857,29833,29810,29786,29762,29738,29714,29690,29666,
29642,29617,29593,29568,29544,29519,29494,29469,29444,29419,29394,29368,29343,29318,29292,29266,
29241,29215,29189,29163,29137,29111,29084,29058,29032,29005,28978,28952,28925,28898,28871,28844,
28817,28790,28762,28735,28707,28680,28652,28624,28596,28568,28540,28512,28484,28456,28427,28399,
28370,28342,28313,28284,28255,28226,28197,28168,28139,28110,28080,28051,28021,27992,27962,27932,
27902,27872,27842,27812,27782,27751,27721,27690,27660,27629,27598,27567,27536,27505,27474,27443,
27412,27381,27349,27318,27286,27254,27223,27191,27159,27127,27095,27062,27030,26998,26965,26933,
26900,26868,26835,26802,26769,26736,26703,26670,26637,26603,26570,26536,26503,26469,26436,26402,
26368,26334,26300,26266,26231,26197,26163,26128,26094,26059,26025,25990,25955,25920,25885,25850,
25815,25779,25744,25709,25673,25638,25602,25566,25531,25495,25459,25423,25387,25351,25314,25278,
25242,25205,25168,25132,25095,25058,25021,24985,24947,24910,24873,24836,24799,24761,24724,24686,
24649,24611,24573,24535,24497,24459,24421,24383,24345,24307,24268,24230,24191,24153,24114,24075,
24036,23998,23959,23920,23881,23841,23802,23763,23723,23684,23644,23605,23565,23525,23485,23446,
23406,23366,23325,23285,23245,23205,23164,23124,23083,23043,23002,22961,22920,22880,22839,22798,
22757,22715,22674,22633,22591,22550,22508,22467,22425,22384,22342,22300,22258,22216,22174,22132,
22090,22047,22005,21963,21920,21878,21835,21792,21750,21707,21664,21621,21578,21535,21492,21449,
21406,21362,21319,21275,21232,21188,21145,21101,21057,21013,20969,20926,20882,20837,20793,20749,
20705,20660,20616,20572,20527,20482,20438,20393,20348,20303,20259,20214,20169,20123,20078,20033,
19988,19943,19897,19852,19806,19761,19715,19669,19624,19578,19532,19486,19440,19394,19348,19302,
19255,19209,19163,19116,19070,19023,18977,18930,18883,18837,18790,18743,18696,18649,18602,18555,
18508,18461,18413,18366,18319,18271,18224,18176,18129,18081,18033,17985,17938,17890,17842,17794,
17746,17698,17650,17601,17553,17505,17457,17408,17360,17311,17263,17214,17165,17117,17068,17019,
16970,16921,16872,16823,16774,16725,16676,16626,16577,16528,16478,16429,16379,16330,16280,16231,
16181,16131,16082,16032,15982,15932,15882,15832,15782,15732,15681,15631,15581,15531,15480,15430,
15379,15329,15278,15228,15177,15126,15076,15025,14974,14923,14872,14821,14770,14719,14668,14617,
14566,14515,14463,14412,14361,14309,14258,14206,14155,14103,14051,14000,13948,13896,13844,13793,
13741,13689,13637,13585,13533,13481,13429,13376,13324,13272,13220,13167,13115,13063,13010,12958,
12905,12852,12800,12747,12695,12642,12589,12536,12483,12430,12378,12325,12272,12219,12166,12112,
12059,12006,11953,11900,11846,11793,11740,11686,11633,11579,11526,11472,11419,11365,11311,11258,
11204,11150,11097,11043,10989,10935,10881,10827,10773,10719,10665,10611,10557,10503,10449,10394,
10340,10286,10232,10177,10123,10069,10014,9960,9905,9851,9796,9742,9687,9632,9578,9523,
9468,9413,9359,9304,9249,9194,9139,9084,9029,8974,8919,8864,8809,8754,8699,8644,
8589,8534,8478,8423,8368,8313,8257,8202,8147,8091,8036,7980,7925,7869,7814,7758,
7703,7647,7592,7536,7480,7425,7369,7313,7257,7202,7146,7090,7034,6978,6923,6867,
6811,6755,6699,6643,6587,6531,6475,6419,6363,6307,6250,6194,6138,6082,6026,5970,
5913,5857,5801,5745,5688,5632,5576,5519,5463,5406,5350,5294,5237,5181,5124,5068,
5011,4955,4898,4842,4785,4729,4672,4615,4559,4502,4446,4389,4332,4276,4219,4162,
4105,4049,3992,3935,3878,3822,3765,3708,3651,3594,3538,3481,3424,3367,3310,3253,
3196,3139,3082,3026,2969,2912,2855,2798,2741,2684,2627,2570,2513,2456,2399,2342,
2285,2228,2171,2114,2057,1999,1942,1885,1828,1771,1714,1657,1600,1543,1486,1428,
1371,1314,1257,1200,1143,1086,1029,971,914,857,800,743,686,628,571,514,
457,400,343,285,228,171,114,57,0,-57,-114,-171,-228,-285,-343,-400,
-457,-514,-571,-628,-686,-743,-800,-857,-914,-971,-1029,-1086,-1143,-1200,-1257,-1314,
-1371,-1428,-1486,-1543,-1600,-1657,-1714,-1771,-1828,-1885,-1942,-1999,-2057,-2114,-2171,-2228,
-2285,-2342,-2399,-2456,-2513,-2570,-2627,-2684,-2741,-2798,-2855,-2912,-2969,-3026,-3082,-3139,
-3196,-3253,-3310,-3367,-3424,-3481,-3538,-3594,-3651,-3708,-3765,-3822,-3878,-3935,-3992,-4049,
-4105,-4162,-4219,-4276,-4332,-4389,-4446,-4502,-4559,-4615,-4672,-4729,-4785,-4842,-4898,-4955,
-5011,-5068,-5124,-5181,-5237,-5294,-5350,-5406,-5463,-5519,-5576,-5632,-5688,-5745,-5801,-5857,
-5913,-5970,-6026,-6082,-6138,-6194,-6250,-6307,-6363,-6419,-6475,-6531,-6587,-6643,-6699,-6755,
-6811,-6867,-6923,-6978,-7034,-7090,-7146,-7202,-7257,-7313,-7369,-7425,-7480,-7536,-7592,-7647,
-7703,-7758,-7814,-7869,-7925,-7980,-8036,-8091,-8147,-8202,-8257,-8313,-8368,-8423,-8478,-8534,
-8589,-8644,-8699,-8754,-8809,-8864,-8919,-8974,-9029,-9084,-9139,-9194,-9249,-9304,-9359,-9413,
-9468,-9523,-9578,-9632,-9687,-9742,-9796,-9851,-9905,-9960,-10014,-10069,-10123,-10177,-10232,-10286,
-10340,-10394,-10449,-10503,-10557,-10611,-10665,-10719,-10773,-10827,-10881,-10935,-10989,-11043,-11097,-11150,
-11204,-11258,-11311,-11365,-11419,-11472,-11526,-11579,-11633,-11686,-11740,-11793,-11846,-11900,-11953,-12006,
-12059,-12112,-12166,-12219,-12272,-12325,-12378,-12430,-12483,-12536,-12589,-12642,-12695,-12747,-12800,-12852,
-12905,-12958,-13010,-13063,-13115,-13167,-13220,-13272,-13324,-13376,-13429,-13481,-13533,-13585,-13637,-13689,
-13741,-13793,-13844,-13896,-13948,-14000,-14051,-14103,-14155,-14206,-14258,-14309,-14361,-14412,-14463,-14515,
-14566,-14617,-14668,-14719,-14770,-14821,-14872,-14923,-14974,-15025,-15076,-15126,-15177,-15228,-15278,-15329,
-15379,-15430,-15480,-15531,-15581,-15631,-15681,-15732,-15782,-15832,-15882,-15932,-15982,-16032,-16082,-16131,
-16181,-16231,-16280,-16330,-16379,-16429,-16478,-16528,-16577,-16626,-16676,-16725,-16774,-16823,-16872,-16921,
-16970,-17019,-17068,-17117,-17165,-17214,-17263,-17311,-17360,-17408,-17457,-17505,-17553,-17601,-17650,-17698,
-17746,-17794,-17842,-17890,-17938,-17985,-18033,-18081,-18129,-18176,-18224,-18271,-18319,-18366,-18413,-18461,
-18508,-18555,-18602,-18649,-18696,-18743,-18790,-18837,-18883,-18930,-18977,-19023,-19070,-19116,-19163,-19209,
-19255,-19302,-19348,-19394,-19440,-19486,-19532,-19578,-19624,-19669,-19715,-19761,-19806,-19852,-19897,-19943,
-19988,-20033,-20078,-20123,-20169,-20214,-20259,-20303,-20348,-20393,-20438,-20482,-20527,-20572,-20616,-20660,
-20705,-20749,-20793,-20837,-20882,-20926,-20969,-21013,-21057,-21101,-21145,-21188,-21232,-21275,-21319,-21362,
-21406,-21449,-21492,-21535,-21578,-21621,-21664,-21707,-21750,-21792,-21835,-21878,-21920,-21963,-22005,-22047,
-22090,-22132,-22174,-22216,-22258,-22300,-22342,-22384,-22425,-22467,-22508,-22550,-22591,-22633,-22674,-22715,
-22757,-22798,-22839,-22880,-22920,-22961,-23002,-23043,-23083,-23124,-23164,-23205,-23245,-23285,-23325,-23366,
-23406,-23446,-23485,-23525,-23565,-23605,-23644,-23684,-23723,-23763,-23802,-23841,-23881,-23920,-23959,-23998,
-24036,-24075,-24114,-24153,-24191,-24230,-24268,-24307,-24345,-24383,-24421,-24459,-24497,-24535,-24573,-24611,
-24649,-24686,-24724,-24761,-24799,-24836,-24873,-24910,-24947,-24985,-25021,-25058,-25095,-25132,-25168,-25205,
-25242,-25278,-25314,-25351,-25387,-25423,-25459,-25495,-25531,-25566,-25602,-25638,-25673,-25709,-25744,-25779,
-25815,-25850,-25885,-25920,-25955,-25990,-26025,-26059,-26094,-26128,-26163,-26197,-26231,-26266,-26300,-26334,
-26368,-26402,-26436,-26469,-26503,-26536,-26570,-26603,-26637,-26670,-26703,-26736,-26769,-26802,-26835,-26868,
-26900,-26933,-26965,-26998,-27030,-27062,-27095,-27127,-27159,-27191,-27223,-27254,-27286,-27318,-27349,-27381,
-27412,-27443,-27474,-27505,-27536,-27567,-27598,-27629,-27660,-27690,-27721,-27751,-27782,-27812,-27842,-27872,
-27902,-27932,-27962,-27992,-28021,-28051,-28080,-28110,-28139,-28168,-28197,-28226,-28255,-28284,-28313,-28342,
-28370,-28399,-28427,-28456,-28484,-28512,-28540,-28568,-28596,-28624,-28652,-28680,-28707,-28735,-28762,-28790,
-28817,-28844,-28871,-28898,-28925,-28952,-28978,-29005,-29032,-29058,-29084,-29111,-29137,-29163,-29189,-29215,
-29241,-29266,-29292,-29318,-29343,-29368,-29394,-29419,-29444,-29469,-29494,-29519,-29544,-29568,-29593,-29617,
-29642,-29666,-29690,-29714,-29738,-29762,-29786,-29810,-29833,-29857,-29881,-29904,-29927,-29950,-29974,-29997,
-30020,-30042,-30065,-30088,-30110,-30133,-30155,-30178,-30200,-30222,-30244,-30266,-30288,-30309,-30331,-30353,
-30374,-30395,-30417,-30438,-30459,-30480,-30501,-30522,-30542,-30563,-30584,-30604,-30624,-30645,-30665,-30685,
-30705,-30725,-30745,-30764,-30784,-30803,-30823,-30842,-30861,-30880,-30899,-30918,-30937,-30956,-30975,-30993,
-31012,-31030,-31048,-31067,-31085,-31103,-31121,-31138,-31156,-31174,-31191,-31209,-31226,-31243,-31260,-31277,
-31294,-31311,-31328,-31345,-31361,-31378,-31394,-31410,-31427,-31443,-31459,-31475,-31490,-31506,-31522,-31537,
-31553,-31568,-31583,-31598,-31613,-31628,-31643,-31658,-31673,-31687,-31702,-31716,-31730,-31744,-31759,-31773,
-31786,-31800,-31814,-31827,-31841,-31854,-31868,-31881,-31894,-31907,-31920,-31933,-31945,-31958,-31971,-31983,
-31995,-32008,-32020,-32032,-32044,-32055,-32067,-32079,-32090,-32102,-32113,-32124,-32136,-32147,-32158,-32168,
-32179,-32190,-32200,-32211,-32221,-32232,-32242,-32252,-32262,-32272,-32281,-32291,-32301,-32310,-32320,-32329,
-32338,-32347,-32356,-32365,-32374,-32383,-32391,-32400,-32408,-32416,-32425,-32433,-32441,-32449,-32456,-32464,
-32472,-32479,-32487,-32494,-32501,-32508,-32515,-32522,-32529,-32536,-32542,-32549,-32555,-32562,-32568,-32574,
-32580,-32586,-32592,-32598,-32603,-32609,-32614,-32619,-32625,-32630,-32635,-32640,-32645,-32649,-32654,-32659,
-32663,-32667,-32672,-32676,-32680,-32684,-32687,-32691,-32695,-32698,-32702,-32705,-32708,-32712,-32715,-32718,
-32720,-32723,-32726,-32728,-32731,-32733,-32735,-32737,-32740,-32741,-32743,-32745,-32747,-32748,-32750,-32751,
-32752,-32753,-32755,-32755,-32756,-32757,-32758,-32758,-32759,-32759,-32759,-32759,-32760,-32759,-32759,-32759,
-32759,-32758,-32758,-32757,-32756,-32755,-32755,-32753,-32752,-32751,-32750,-32748,-32747,-32745,-32743,-32741,
-32740,-32737,-32735,-32733,-32731,-32728,-32726,-32723,-32720,-32718,-32715,-32712,-32708,-32705,-32702,-32698,
-32695,-32691,-32687,-32684,-32680,-32676,-32672,-32667,-32663,-32659,-32654,-32649,-32645,-32640,-32635,-32630,
-32625,-32619,-32614,-32609,-32603,-32598,-32592,-32586,-32580,-32574,-32568,-32562,-32555,-32549,-32542,-32536,
-32529,-32522,-32515,-32508,-32501,-32494,-32487,-32479,-32472,-32464,-32456,-32449,-32441,-32433,-32425,-32416,
-32408,-32400,-32391,-32383,-32374,-32365,-32356,-32347,-32338,-32329,-32320,-32310,-32301,-32291,-32281,-32272,
-32262,-32252,-32242,-32232,-32221,-32211,-32200,-32190,-32179,-32168,-32158,-32147,-32136,-32124,-32113,-32102,
-32090,-32079,-32067,-32055,-32044,-32032,-32020,-32008,-31995,-31983,-31971,-31958,-31945,-31933,-31920,-31907,
-31894,-31881,-31868,-31854,-31841,-31827,-31814,-31800,-31786,-31773,-31759,-31744,-31730,-31716,-31702,-31687,
-31673,-31658,-31643,-31628,-31613,-31598,-31583,-31568,-31553,-31537,-31522,-31506,-31490,-31475,-31459,-31443,
-31427,-31410,-31394,-31378,-31361,-31345,-31328,-31311,-31294,-31277,-31260,-31243,-31226,-31209,-31191,-31174,
-31156,-31138,-31121,-31103,-31085,-31067,-31048,-31030,-31012,-30993,-30975,-30956,-30937,-30918,-30899,-30880,
-30861,-30842,-30823,-30803,-30784,-30764,-30745,-30725,-30705,-30685,-30665,-30645,-30624,-30604,-30584,-30563,
-30542,-30522,-30501,-30480,-30459,-30438,-30417,-30395,-30374,-30353,-30331,-30309,-30288,-30266,-30244,-30222,
-30200,-30178,-30155,-30133,-30110,-30088,-30065,-30042,-30020,-29997,-29974,-29950,-29927,-29904,-29881,-29857,
-29833,-29810,-29786,-29762,-29738,-29714,-29690,-29666,-29642,-29617,-29593,-29568,-29544,-29519,-29494,-29469,
-29444,-29419,-29394,-29368,-29343,-29318,-29292,-29266,-29241,-29215,-29189,-29163,-29137,-29111,-29084,-29058,
-29032,-29005,-28978,-28952,-28925,-28898,-28871,-28844,-28817,-28790,-28762,-28735,-28707,-28680,-28652,-28624,
-28596,-28568,-28540,-28512,-28484,-28456,-28427,-28399,-28370,-28342,-28313,-28284,-28255,-28226,-28197,-28168,
-28139,-28110,-28080,-28051,-28021,-27992,-27962,-27932,-27902,-27872,-27842,-27812,-27782,-27751,-27721,-27690,
-27660,-27629,-27598,-27567,-27536,-27505,-27474,-27443,-27412,-27381,-27349,-27318,-27286,-27254,-27223,-27191,
-27159,-27127,-27095,-27062,-27030,-26998,-26965,-26933,-26900,-26868,-26835,-26802,-26769,-26736,-26703,-26670,
-26637,-26603,-26570,-26536,-26503,-26469,-26436,-26402,-26368,-26334,-26300,-26266,-26231,-26197,-26163,-26128,
-26094,-26059,-26025,-25990,-25955,-25920,-25885,-25850,-25815,-25779,-25744,-25709,-25673,-25638,-25602,-25566,
-25531,-25495,-25459,-25423,-25387,-25351,-25314,-25278,-25242,-25205,-25168,-25132,-25095,-25058,-25021,-24985,
-24947,-24910,-24873,-24836,-24799,-24761,-24724,-24686,-24649,-24611,-24573,-24535,-24497,-24459,-24421,-24383,
-24345,-24307,-24268,-24230,-24191,-24153,-24114,-24075,-24036,-23998,-23959,-23920,-23881,-23841,-23802,-23763,
-23723,-23684,-23644,-23605,-23565,-23525,-23485,-23446,-23406,-23366,-23325,-23285,-23245,-23205,-23164,-23124,
-23083,-23043,-23002,-22961,-22920,-22880,-22839,-22798,-22757,-22715,-22674,-22633,-22591,-22550,-22508,-22467,
-22425,-22384,-22342,-22300,-22258,-22216,-22174,-22132,-22090,-22047,-22005,-21963,-21920,-21878,-21835,-21792,
-21750,-21707,-21664,-21621,-21578,-21535,-21492,-21449,-21406,-21362,-21319,-21275,-21232,-21188,-21145,-21101,
-21057,-21013,-20969,-20926,-20882,-20837,-20793,-20749,-20705,-20660,-20616,-20572,-20527,-20482,-20438,-20393,
-20348,-20303,-20259,-20214,-20169,-20123,-20078,-20033,-19988,-19943,-19897,-19852,-19806,-19761,-19715,-19669,
-19624,-19578,-19532,-19486,-19440,-19394,-19348,-19302,-19255,-19209,-19163,-19116,-19070,-19023,-18977,-18930,
-18883,-18837,-18790,-18743,-18696,-18649,-18602,-18555,-18508,-18461,-18413,-18366,-18319,-18271,-18224,-18176,
-18129,-18081,-18033,-17985,-17938,-17890,-17842,-17794,-17746,-17698,-17650,-17601,-17553,-17505,-17457,-17408,
-17360,-17311,-17263,-17214,-17165,-17117,-17068,-17019,-16970,-16921,-16872,-16823,-16774,-16725,-16676,-16626,
-16577,-16528,-16478,-16429,-16379,-16330,-16280,-16231,-16181,-16131,-16082,-16032,-15982,-15932,-15882,-15832,
-15782,-15732,-15681,-15631,-15581,-15531,-15480,-15430,-15379,-15329,-15278,-15228,-15177,-15126,-15076,-15025,
-14974,-14923,-14872,-14821,-14770,-14719,-14668,-14617,-14566,-14515,-14463,-14412,-14361,-14309,-14258,-14206,
-14155,-14103,-14051,-14000,-13948,-13896,-13844,-13793,-13741,-13689,-13637,-13585,-13533,-13481,-13429,-13376,
-13324,-13272,-13220,-13167,-13115,-13063,-13010,-12958,-12905,-12852,-12800,-12747,-12695,-12642,-12589,-12536,
-12483,-12430,-12378,-12325,-12272,-12219,-12166,-12112,-12059,-12006,-11953,-11900,-11846,-11793,-11740,-11686,
-11633,-11579,-11526,-11472,-11419,-11365,-11311,-11258,-11204,-11150,-11097,-11043,-10989,-10935,-10881,-10827,
-10773,-10719,-10665,-10611,-10557,-10503,-10449,-10394,-10340,-10286,-10232,-10177,-10123,-10069,-10014,-9960,
-9905,-9851,-9796,-9742,-9687,-9632,-9578,-9523,-9468,-9413,-9359,-9304,-9249,-9194,-9139,-9084,
-9029,-8974,-8919,-8864,-8809,-8754,-8699,-8644,-8589,-8534,-8478,-8423,-8368,-8313,-8257,-8202,
-8147,-8091,-8036,-7980,-7925,-7869,-7814,-7758,-7703,-7647,-7592,-7536,-7480,-7425,-7369,-7313,
-7257,-7202,-7146,-7090,-7034,-6978,-6923,-6867,-6811,-6755,-6699,-6643,-6587,-6531,-6475,-6419,
-6363,-6307,-6250,-6194,-6138,-6082,-6026,-5970,-5913,-5857,-5801,-5745,-5688,-5632,-5576,-5519,
-5463,-5406,-5350,-5294,-5237,-5181,-5124,-5068,-5011,-4955,-4898,-4842,-4785,-4729,-4672,-4615,
-4559,-4502,-4446,-4389,-4332,-4276,-4219,-4162,-4105,-4049,-3992,-3935,-3878,-3822,-3765,-3708,
-3651,-3594,-3538,-3481,-3424,-3367,-3310,-3253,-3196,-3139,-3082,-3026,-2969,-2912,-2855,-2798,
-2741,-2684,-2627,-2570,-2513,-2456,-2399,-2342,-2285,-2228,-2171,-2114,-2057,-1999,-1942,-1885,
-1828,-1771,-1714,-1657,-1600,-1543,-1486,-1428,-1371,-1314,-1257,-1200,-1143,-1086,-1029,-971,
-914,-857,-800,-743,-686,-628,-571,-514,-457,-400,-343,-285,-228,-171,-114,-57
    };
