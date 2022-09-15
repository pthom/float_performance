
__[x64 msvc v19.patest](https://godbolt.org/z/n9EE6Y5z9)__
sizeof(float)=4 sizeof(double)=8 sizeof(long double)=8

|               ns/op |                op/s |    err% |     total | benchmark
|--------------------:|--------------------:|--------:|----------:|:----------
|           45,346.32 |           22,052.51 |    0.5% |      0.11 | `division_float`
|           50,126.34 |           19,949.59 |    1.4% |      0.12 | `division_double`
|           46,299.16 |           21,598.66 |    0.4% |      0.11 | `division_long_double`
|          328,425.76 |            3,044.83 |    9.6% |      0.76 | `trig_float`
|          329,647.62 |            3,033.54 |    5.8% |      0.82 | `trig_double`
|          420,855.65 |            2,376.11 |    3.4% |      0.97 | `trig_long_double`


__[x86 msvc v19.patest](https://godbolt.org/z/d8vcY865b)__
sizeof(float)=4 sizeof(double)=8 sizeof(long double)=8

|               ns/op |                op/s |    err% |     total | benchmark
|--------------------:|--------------------:|--------:|----------:|:----------
|           45,911.22 |           21,781.17 |    0.3% |      0.11 | `division_float`
|           45,709.76 |           21,877.17 |    0.2% |      0.11 | `division_double`
|           45,844.10 |           21,813.06 |    0.6% |      0.12 | `division_long_double`
|          507,727.18 |            1,969.56 |    0.7% |      1.21 | `trig_float`
|          514,982.01 |            1,941.82 |    0.5% |      1.23 | `trig_double`
|          516,628.82 |            1,935.63 |    0.3% |      1.23 | `trig_long_double`


__[x86-64 gcc trunk](https://godbolt.org/z/oeGYz8qPx)__
sizeof(float)=4 sizeof(double)=8 sizeof(long double)=16 => long double is 16 bytes!

|               ns/op |                op/s |    err% |     total | benchmark
|--------------------:|--------------------:|--------:|----------:|:----------
|           36,794.29 |           27,178.13 |    2.7% |      0.01 | `division_float`
|           48,381.68 |           20,668.98 |    3.1% |      0.01 | `division_double`
|        4,228,500.73 |              236.49 |    3.3% |      0.52 | `division_long_double`
|          315,223.18 |            3,172.36 |   13.4% |      0.53 | `trig_float`
|          535,227.92 |            1,868.36 |    4.3% |      0.07 | `trig_double`
|        4,921,907.55 |              203.17 |    2.7% |      1.15 | `trig_long_double`


__[x86-64 clang 14.0.0](https://godbolt.org/z/9sx7f6sr5)__
sizeof(float)=4 sizeof(double)=8 sizeof(long double)=16 => long double is 16 bytes!


|               ns/op |                op/s |    err% |     total | benchmark
|--------------------:|--------------------:|--------:|----------:|:----------
|           50,904.83 |           19,644.50 |    4.7% |      0.02 | `division_float`
|           47,291.69 |           21,145.37 |    4.1% |      0.01 | `division_double`
|        4,008,080.90 |              249.50 |    5.8% |      0.59 | `division_long_double`
|          371,231.91 |            2,693.73 |    1.7% |      0.37 | `trig_float`
|          584,144.08 |            1,711.91 |    1.6% |      0.07 | `trig_double`
|        6,782,021.09 |              147.45 |    6.1% |      1.37 | `trig_long_double`


__[x86-64 Zapcc 190308](https://godbolt.org/z/rorKozK1W)__
sizeof(float)=4 sizeof(double)=8 sizeof(long double)=16 => long double is 16 bytes!

|               ns/op |                op/s |    err% |     total | benchmark
|--------------------:|--------------------:|--------:|----------:|:----------
|           35,280.03 |           28,344.64 |    1.1% |      0.01 | `division_float`
|           33,517.62 |           29,835.05 |    0.5% |      0.01 | `division_double`
|        3,267,227.09 |              306.07 |    0.0% |      0.39 | `division_long_double`
|          250,942.91 |            3,984.97 |    1.3% |      0.03 | `trig_float`
|          362,298.45 |            2,760.16 |    0.9% |      0.05 | `trig_double`
|        8,549,484.30 |              116.97 |   16.2% |      1.88 | `trig_long_double`

__[x86-64 icc 2021.6.0](https://godbolt.org/z/6Px6bM3fz)__ (ICC Classic - Intel® C++ Compiler Classic)
sizeof(float)=4 sizeof(double)=8 sizeof(long double)=16 => long double is 16 bytes!

|               ns/op |                op/s |    err% |     total | benchmark
|--------------------:|--------------------:|--------:|----------:|:----------
|           13,038.26 |           76,697.35 |    4.3% |      0.01 | `division_float`
|           26,958.58 |           37,093.94 |   10.5% |      0.01 | `division_double`
|           61,531.58 |           16,251.82 |   11.8% |      0.01 | `division_long_double`
|          108,661.00 |            9,202.93 |   19.8% |      0.01 | `trig_float`
|          121,670.58 |            8,218.91 |    3.1% |      0.02 | `trig_double`
|        4,067,952.33 |              245.82 |    6.4% |      0.53 | `trig_long_double`


__[x86-64 icx 2022.1.0](https://godbolt.org/z/b8E7bzG8v)__ (ICX - Intel® oneAPI DPC++/C++ Compiler, seems newer)
sizeof(float)=4 sizeof(double)=8 sizeof(long double)=16 => long double is 16 bytes!


|               ns/op |                op/s |    err% |     total | benchmark
|--------------------:|--------------------:|--------:|----------:|:----------
|           14,069.68 |           71,074.83 |    3.9% |      0.01 | `division_float`
|           23,162.26 |           43,173.68 |    1.5% |      0.01 | `division_double`
|           58,279.29 |           17,158.76 |    6.7% |      0.01 | `division_long_double`
|          136,051.40 |            7,350.16 |    3.8% |      0.02 | `trig_float`
|          156,243.17 |            6,400.28 |    1.2% |      0.02 | `trig_double`
|        5,194,439.00 |              192.51 |   19.3% |      1.00 | `trig_long_double`

__Mac M1__

sizeof(float)=4 sizeof(double)=8 sizeof(long double)=8

|               ns/op |                op/s |    err% |     total | benchmark
|--------------------:|--------------------:|--------:|----------:|:----------
|           27,928.48 |           35,805.75 |    0.2% |      0.36 | `division_float`
|           33,352.87 |           29,982.43 |    0.2% |      0.40 | `division_double`
|           33,323.96 |           30,008.44 |    0.1% |      0.40 | `division_long_double`
|           74,764.71 |           13,375.29 |    0.1% |      0.90 | `trig_float`
|          101,620.46 |            9,840.54 |    0.0% |      1.21 | `trig_double`
|          101,978.99 |            9,805.94 |    0.2% |      1.22 | `trig_long_double`

