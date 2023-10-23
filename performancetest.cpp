#include "performancetest.h"
#include "timer.h"

#include <iostream>

void PerformanceTest::run(int nTime, callback_function func, const char* func_name)
{
    GetTimer()->setType(Timer::DurationType::MILISECONDS);

    if (func)
    {
        if (func_name)
        {
            std::cout << "Run " << func_name << "....... ";
        }

        GetTimer()->start();
        for (int i = 0; i < nTime; i++)
        {
            func();
        }
        GetTimer()->stop();
    }
}

void PerformanceTest::run(int nTime, callback_function normalFunc, callback_function optimizedFunc)
{
    GetTimer()->setType(Timer::DurationType::MILISECONDS);

    if (normalFunc)
    {
        std::cout << "Run normal function...... ";
        GetTimer()->start();

        for (int i = 0; i < nTime; i++)
        {
            normalFunc();
        }

        GetTimer()->stop();
    }

    if (optimizedFunc)
    {
        std::cout << "Run optimized function... ";
        GetTimer()->start();

        for (int i = 0; i < nTime; i++)
        {
            optimizedFunc();
        }

        GetTimer()->stop();
    }
}
