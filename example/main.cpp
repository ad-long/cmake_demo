#include <iostream>
#include "../src_lib/Timestamp.hpp"
using cmake_demo::src_lib::Timestamp;

#include "../static_lib/include/MyMath.h"
using cmake_demo::static_lib::MyMath;

#include "../shared_lib/include/MyLog.h"
using cmake_demo::shared_lib::MyLog;

int main(int argc, char *argv[])
{
    std::cout << "now ts is: " << Timestamp::Now() << std::endl;
    std::cout << "my math add: " << MyMath().Add(1,2) << std::endl;
    MyLog().debug("my log");
}