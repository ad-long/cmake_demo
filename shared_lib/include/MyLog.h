#pragma once
#include <string>
using std::string;

namespace cmake_demo::shared_lib
{
    class MyLog
    {
    public:
        void debug(const string &msg);
    };
}