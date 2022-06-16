#include <iostream>
#include "../include/MyMath.h"

namespace cmake_demo::static_lib
{
    long MyMath::Add(long a, long b)
    {
        std::cout << "long a+b" << std::endl;
        return a + b;
    }
}