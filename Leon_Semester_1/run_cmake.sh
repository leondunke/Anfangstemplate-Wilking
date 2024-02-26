#!/bin/bash
cmake -S. -B build -DCMAKE_BUILD_TYPE=DEBUG -G "Unix Makefiles" -D CMAKE_C_COMPILER=gcc -D CMAKE_CXX_COMPILER=gcc++