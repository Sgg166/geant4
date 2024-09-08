cmake_minimum_required(VERSION 3.16)
project(Geant4Example)

find_package(Geant4 REQUIRED)

add_executable(main main.cc)
target_link_libraries(main ${Geant4_LIBRARIES})


