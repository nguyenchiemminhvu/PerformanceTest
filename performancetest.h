#ifndef PERFORMANCETEST_H
#define PERFORMANCETEST_H

#define N_TIME 1000000

typedef void (*callback_function)(void);

class PerformanceTest
{
public:
    static void run(int nTime, callback_function func, const char* func_name = nullptr);
    static void run(int nTime, callback_function normalFunc, callback_function optimizedFunc);
};

#endif // PERFORMANCETEST_H
