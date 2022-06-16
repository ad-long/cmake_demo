#include <iostream>
#include "../include/MyLog.h"

namespace cmake_demo::shared_lib
{
    void MyLog::debug(const string &msg)
    {
        std::cout << msg << std::endl;
    }
}