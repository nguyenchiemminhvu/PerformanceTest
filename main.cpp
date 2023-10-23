#include "performancetest.h"
#include <iostream>
#include <vector>
#include <algorithm>

void foo()
{
    std::vector<int> v(10000, 0);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] > v[j])
            {
                std::swap(v[i], v[j]);
            }
        }
    }
}

void bar()
{
    std::vector<int> v(10000, 0);
    std::sort(v.begin(), v.end());
}

int main()
{
    PerformanceTest::run(1, foo, bar);

    return 0;
}