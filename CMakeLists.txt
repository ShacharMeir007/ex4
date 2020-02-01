cmake_minimum_required(VERSION 3.15)
project(ex4)

set(CMAKE_CXX_STANDARD 11)

add_executable(ex4 main.cpp server_side/Main.cpp server_side/Main.h server_side/Server.cpp server_side/Server.h server_side/MySerialServer.cpp server_side/MySerialServer.h server_side/ClientHandler.cpp server_side/ClientHandler.h server_side/MyTestClientHandler.cpp server_side/MyTestClientHandler.h server_side/CacheManager.cpp server_side/CacheManager.h server_side/Solver.cpp server_side/Solver.h server_side/FileCacheManager.cpp server_side/FileCacheManager.h server_side/StringReverser.cpp server_side/StringReverser.h algorithms/Searchable.h algorithms/State.cpp algorithms/State.h algorithms/Searcher.h algorithms/Solution.cpp algorithms/Solution.h algorithms/BestFirstSearch.cpp algorithms/BestFirstSearch.h algorithms/Heap.cpp algorithms/Heap.h algorithms/HeapSearcher.cpp algorithms/HeapSearcher.h server_side/MyParallelServer.cpp server_side/MyParallelServer.h Solutions/StringSolution.cpp Solutions/StringSolution.h)
