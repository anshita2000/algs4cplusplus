cmake_minimum_required(VERSION 3.8)
project(24_DirectedEulerianPath)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp ../head/Graph.h ../head/GraphGenerator.h ../head/DepthFirstSearch.h ../head/EulerianCycle.h ../head/EulerianPath.h ../head/SymbolGraph.h)
add_executable(24_DirectedEulerianPath ${SOURCE_FILES})