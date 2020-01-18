cmake_minimum_required(VERSION 3.15)
project(ex4)

set(CMAKE_CXX_STANDARD 11)

add_executable(ex4 main.cpp server_side/Server.cpp server_side/Server.h server_side/MySerialServer.cpp server_side/MySerialServer.h server_side/ClientHandler.cpp server_side/ClientHandler.h server_side/MyTestClientHandler.cpp server_side/MyTestClientHandler.h server_side/CacheManager.cpp server_side/CacheManager.h server_side/Problem.cpp server_side/Problem.h server_side/Solution.cpp server_side/Solution.h server_side/Solver.cpp server_side/Solver.h server_side/FileCacheManager.cpp server_side/FileCacheManager.h)