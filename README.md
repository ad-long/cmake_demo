# contains
cmake project demo, contains:
- shared lib
- static lib
- source code lib
- example app what shows how to use lib

# build
``` shell
# mkdir build
# cd build
# cmake ..
# make
```

# package
``` shell
# cd ..
# mkdir run
# bash pack.sh build/example/example  ./run
```

# run
``` shell
# export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/home/cmake_demo/run
# ./run/example
```
