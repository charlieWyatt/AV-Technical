cmake_minimum_required(VERSION 3.8)
project(nmp)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_optio(-Wall -Wextra -Wpedantic)
endif()

