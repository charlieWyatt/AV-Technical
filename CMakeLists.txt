cmake_minimum_required(VERSION 3.8)
project(nmp)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_executable(${PROJECT_NAME} main.cpp)
add_dependencies(${PROJECT_NAME} gtest)

################################
# GTest
################################
# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# not sure if the bottom 3 lines are needed
#enable_testing()
#include(GoogleTest)
#gtest_discover_tests(${PROJECT_NAME})

################################
# End GTest
################################

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

target_link_libraries(
  ${PROJECT_NAME}
  PRIVATE
  gtest_main
)


target_link_libraries(
  ${PROJECT_NAME} 
  PRIVATE
  Threads::Threads
)
