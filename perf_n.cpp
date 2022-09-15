#define ANKERL_NANOBENCH_IMPLEMENT
#include <nanobench.h>
#include <stdio.h>
#include <math.h>
#include <random>


#define LOOP_SIZE 10000
#define NB_CALLS 100


// Typical C++ gibberish to return a true random value between 0 and 1
template<typename T>
T rand_seed()
{
    std::random_device generator;
    std::uniform_real_distribution<T> distribution((T)0., (T)1.);
    T r = distribution(generator);
    return r;
}

// Exercised function, call trig function, with an unknown seed to defeat the optimizer
template<typename T>
T exercise_type()
{
    T r = (T)0.;
    T seed = rand_seed<T>();
    for (int i = 0; i < LOOP_SIZE; ++ i)
        r += cos((T)i * seed);
    return r;
}


template<typename T>
void run_benchmark()
{
    T r2 = (T)0.;
    for (int i = 0; i < NB_CALLS; ++ i)
        r2 += exercise_type<T>();
}

int main()
{
    ankerl::nanobench::Bench().epochs(1000).run("double", [&] {
        run_benchmark<double>();
    });
}
