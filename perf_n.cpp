#define ANKERL_NANOBENCH_IMPLEMENT
#include <nanobench.h>
// #include "https://raw.githubusercontent.com/martinus/nanobench/master/src/include/nanobench.h"

#include <stdio.h>
#include <math.h>
#include <random>


#define NB_FLOAT_LOOPS 30000

ankerl::nanobench::Rng gRandomGenerator;


template<typename T>
void exercise_division()
{
    T seed = (T)gRandomGenerator.uniform01();

    T r = (T)0;
    T one = (T)1.;
    T two = (T) 2.;
    for (int i = 0; i < NB_FLOAT_LOOPS; ++ i)
    {
        T x = (T)i;
        r = r + (x - one + seed ) / (x - two);
    }
        
    ankerl::nanobench::doNotOptimizeAway(r);
}


template<typename T>
void exercise_trigonometry()
{
    T seed = (T)gRandomGenerator.uniform01();

    T r = (T)0;
    for (int i = 0; i < NB_FLOAT_LOOPS; ++ i)
    {
        T x = (T)i;
        r = r + cos(x * seed);
    }        
    ankerl::nanobench::doNotOptimizeAway(r);
}


int main()
{
    printf("sizeof(float)=%zu sizeof(double)=%zu sizeof(long double)=%zu", sizeof(float), sizeof(double), sizeof(long double));
    if (sizeof(long double) > sizeof(double))
        printf(" => long double is 16 bytes!");
    printf("\n");

    uint64_t minEpochs = 1000;
    

    ankerl::nanobench::Bench().minEpochIterations(minEpochs).run("division_float", [&] {
        exercise_division<float>();
    });
    ankerl::nanobench::Bench().minEpochIterations(minEpochs).run("division_double", [&] {
        exercise_division<double>();
    });
    ankerl::nanobench::Bench().minEpochIterations(minEpochs).run("division_long_double", [&] {
        exercise_division<long double>();
    });


    ankerl::nanobench::Bench().minEpochIterations(minEpochs).run("trig_float", [&] {
        exercise_trigonometry<float>();
    });
    ankerl::nanobench::Bench().minEpochIterations(minEpochs).run("trig_double", [&] {
        exercise_trigonometry<double>();
    });
    ankerl::nanobench::Bench().minEpochIterations(minEpochs).run("trig_long_double", [&] {
        exercise_trigonometry<long double>();
    });
}
