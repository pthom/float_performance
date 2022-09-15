
__[x64 msvc v19.latest / compiler explorer](https://godbolt.org/z/r5sr77PcG)__
sizeof(float)=4 sizeof(double)=8 sizeof(long double)=8

|               ns/op |                op/s |    err% |     total | benchmark
|--------------------:|--------------------:|--------:|----------:|:----------
|           44,720.00 |           22,361.36 |    0.4% |      0.01 | `division_float`
|           50,230.43 |           19,908.25 |    0.4% |      0.01 | `division_double`
|           50,082.61 |           19,967.01 |    2.2% |      0.01 | `division_long_double`
|          309,840.00 |            3,227.47 |   27.1% |      0.04 | `trig_float`
|          394,763.64 |            2,533.16 |   13.6% |      0.05 | `trig_double`
|          271,190.91 |            3,687.44 |    2.4% |      0.04 | `trig_long_double`

"title";"name";"unit";"batch";"elapsed";"error %";"instructions";"branches";"branch misses";"total"
"benchmark";"division_float";"op";1;4.472e-05;0.00352644836272035;0;0;0;0.0121163
"benchmark";"division_double";"op";1;5.02304347826087e-05;0.00374090438724724;0;0;0;0.0121528
"benchmark";"division_long_double";"op";1;5.00826086956522e-05;0.0220033714843403;0;0;0;0.0120887
"benchmark";"trig_float";"op";1;0.00030984;0.270929898683293;0;0;0;0.0385239
"benchmark";"trig_double";"op";1;0.000394763636363636;0.135579319515555;0;0;0;0.0485895
"benchmark";"trig_long_double";"op";1;0.000271190909090909;0.024199316765566;0;0;0;0.0396775


__[x64 msvc v19.33.31629.0 / Github CI](https://github.com/pthom/float_performance/actions/runs/3059643887/jobs/4937258199)__
sizeof(float)=4 sizeof(double)=8 sizeof(long double)=8

|               ns/op |                op/s |    err% |     total | benchmark
|--------------------:|--------------------:|--------:|----------:|:----------
|           60,830.00 |           16,439.26 |   11.7% |      0.01 | `division_float`
|           57,321.05 |           17,445.60 |    3.7% |      0.01 | `division_double`
|           58,463.16 |           17,104.79 |    3.7% |      0.01 | `division_long_double`
|          329,381.82 |            3,035.99 |    1.9% |      0.04 | `trig_float`
|          373,220.00 |            2,679.38 |    1.1% |      0.05 | `trig_double`
|          380,454.55 |            2,628.43 |    3.1% |      0.05 | `trig_long_double`

"title";"name";"unit";"batch";"elapsed";"error %";"instructions";"branches";"branch misses";"total"
"benchmark";"division_float";"op";1;6.083e-05;0.116634615384615;0;0;0;0.01153
"benchmark";"division_double";"op";1;5.73210526315789e-05;0.0368417032805798;0;0;0;0.0120332
"benchmark";"division_long_double";"op";1;5.84631578947368e-05;0.0371216573208037;0;0;0;0.0116489
"benchmark";"trig_float";"op";1;0.000329381818181818;0.0191269126912692;0;0;0;0.0393049
"benchmark";"trig_double";"op";1;0.00037322;0.0107788971942368;0;0;0;0.0453499
"benchmark";"trig_long_double";"op";1;0.000380454545454545;0.0308389575841176;0;0;0;0.046217


__[x86 msvc v19.latest / Compiler Explorer](https://godbolt.org/z/aEjfGfP7W)__
sizeof(float)=4 sizeof(double)=8 sizeof(long double)=8

|               ns/op |                op/s |    err% |     total | benchmark
|--------------------:|--------------------:|--------:|----------:|:----------
|           46,895.83 |           21,323.86 |    3.1% |      0.01 | `division_float`
|           46,404.76 |           21,549.51 |    0.6% |      0.01 | `division_double`
|           54,865.00 |           18,226.56 |    3.6% |      0.01 | `division_long_double`
|          517,972.73 |            1,930.60 |    1.1% |      0.06 | `trig_float`
|          529,263.64 |            1,889.42 |    1.2% |      0.06 | `trig_double`
|          527,681.82 |            1,895.08 |    1.7% |      0.06 | `trig_long_double`

"title";"name";"unit";"batch";"elapsed";"error %";"instructions";"branches";"branch misses";"total"
"benchmark";"division_float";"op";1;4.68958333333333e-05;0.0306776556776556;0;0;0;0.0124175
"benchmark";"division_double";"op";1;4.64047619047619e-05;0.00643623459620678;0;0;0;0.0123382
"benchmark";"division_long_double";"op";1;5.4865e-05;0.0364230656649429;0;0;0;0.0119228
"benchmark";"trig_float";"op";1;0.000517972727272727;0.0110072750931568;0;0;0;0.0623071
"benchmark";"trig_double";"op";1;0.000529263636363636;0.0116612507798453;0;0;0;0.0633914
"benchmark";"trig_long_double";"op";1;0.000527681818181818;0.0174337077391219;0;0;0;0.0638655


__[x86 msvc v19.33.31629.0 / Github CI](https://github.com/pthom/float_performance/actions/runs/3059643887/jobs/4937258066)__

sizeof(float)=4 sizeof(double)=8 sizeof(long double)=8

|               ns/op |                op/s |    err% |     total | benchmark
|--------------------:|--------------------:|--------:|----------:|:----------
|           61,057.89 |           16,377.90 |    2.7% |      0.01 | `division_float`
|           60,435.00 |           16,546.70 |    2.3% |      0.01 | `division_double`
|           60,957.89 |           16,404.77 |    2.6% |      0.01 | `division_long_double`
|          816,090.00 |            1,225.36 |    2.8% |      0.10 | `trig_float`
|          755,158.33 |            1,324.23 |    1.4% |      0.09 | `trig_double`
|          741,040.00 |            1,349.45 |    2.5% |      0.09 | `trig_long_double`

"title";"name";"unit";"batch";"elapsed";"error %";"instructions";"branches";"branch misses";"total"
"benchmark";"division_float";"op";1;6.10578947368421e-05;0.0269097990616979;0;0;0;0.0118584
"benchmark";"division_double";"op";1;6.0435e-05;0.0225618631732168;0;0;0;0.0123787
"benchmark";"division_long_double";"op";1;6.09578947368421e-05;0.0262317134689759;0;0;0;0.0123499
"benchmark";"trig_float";"op";1;0.00081609;0.0280801209372638;0;0;0;0.0989588
"benchmark";"trig_double";"op";1;0.000755158333333333;0.0140951081043658;0;0;0;0.0903263
"benchmark";"trig_long_double";"op";1;0.00074104;0.024771195816152;0;0;0;0.0895202


__[x86-64 gcc 12.2 (trunk) / Compiler Explorer](https://godbolt.org/z/4e9a7Gjsr)__
sizeof(float)=4 sizeof(double)=8 sizeof(long double)=16 => long double is 16 bytes!

|               ns/op |                op/s |    err% |     total | benchmark
|--------------------:|--------------------:|--------:|----------:|:----------
|           36,108.20 |           27,694.54 |    0.4% |      0.01 | `division_float`
|           35,527.24 |           28,147.41 |    0.7% |      0.01 | `division_double`
|        3,501,714.33 |              285.57 |    0.2% |      0.12 | `division_long_double`
|          279,362.33 |            3,579.58 |    4.4% |      0.01 | `trig_float`
|          555,839.00 |            1,799.08 |    6.3% |      0.02 | `trig_double`
|        7,033,787.67 |              142.17 |    1.4% |      0.24 | `trig_long_double`

"title";"name";"unit";"batch";"elapsed";"error %";"instructions";"branches";"branch misses";"total"
"benchmark";"division_float";"op";1;3.61082e-05;0.00436388796653811;0;0;0;0.007711175
"benchmark";"division_double";"op";1;3.55272413793103e-05;0.00653057731434075;0;0;0;0.011848499
"benchmark";"division_long_double";"op";1;0.00350171433333333;0.00246944800040839;0;0;0;0.120789726
"benchmark";"trig_float";"op";1;0.000279362333333333;0.0435990265807365;0;0;0;0.012075357
"benchmark";"trig_double";"op";1;0.000555839;0.0630058241952749;0;0;0;0.017187631
"benchmark";"trig_long_double";"op";1;0.00703378766666667;0.0138113018341209;0;0;0;0.242373641


__[x86-64 gcc 11.2.0 / Github CI](https://github.com/pthom/float_performance/actions/runs/3059643887/jobs/4937258427)__
sizeof(float)=4 sizeof(double)=8 sizeof(long double)=16 => long double is 16 bytes!

|               ns/op |                op/s |    err% |     total | benchmark
|--------------------:|--------------------:|--------:|----------:|:----------
|           41,147.94 |           24,302.55 |    0.4% |      0.01 | `division_float`
|           40,114.62 |           24,928.57 |    0.0% |      0.01 | `division_double`
|        3,962,312.60 |              252.38 |    0.1% |      0.48 | `division_long_double`
|          285,305.90 |            3,505.01 |    0.5% |      0.03 | `trig_float`
|          427,267.25 |            2,340.46 |    0.4% |      0.05 | `trig_double`
|        5,765,637.00 |              173.44 |    0.4% |      0.69 | `trig_long_double`

"title";"name";"unit";"batch";"elapsed";"error %";"instructions";"branches";"branch misses";"total"
"benchmark";"division_float";"op";1;4.11479411764706e-05;0.00361036264638528;0;0;0;0.01004051
"benchmark";"division_double";"op";1;4.01146206896552e-05;0.000343223257024234;0;0;0;0.012059152
"benchmark";"division_long_double";"op";1;0.0039623126;0.000976751483846673;0;0;0;0.475647021
"benchmark";"trig_float";"op";1;0.0002853059;0.00507236797263476;0;0;0;0.034110212
"benchmark";"trig_double";"op";1;0.00042726725;0.00399005638738876;0;0;0;0.05131517
"benchmark";"trig_long_double";"op";1;0.005765637;0.00431420695717945;0;0;0;0.691363321


__[x86 gcc 11.2.0 / Github CI](https://github.com/pthom/float_performance/actions/runs/3059643887/jobs/4937258323)__
sizeof(float)=4 sizeof(double)=8 sizeof(long double)=12 => long double is 16 bytes!

|               ns/op |                op/s |    err% |     total | benchmark
|--------------------:|--------------------:|--------:|----------:|:----------
|        3,941,488.27 |              253.71 |    0.0% |      0.47 | `division_float`
|        3,943,059.58 |              253.61 |    0.0% |      0.47 | `division_double`
|        3,941,515.64 |              253.71 |    0.0% |      0.47 | `division_long_double`
|          469,111.09 |            2,131.69 |    0.6% |      0.17 | `trig_float`
|          769,224.73 |            1,300.01 |    0.5% |      0.10 | `trig_double`
|        7,437,454.33 |              134.45 |    0.3% |      0.89 | `trig_long_double`

"title";"name";"unit";"batch";"elapsed";"error %";"instructions";"branches";"branch misses";"total"
"benchmark";"division_float";"op";1;0.00394148827272727;0.000222141263170677;0;0;0;0.473139346
"benchmark";"division_double";"op";1;0.00394305958333333;0.000397501674175362;0;0;0;0.473897855
"benchmark";"division_long_double";"op";1;0.00394151563636364;0.000219372296711439;0;0;0;0.473082246
"benchmark";"trig_float";"op";1;0.000469111090909091;0.00556938706108849;0;0;0;0.174075905
"benchmark";"trig_double";"op";1;0.000769224727272727;0.00538367620625382;0;0;0;0.098732708
"benchmark";"trig_long_double";"op";1;0.00743745433333333;0.00286017990225916;0;0;0;0.893821799


__[x86-64 clang 14.0.0 / Compiler Explorer](https://godbolt.org/z/88fTTGGP6)__
sizeof(float)=4 sizeof(double)=8 sizeof(long double)=16 => long double is 16 bytes!

|               ns/op |                op/s |    err% |     total | benchmark
|--------------------:|--------------------:|--------:|----------:|:----------
|           42,288.81 |           23,646.91 |    2.0% |      0.01 | `division_float`
|           46,884.32 |           21,329.09 |    2.0% |      0.01 | `division_double`
|           54,628.41 |           18,305.49 |    0.1% |      0.01 | `division_long_double`
|          239,766.00 |            4,170.73 |    6.4% |      0.02 | `trig_float`
|          623,255.60 |            1,604.48 |    5.2% |      0.04 | `trig_double`
|        6,557,383.20 |              152.50 |    2.0% |      0.43 | `trig_long_double`

"title";"name";"unit";"batch";"elapsed";"error %";"instructions";"branches";"branch misses";"total"
"benchmark";"division_float";"op";1;4.22888148148148e-05;0.0195688684829137;0;0;0;0.012274595
"benchmark";"division_double";"op";1;4.68843181818182e-05;0.0202428649861412;0;0;0;0.012009679
"benchmark";"division_long_double";"op";1;5.46284117647059e-05;0.00146772110807906;0;0;0;0.011614788
"benchmark";"trig_float";"op";1;0.000239766;0.0637846644210736;0;0;0;0.015782363
"benchmark";"trig_double";"op";1;0.0006232556;0.0516156856287063;0;0;0;0.040894778
"benchmark";"trig_long_double";"op";1;0.0065573832;0.0198213808455262;0;0;0;0.43127992


__[x86-64 clang 14.0.0 / Github CI](https://github.com/pthom/float_performance/actions/runs/3059643887/jobs/4937258613)__
sizeof(float)=4 sizeof(double)=8 sizeof(long double)=16 => long double is 16 bytes!

|               ns/op |                op/s |    err% |     total | benchmark
|--------------------:|--------------------:|--------:|----------:|:----------
|           54,767.95 |           18,258.85 |    6.9% |      0.01 | `division_float`
|           58,710.00 |           17,032.87 |   12.5% |      0.01 | `division_double`
|        4,188,816.55 |              238.73 |    3.4% |      0.51 | `division_long_double`
|          313,117.10 |            3,193.69 |    4.2% |      0.04 | `trig_float`
|          540,255.10 |            1,850.98 |    4.0% |      0.07 | `trig_double`
|        5,592,119.30 |              178.82 |    1.3% |      0.68 | `trig_long_double`

"title";"name";"unit";"batch";"elapsed";"error %";"instructions";"branches";"branch misses";"total"
"benchmark";"division_float";"op";1;5.4767947368421e-05;0.0694177251371931;0;0;0;0.010676603
"benchmark";"division_double";"op";1;5.871e-05;0.124823080085486;0;0;0;0.012018791
"benchmark";"division_long_double";"op";1;0.00418881654545455;0.0335085325726859;0;0;0;0.510099672
"benchmark";"trig_float";"op";1;0.0003131171;0.0421829449965892;0;0;0;0.037716457
"benchmark";"trig_double";"op";1;0.0005402551;0.0398614942586811;0;0;0;0.067449488
"benchmark";"trig_long_double";"op";1;0.0055921193;0.0126688472023419;0;0;0;0.67793455


__[x86 clang 14.0.0 / Github CI](https://github.com/pthom/float_performance/actions/runs/3059643887/jobs/4937258524)__
sizeof(float)=4 sizeof(double)=8 sizeof(long double)=12 => long double is 16 bytes!

|               ns/op |                op/s |    err% |     total | benchmark
|--------------------:|--------------------:|--------:|----------:|:----------
|        3,935,071.00 |              254.13 |    3.3% |      0.48 | `division_float`
|        4,373,824.10 |              228.63 |    3.6% |      0.51 | `division_double`
|        4,219,868.09 |              236.97 |    2.7% |      0.51 | `division_long_double`
|          374,164.91 |            2,672.62 |    5.8% |      0.07 | `trig_float`
|          992,512.27 |            1,007.54 |   12.0% |      0.12 | `trig_double`
|        8,264,253.83 |              121.00 |    2.3% |      1.00 | `trig_long_double`

"title";"name";"unit";"batch";"elapsed";"error %";"instructions";"branches";"branch misses";"total"
"benchmark";"division_float";"op";1;0.003935071;0.033345808975359;0;0;0;0.47665973
"benchmark";"division_double";"op";1;0.0043738241;0.0357655415599758;0;0;0;0.509522235
"benchmark";"division_long_double";"op";1;0.00421986809090909;0.026671826795245;0;0;0;0.50799493
"benchmark";"trig_float";"op";1;0.000374164909090909;0.0575868170008441;0;0;0;0.06532921
"benchmark";"trig_double";"op";1;0.000992512272727273;0.120441100327597;0;0;0;0.123903197
"benchmark";"trig_long_double";"op";1;0.00826425383333333;0.0232770499839871;0;0;0;1.004404554



__[x86-64 icc 2021.6.0](https://godbolt.org/z/Yzdqbev9h)__ (ICC Classic - Intel® C++ Compiler Classic)
sizeof(float)=4 sizeof(double)=8 sizeof(long double)=16 => long double is 16 bytes!

|               ns/op |                op/s |    err% |     total | benchmark
|--------------------:|--------------------:|--------:|----------:|:----------
|           13,427.05 |           74,476.54 |    1.0% |      0.02 | `division_float`
|           23,215.90 |           43,073.93 |    1.7% |      0.01 | `division_double`
|           97,110.00 |           10,297.60 |    6.1% |      0.01 | `division_long_double`
|          136,920.67 |            7,303.50 |    5.5% |      0.01 | `trig_float`
|          171,275.33 |            5,838.55 |    1.8% |      0.01 | `trig_double`
|        4,205,903.00 |              237.76 |    1.4% |      0.15 | `trig_long_double`

"title";"name";"unit";"batch";"elapsed";"error %";"instructions";"branches";"branch misses";"total"
"benchmark";"division_float";"op";1;1.34270465116279e-05;0.00960067554774988;0;0;0;0.01597943
"benchmark";"division_double";"op";1;2.32159e-05;0.0173274553284105;0;0;0;0.012417425
"benchmark";"division_long_double";"op";1;9.711e-05;0.0610950042978481;0;0;0;0.011688049
"benchmark";"trig_float";"op";1;0.000136920666666667;0.0552245899323084;0;0;0;0.012060597
"benchmark";"trig_double";"op";1;0.000171275333333333;0.0182000225470096;0;0;0;0.01219384
"benchmark";"trig_long_double";"op";1;0.004205903;0.0139065978109912;0;0;0;0.154625814



__[x86-64 icx 2022.1.0](https://godbolt.org/z/4zvjMKdeK)__ (ICX - Intel® oneAPI DPC++/C++ Compiler)
sizeof(float)=4 sizeof(double)=8 sizeof(long double)=16 => long double is 16 bytes!

|               ns/op |                op/s |    err% |     total | benchmark
|--------------------:|--------------------:|--------:|----------:|:----------
|           11,678.03 |           85,630.88 |    2.0% |      0.01 | `division_float`
|           18,143.90 |           55,114.93 |    1.1% |      0.01 | `division_double`
|        3,684,358.00 |              271.42 |    3.7% |      0.12 | `division_long_double`
|          144,726.38 |            6,909.59 |    8.1% |      0.01 | `trig_float`
|          153,413.14 |            6,518.35 |   22.7% |      0.01 | `trig_double`
|        2,765,784.75 |              361.56 |    1.2% |      0.09 | `trig_long_double`

"title";"name";"unit";"batch";"elapsed";"error %";"instructions";"branches";"branch misses";"total"
"benchmark";"division_float";"op";1;1.167803e-05;0.0200547345374931;0;0;0;0.011862383
"benchmark";"division_double";"op";1;1.81439047619048e-05;0.0114367376312272;0;0;0;0.011784588
"benchmark";"division_long_double";"op";1;0.003684358;0.0368605053443971;0;0;0;0.123133412
"benchmark";"trig_float";"op";1;0.000144726375;0.0808507227652106;0;0;0;0.011481411
"benchmark";"trig_double";"op";1;0.000153413142857143;0.226516304752973;0;0;0;0.010850133
"benchmark";"trig_long_double";"op";1;0.00276578475;0.0122982779464679;0;0;0;0.093118943


__Mac M1__
sizeof(float)=4 sizeof(double)=8 sizeof(long double)=8

|               ns/op |                op/s |    err% |     total | benchmark
|--------------------:|--------------------:|--------:|----------:|:----------
|           27,882.41 |           35,864.90 |    0.1% |      0.36 | `division_float`
|           33,305.09 |           30,025.44 |    0.1% |      0.40 | `division_double`
|           33,310.20 |           30,020.83 |    0.1% |      0.40 | `division_long_double`
|           74,783.16 |           13,371.99 |    0.1% |      0.89 | `trig_float`
|          101,933.91 |            9,810.28 |    0.3% |      1.22 | `trig_double`
|          101,655.13 |            9,837.18 |    0.1% |      1.21 | `trig_long_double`

"title";"name";"unit";"batch";"elapsed";"error %";"instructions";"branches";"branch misses";"total"
"benchmark";"division_float";"op";1;2.78824129400571e-05;0.000583149875405158;0;0;0;0.356812833
"benchmark";"division_double";"op";1;3.3305090376569e-05;0.000542991378877864;0;0;0;0.399037376
"benchmark";"division_long_double";"op";1;3.33102015638575e-05;0.000589656327911935;0;0;0;0.402350582
"benchmark";"trig_float";"op";1;7.47831589921807e-05;0.000709593133334645;0;0;0;0.894357751
"benchmark";"trig_double";"op";1;0.000101933914418605;0.003121054420593;0;0;0;1.222062916
"benchmark";"trig_long_double";"op";1;0.000101655125523013;0.000883494931197019;0;0;0;1.214481917