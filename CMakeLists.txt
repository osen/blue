cmake_minimum_required(VERSION 2.6)
project(COOLENG)

include_directories(
  src
)

add_executable(demo
  src/demo/main.cpp
)

target_link_libraries(demo cooleng)

#
# .h files included to show in VS
add_library(cooleng
  src/cooleng/Core.cpp
  src/cooleng/Core.h
)

