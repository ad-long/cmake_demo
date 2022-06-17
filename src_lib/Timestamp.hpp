#pragma once
#include <string>
using std::string;
#include <chrono>

namespace cmake_demo::src_lib
{
    class Timestamp
    {
    public:
        static string Now()
        {
            long long ms_since_epoch = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
            return std::to_string(ms_since_epoch);
        }
    };
}