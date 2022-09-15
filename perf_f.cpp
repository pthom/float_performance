// include FunctionalPlus because it provides a simple benchmark via an amalgamated header (which Google Benchmark does not provide)
// #include "https://raw.githubusercontent.com/Dobiasd/FunctionalPlus/master/include_all_in_one/include/fplus/fplus.hpp"
#include <fplus/fplus.hpp>
#include <stdio.h>
#include <math.h>
#include <random>


#define LOOP_SIZE 10000
#define NB_CALLS 10000

fplus::benchmark_session benchmark_sess;


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
void run_benchmark(const char* type_name)
{
    // Create a benched function that output its timings to benchmark_sess
    auto exercise_type_bench = fplus::make_benchmark_function(
        benchmark_sess,
        std::string("exercise_") + type_name, 
        exercise_type<T>);

    T r2 = (T)0.;
    for (int i = 0; i < NB_CALLS; ++ i)
        r2 += exercise_type_bench();

    printf("run_benchmark on %s : size=%zu\n", type_name, sizeof(T));
}


int main()
{
    run_benchmark<float>("float");
    run_benchmark<double>("double");
    run_benchmark<long double>("long double");
    printf("%s\n\n", benchmark_sess.report().c_str());
}
