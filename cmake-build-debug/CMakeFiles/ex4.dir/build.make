# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = "/Users/shacharmeir/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/193.6015.37/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/shacharmeir/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/193.6015.37/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/shacharmeir/CLionProjects/ex4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/shacharmeir/CLionProjects/ex4/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex4.dir/flags.make

CMakeFiles/ex4.dir/main.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shacharmeir/CLionProjects/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex4.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/main.cpp.o -c /Users/shacharmeir/CLionProjects/ex4/main.cpp

CMakeFiles/ex4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shacharmeir/CLionProjects/ex4/main.cpp > CMakeFiles/ex4.dir/main.cpp.i

CMakeFiles/ex4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shacharmeir/CLionProjects/ex4/main.cpp -o CMakeFiles/ex4.dir/main.cpp.s

CMakeFiles/ex4.dir/server_side/MyParallelServer.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/server_side/MyParallelServer.cpp.o: ../server_side/MyParallelServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shacharmeir/CLionProjects/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ex4.dir/server_side/MyParallelServer.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/server_side/MyParallelServer.cpp.o -c /Users/shacharmeir/CLionProjects/ex4/server_side/MyParallelServer.cpp

CMakeFiles/ex4.dir/server_side/MyParallelServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/server_side/MyParallelServer.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shacharmeir/CLionProjects/ex4/server_side/MyParallelServer.cpp > CMakeFiles/ex4.dir/server_side/MyParallelServer.cpp.i

CMakeFiles/ex4.dir/server_side/MyParallelServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/server_side/MyParallelServer.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shacharmeir/CLionProjects/ex4/server_side/MyParallelServer.cpp -o CMakeFiles/ex4.dir/server_side/MyParallelServer.cpp.s

CMakeFiles/ex4.dir/server_side/Server.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/server_side/Server.cpp.o: ../server_side/Server.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shacharmeir/CLionProjects/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ex4.dir/server_side/Server.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/server_side/Server.cpp.o -c /Users/shacharmeir/CLionProjects/ex4/server_side/Server.cpp

CMakeFiles/ex4.dir/server_side/Server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/server_side/Server.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shacharmeir/CLionProjects/ex4/server_side/Server.cpp > CMakeFiles/ex4.dir/server_side/Server.cpp.i

CMakeFiles/ex4.dir/server_side/Server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/server_side/Server.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shacharmeir/CLionProjects/ex4/server_side/Server.cpp -o CMakeFiles/ex4.dir/server_side/Server.cpp.s

CMakeFiles/ex4.dir/server_side/MySerialServer.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/server_side/MySerialServer.cpp.o: ../server_side/MySerialServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shacharmeir/CLionProjects/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ex4.dir/server_side/MySerialServer.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/server_side/MySerialServer.cpp.o -c /Users/shacharmeir/CLionProjects/ex4/server_side/MySerialServer.cpp

CMakeFiles/ex4.dir/server_side/MySerialServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/server_side/MySerialServer.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shacharmeir/CLionProjects/ex4/server_side/MySerialServer.cpp > CMakeFiles/ex4.dir/server_side/MySerialServer.cpp.i

CMakeFiles/ex4.dir/server_side/MySerialServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/server_side/MySerialServer.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shacharmeir/CLionProjects/ex4/server_side/MySerialServer.cpp -o CMakeFiles/ex4.dir/server_side/MySerialServer.cpp.s

CMakeFiles/ex4.dir/server_side/ClientHandler.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/server_side/ClientHandler.cpp.o: ../server_side/ClientHandler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shacharmeir/CLionProjects/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ex4.dir/server_side/ClientHandler.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/server_side/ClientHandler.cpp.o -c /Users/shacharmeir/CLionProjects/ex4/server_side/ClientHandler.cpp

CMakeFiles/ex4.dir/server_side/ClientHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/server_side/ClientHandler.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shacharmeir/CLionProjects/ex4/server_side/ClientHandler.cpp > CMakeFiles/ex4.dir/server_side/ClientHandler.cpp.i

CMakeFiles/ex4.dir/server_side/ClientHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/server_side/ClientHandler.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shacharmeir/CLionProjects/ex4/server_side/ClientHandler.cpp -o CMakeFiles/ex4.dir/server_side/ClientHandler.cpp.s

CMakeFiles/ex4.dir/server_side/MyTestClientHandler.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/server_side/MyTestClientHandler.cpp.o: ../server_side/MyTestClientHandler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shacharmeir/CLionProjects/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ex4.dir/server_side/MyTestClientHandler.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/server_side/MyTestClientHandler.cpp.o -c /Users/shacharmeir/CLionProjects/ex4/server_side/MyTestClientHandler.cpp

CMakeFiles/ex4.dir/server_side/MyTestClientHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/server_side/MyTestClientHandler.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shacharmeir/CLionProjects/ex4/server_side/MyTestClientHandler.cpp > CMakeFiles/ex4.dir/server_side/MyTestClientHandler.cpp.i

CMakeFiles/ex4.dir/server_side/MyTestClientHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/server_side/MyTestClientHandler.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shacharmeir/CLionProjects/ex4/server_side/MyTestClientHandler.cpp -o CMakeFiles/ex4.dir/server_side/MyTestClientHandler.cpp.s

CMakeFiles/ex4.dir/server_side/CacheManager.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/server_side/CacheManager.cpp.o: ../server_side/CacheManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shacharmeir/CLionProjects/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/ex4.dir/server_side/CacheManager.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/server_side/CacheManager.cpp.o -c /Users/shacharmeir/CLionProjects/ex4/server_side/CacheManager.cpp

CMakeFiles/ex4.dir/server_side/CacheManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/server_side/CacheManager.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shacharmeir/CLionProjects/ex4/server_side/CacheManager.cpp > CMakeFiles/ex4.dir/server_side/CacheManager.cpp.i

CMakeFiles/ex4.dir/server_side/CacheManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/server_side/CacheManager.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shacharmeir/CLionProjects/ex4/server_side/CacheManager.cpp -o CMakeFiles/ex4.dir/server_side/CacheManager.cpp.s

CMakeFiles/ex4.dir/server_side/Solver.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/server_side/Solver.cpp.o: ../server_side/Solver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shacharmeir/CLionProjects/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/ex4.dir/server_side/Solver.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/server_side/Solver.cpp.o -c /Users/shacharmeir/CLionProjects/ex4/server_side/Solver.cpp

CMakeFiles/ex4.dir/server_side/Solver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/server_side/Solver.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shacharmeir/CLionProjects/ex4/server_side/Solver.cpp > CMakeFiles/ex4.dir/server_side/Solver.cpp.i

CMakeFiles/ex4.dir/server_side/Solver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/server_side/Solver.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shacharmeir/CLionProjects/ex4/server_side/Solver.cpp -o CMakeFiles/ex4.dir/server_side/Solver.cpp.s

CMakeFiles/ex4.dir/server_side/FileCacheManager.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/server_side/FileCacheManager.cpp.o: ../server_side/FileCacheManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shacharmeir/CLionProjects/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/ex4.dir/server_side/FileCacheManager.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/server_side/FileCacheManager.cpp.o -c /Users/shacharmeir/CLionProjects/ex4/server_side/FileCacheManager.cpp

CMakeFiles/ex4.dir/server_side/FileCacheManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/server_side/FileCacheManager.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shacharmeir/CLionProjects/ex4/server_side/FileCacheManager.cpp > CMakeFiles/ex4.dir/server_side/FileCacheManager.cpp.i

CMakeFiles/ex4.dir/server_side/FileCacheManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/server_side/FileCacheManager.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shacharmeir/CLionProjects/ex4/server_side/FileCacheManager.cpp -o CMakeFiles/ex4.dir/server_side/FileCacheManager.cpp.s

CMakeFiles/ex4.dir/server_side/StringReverser.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/server_side/StringReverser.cpp.o: ../server_side/StringReverser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shacharmeir/CLionProjects/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/ex4.dir/server_side/StringReverser.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/server_side/StringReverser.cpp.o -c /Users/shacharmeir/CLionProjects/ex4/server_side/StringReverser.cpp

CMakeFiles/ex4.dir/server_side/StringReverser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/server_side/StringReverser.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shacharmeir/CLionProjects/ex4/server_side/StringReverser.cpp > CMakeFiles/ex4.dir/server_side/StringReverser.cpp.i

CMakeFiles/ex4.dir/server_side/StringReverser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/server_side/StringReverser.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shacharmeir/CLionProjects/ex4/server_side/StringReverser.cpp -o CMakeFiles/ex4.dir/server_side/StringReverser.cpp.s

CMakeFiles/ex4.dir/server_side/Main.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/server_side/Main.cpp.o: ../server_side/Main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shacharmeir/CLionProjects/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/ex4.dir/server_side/Main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/server_side/Main.cpp.o -c /Users/shacharmeir/CLionProjects/ex4/server_side/Main.cpp

CMakeFiles/ex4.dir/server_side/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/server_side/Main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shacharmeir/CLionProjects/ex4/server_side/Main.cpp > CMakeFiles/ex4.dir/server_side/Main.cpp.i

CMakeFiles/ex4.dir/server_side/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/server_side/Main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shacharmeir/CLionProjects/ex4/server_side/Main.cpp -o CMakeFiles/ex4.dir/server_side/Main.cpp.s

CMakeFiles/ex4.dir/AStar.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/AStar.cpp.o: ../AStar.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shacharmeir/CLionProjects/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/ex4.dir/AStar.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/AStar.cpp.o -c /Users/shacharmeir/CLionProjects/ex4/AStar.cpp

CMakeFiles/ex4.dir/AStar.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/AStar.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shacharmeir/CLionProjects/ex4/AStar.cpp > CMakeFiles/ex4.dir/AStar.cpp.i

CMakeFiles/ex4.dir/AStar.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/AStar.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shacharmeir/CLionProjects/ex4/AStar.cpp -o CMakeFiles/ex4.dir/AStar.cpp.s

CMakeFiles/ex4.dir/BestFirstSearch.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/BestFirstSearch.cpp.o: ../BestFirstSearch.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shacharmeir/CLionProjects/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/ex4.dir/BestFirstSearch.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/BestFirstSearch.cpp.o -c /Users/shacharmeir/CLionProjects/ex4/BestFirstSearch.cpp

CMakeFiles/ex4.dir/BestFirstSearch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/BestFirstSearch.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shacharmeir/CLionProjects/ex4/BestFirstSearch.cpp > CMakeFiles/ex4.dir/BestFirstSearch.cpp.i

CMakeFiles/ex4.dir/BestFirstSearch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/BestFirstSearch.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shacharmeir/CLionProjects/ex4/BestFirstSearch.cpp -o CMakeFiles/ex4.dir/BestFirstSearch.cpp.s

CMakeFiles/ex4.dir/Heap.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/Heap.cpp.o: ../Heap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shacharmeir/CLionProjects/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/ex4.dir/Heap.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/Heap.cpp.o -c /Users/shacharmeir/CLionProjects/ex4/Heap.cpp

CMakeFiles/ex4.dir/Heap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Heap.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shacharmeir/CLionProjects/ex4/Heap.cpp > CMakeFiles/ex4.dir/Heap.cpp.i

CMakeFiles/ex4.dir/Heap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Heap.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shacharmeir/CLionProjects/ex4/Heap.cpp -o CMakeFiles/ex4.dir/Heap.cpp.s

CMakeFiles/ex4.dir/HeapSearcher.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/HeapSearcher.cpp.o: ../HeapSearcher.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shacharmeir/CLionProjects/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/ex4.dir/HeapSearcher.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/HeapSearcher.cpp.o -c /Users/shacharmeir/CLionProjects/ex4/HeapSearcher.cpp

CMakeFiles/ex4.dir/HeapSearcher.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/HeapSearcher.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shacharmeir/CLionProjects/ex4/HeapSearcher.cpp > CMakeFiles/ex4.dir/HeapSearcher.cpp.i

CMakeFiles/ex4.dir/HeapSearcher.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/HeapSearcher.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shacharmeir/CLionProjects/ex4/HeapSearcher.cpp -o CMakeFiles/ex4.dir/HeapSearcher.cpp.s

CMakeFiles/ex4.dir/Matrix.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/Matrix.cpp.o: ../Matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shacharmeir/CLionProjects/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/ex4.dir/Matrix.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/Matrix.cpp.o -c /Users/shacharmeir/CLionProjects/ex4/Matrix.cpp

CMakeFiles/ex4.dir/Matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Matrix.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shacharmeir/CLionProjects/ex4/Matrix.cpp > CMakeFiles/ex4.dir/Matrix.cpp.i

CMakeFiles/ex4.dir/Matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Matrix.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shacharmeir/CLionProjects/ex4/Matrix.cpp -o CMakeFiles/ex4.dir/Matrix.cpp.s

CMakeFiles/ex4.dir/Solution.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/Solution.cpp.o: ../Solution.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shacharmeir/CLionProjects/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/ex4.dir/Solution.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/Solution.cpp.o -c /Users/shacharmeir/CLionProjects/ex4/Solution.cpp

CMakeFiles/ex4.dir/Solution.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Solution.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shacharmeir/CLionProjects/ex4/Solution.cpp > CMakeFiles/ex4.dir/Solution.cpp.i

CMakeFiles/ex4.dir/Solution.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Solution.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shacharmeir/CLionProjects/ex4/Solution.cpp -o CMakeFiles/ex4.dir/Solution.cpp.s

CMakeFiles/ex4.dir/State.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/State.cpp.o: ../State.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shacharmeir/CLionProjects/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building CXX object CMakeFiles/ex4.dir/State.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/State.cpp.o -c /Users/shacharmeir/CLionProjects/ex4/State.cpp

CMakeFiles/ex4.dir/State.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/State.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shacharmeir/CLionProjects/ex4/State.cpp > CMakeFiles/ex4.dir/State.cpp.i

CMakeFiles/ex4.dir/State.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/State.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shacharmeir/CLionProjects/ex4/State.cpp -o CMakeFiles/ex4.dir/State.cpp.s

CMakeFiles/ex4.dir/adapters/SolverSearcherAdapter.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/adapters/SolverSearcherAdapter.cpp.o: ../adapters/SolverSearcherAdapter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shacharmeir/CLionProjects/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building CXX object CMakeFiles/ex4.dir/adapters/SolverSearcherAdapter.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/adapters/SolverSearcherAdapter.cpp.o -c /Users/shacharmeir/CLionProjects/ex4/adapters/SolverSearcherAdapter.cpp

CMakeFiles/ex4.dir/adapters/SolverSearcherAdapter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/adapters/SolverSearcherAdapter.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shacharmeir/CLionProjects/ex4/adapters/SolverSearcherAdapter.cpp > CMakeFiles/ex4.dir/adapters/SolverSearcherAdapter.cpp.i

CMakeFiles/ex4.dir/adapters/SolverSearcherAdapter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/adapters/SolverSearcherAdapter.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shacharmeir/CLionProjects/ex4/adapters/SolverSearcherAdapter.cpp -o CMakeFiles/ex4.dir/adapters/SolverSearcherAdapter.cpp.s

CMakeFiles/ex4.dir/Problems/MatrixProblem.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/Problems/MatrixProblem.cpp.o: ../Problems/MatrixProblem.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shacharmeir/CLionProjects/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Building CXX object CMakeFiles/ex4.dir/Problems/MatrixProblem.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/Problems/MatrixProblem.cpp.o -c /Users/shacharmeir/CLionProjects/ex4/Problems/MatrixProblem.cpp

CMakeFiles/ex4.dir/Problems/MatrixProblem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Problems/MatrixProblem.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shacharmeir/CLionProjects/ex4/Problems/MatrixProblem.cpp > CMakeFiles/ex4.dir/Problems/MatrixProblem.cpp.i

CMakeFiles/ex4.dir/Problems/MatrixProblem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Problems/MatrixProblem.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shacharmeir/CLionProjects/ex4/Problems/MatrixProblem.cpp -o CMakeFiles/ex4.dir/Problems/MatrixProblem.cpp.s

CMakeFiles/ex4.dir/Problems/StringSolution.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/Problems/StringSolution.cpp.o: ../Problems/StringSolution.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shacharmeir/CLionProjects/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_21) "Building CXX object CMakeFiles/ex4.dir/Problems/StringSolution.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/Problems/StringSolution.cpp.o -c /Users/shacharmeir/CLionProjects/ex4/Problems/StringSolution.cpp

CMakeFiles/ex4.dir/Problems/StringSolution.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Problems/StringSolution.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shacharmeir/CLionProjects/ex4/Problems/StringSolution.cpp > CMakeFiles/ex4.dir/Problems/StringSolution.cpp.i

CMakeFiles/ex4.dir/Problems/StringSolution.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Problems/StringSolution.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shacharmeir/CLionProjects/ex4/Problems/StringSolution.cpp -o CMakeFiles/ex4.dir/Problems/StringSolution.cpp.s

CMakeFiles/ex4.dir/TextFunctions.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/TextFunctions.cpp.o: ../TextFunctions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shacharmeir/CLionProjects/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_22) "Building CXX object CMakeFiles/ex4.dir/TextFunctions.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/TextFunctions.cpp.o -c /Users/shacharmeir/CLionProjects/ex4/TextFunctions.cpp

CMakeFiles/ex4.dir/TextFunctions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/TextFunctions.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shacharmeir/CLionProjects/ex4/TextFunctions.cpp > CMakeFiles/ex4.dir/TextFunctions.cpp.i

CMakeFiles/ex4.dir/TextFunctions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/TextFunctions.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shacharmeir/CLionProjects/ex4/TextFunctions.cpp -o CMakeFiles/ex4.dir/TextFunctions.cpp.s

CMakeFiles/ex4.dir/Problems/ProblemCreator.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/Problems/ProblemCreator.cpp.o: ../Problems/ProblemCreator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shacharmeir/CLionProjects/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_23) "Building CXX object CMakeFiles/ex4.dir/Problems/ProblemCreator.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/Problems/ProblemCreator.cpp.o -c /Users/shacharmeir/CLionProjects/ex4/Problems/ProblemCreator.cpp

CMakeFiles/ex4.dir/Problems/ProblemCreator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Problems/ProblemCreator.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shacharmeir/CLionProjects/ex4/Problems/ProblemCreator.cpp > CMakeFiles/ex4.dir/Problems/ProblemCreator.cpp.i

CMakeFiles/ex4.dir/Problems/ProblemCreator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Problems/ProblemCreator.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shacharmeir/CLionProjects/ex4/Problems/ProblemCreator.cpp -o CMakeFiles/ex4.dir/Problems/ProblemCreator.cpp.s

CMakeFiles/ex4.dir/Problems/MatrixProblemCreator.cpp.o: CMakeFiles/ex4.dir/flags.make
CMakeFiles/ex4.dir/Problems/MatrixProblemCreator.cpp.o: ../Problems/MatrixProblemCreator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shacharmeir/CLionProjects/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_24) "Building CXX object CMakeFiles/ex4.dir/Problems/MatrixProblemCreator.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex4.dir/Problems/MatrixProblemCreator.cpp.o -c /Users/shacharmeir/CLionProjects/ex4/Problems/MatrixProblemCreator.cpp

CMakeFiles/ex4.dir/Problems/MatrixProblemCreator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Problems/MatrixProblemCreator.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shacharmeir/CLionProjects/ex4/Problems/MatrixProblemCreator.cpp > CMakeFiles/ex4.dir/Problems/MatrixProblemCreator.cpp.i

CMakeFiles/ex4.dir/Problems/MatrixProblemCreator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Problems/MatrixProblemCreator.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shacharmeir/CLionProjects/ex4/Problems/MatrixProblemCreator.cpp -o CMakeFiles/ex4.dir/Problems/MatrixProblemCreator.cpp.s

# Object files for target ex4
ex4_OBJECTS = \
"CMakeFiles/ex4.dir/main.cpp.o" \
"CMakeFiles/ex4.dir/server_side/MyParallelServer.cpp.o" \
"CMakeFiles/ex4.dir/server_side/Server.cpp.o" \
"CMakeFiles/ex4.dir/server_side/MySerialServer.cpp.o" \
"CMakeFiles/ex4.dir/server_side/ClientHandler.cpp.o" \
"CMakeFiles/ex4.dir/server_side/MyTestClientHandler.cpp.o" \
"CMakeFiles/ex4.dir/server_side/CacheManager.cpp.o" \
"CMakeFiles/ex4.dir/server_side/Solver.cpp.o" \
"CMakeFiles/ex4.dir/server_side/FileCacheManager.cpp.o" \
"CMakeFiles/ex4.dir/server_side/StringReverser.cpp.o" \
"CMakeFiles/ex4.dir/server_side/Main.cpp.o" \
"CMakeFiles/ex4.dir/AStar.cpp.o" \
"CMakeFiles/ex4.dir/BestFirstSearch.cpp.o" \
"CMakeFiles/ex4.dir/Heap.cpp.o" \
"CMakeFiles/ex4.dir/HeapSearcher.cpp.o" \
"CMakeFiles/ex4.dir/Matrix.cpp.o" \
"CMakeFiles/ex4.dir/Solution.cpp.o" \
"CMakeFiles/ex4.dir/State.cpp.o" \
"CMakeFiles/ex4.dir/adapters/SolverSearcherAdapter.cpp.o" \
"CMakeFiles/ex4.dir/Problems/MatrixProblem.cpp.o" \
"CMakeFiles/ex4.dir/Problems/StringSolution.cpp.o" \
"CMakeFiles/ex4.dir/TextFunctions.cpp.o" \
"CMakeFiles/ex4.dir/Problems/ProblemCreator.cpp.o" \
"CMakeFiles/ex4.dir/Problems/MatrixProblemCreator.cpp.o"

# External object files for target ex4
ex4_EXTERNAL_OBJECTS =

ex4: CMakeFiles/ex4.dir/main.cpp.o
ex4: CMakeFiles/ex4.dir/server_side/MyParallelServer.cpp.o
ex4: CMakeFiles/ex4.dir/server_side/Server.cpp.o
ex4: CMakeFiles/ex4.dir/server_side/MySerialServer.cpp.o
ex4: CMakeFiles/ex4.dir/server_side/ClientHandler.cpp.o
ex4: CMakeFiles/ex4.dir/server_side/MyTestClientHandler.cpp.o
ex4: CMakeFiles/ex4.dir/server_side/CacheManager.cpp.o
ex4: CMakeFiles/ex4.dir/server_side/Solver.cpp.o
ex4: CMakeFiles/ex4.dir/server_side/FileCacheManager.cpp.o
ex4: CMakeFiles/ex4.dir/server_side/StringReverser.cpp.o
ex4: CMakeFiles/ex4.dir/server_side/Main.cpp.o
ex4: CMakeFiles/ex4.dir/AStar.cpp.o
ex4: CMakeFiles/ex4.dir/BestFirstSearch.cpp.o
ex4: CMakeFiles/ex4.dir/Heap.cpp.o
ex4: CMakeFiles/ex4.dir/HeapSearcher.cpp.o
ex4: CMakeFiles/ex4.dir/Matrix.cpp.o
ex4: CMakeFiles/ex4.dir/Solution.cpp.o
ex4: CMakeFiles/ex4.dir/State.cpp.o
ex4: CMakeFiles/ex4.dir/adapters/SolverSearcherAdapter.cpp.o
ex4: CMakeFiles/ex4.dir/Problems/MatrixProblem.cpp.o
ex4: CMakeFiles/ex4.dir/Problems/StringSolution.cpp.o
ex4: CMakeFiles/ex4.dir/TextFunctions.cpp.o
ex4: CMakeFiles/ex4.dir/Problems/ProblemCreator.cpp.o
ex4: CMakeFiles/ex4.dir/Problems/MatrixProblemCreator.cpp.o
ex4: CMakeFiles/ex4.dir/build.make
ex4: CMakeFiles/ex4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/shacharmeir/CLionProjects/ex4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_25) "Linking CXX executable ex4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex4.dir/build: ex4

.PHONY : CMakeFiles/ex4.dir/build

CMakeFiles/ex4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex4.dir/clean

CMakeFiles/ex4.dir/depend:
	cd /Users/shacharmeir/CLionProjects/ex4/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/shacharmeir/CLionProjects/ex4 /Users/shacharmeir/CLionProjects/ex4 /Users/shacharmeir/CLionProjects/ex4/cmake-build-debug /Users/shacharmeir/CLionProjects/ex4/cmake-build-debug /Users/shacharmeir/CLionProjects/ex4/cmake-build-debug/CMakeFiles/ex4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex4.dir/depend

