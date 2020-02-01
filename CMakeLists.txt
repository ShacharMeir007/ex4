cmake_minimum_required(VERSION 3.15)
project(ex4)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp func.cpp)
add_executable(ex4 main.cpp Searchable.h State.cpp State.h Searcher.h Solution.cpp Solution.h BestFirstSearch.h BestFirstSearch.cpp Heap.cpp Heap.h HeapSearcher.cpp HeapSearcher.h AStar.cpp AStar.h Matrix.cpp Matrix.h)