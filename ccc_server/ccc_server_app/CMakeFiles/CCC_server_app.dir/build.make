# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kali/CCC/ccc_server

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kali/CCC/ccc_server

# Include any dependencies generated for this target.
include ccc_server_app/CMakeFiles/CCC_server_app.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include ccc_server_app/CMakeFiles/CCC_server_app.dir/compiler_depend.make

# Include the progress variables for this target.
include ccc_server_app/CMakeFiles/CCC_server_app.dir/progress.make

# Include the compile flags for this target's objects.
include ccc_server_app/CMakeFiles/CCC_server_app.dir/flags.make

ccc_server_app/CMakeFiles/CCC_server_app.dir/main.cpp.o: ccc_server_app/CMakeFiles/CCC_server_app.dir/flags.make
ccc_server_app/CMakeFiles/CCC_server_app.dir/main.cpp.o: ccc_server_app/main.cpp
ccc_server_app/CMakeFiles/CCC_server_app.dir/main.cpp.o: ccc_server_app/CMakeFiles/CCC_server_app.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kali/CCC/ccc_server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object ccc_server_app/CMakeFiles/CCC_server_app.dir/main.cpp.o"
	cd /home/kali/CCC/ccc_server/ccc_server_app && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT ccc_server_app/CMakeFiles/CCC_server_app.dir/main.cpp.o -MF CMakeFiles/CCC_server_app.dir/main.cpp.o.d -o CMakeFiles/CCC_server_app.dir/main.cpp.o -c /home/kali/CCC/ccc_server/ccc_server_app/main.cpp

ccc_server_app/CMakeFiles/CCC_server_app.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CCC_server_app.dir/main.cpp.i"
	cd /home/kali/CCC/ccc_server/ccc_server_app && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kali/CCC/ccc_server/ccc_server_app/main.cpp > CMakeFiles/CCC_server_app.dir/main.cpp.i

ccc_server_app/CMakeFiles/CCC_server_app.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CCC_server_app.dir/main.cpp.s"
	cd /home/kali/CCC/ccc_server/ccc_server_app && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kali/CCC/ccc_server/ccc_server_app/main.cpp -o CMakeFiles/CCC_server_app.dir/main.cpp.s

# Object files for target CCC_server_app
CCC_server_app_OBJECTS = \
"CMakeFiles/CCC_server_app.dir/main.cpp.o"

# External object files for target CCC_server_app
CCC_server_app_EXTERNAL_OBJECTS =

ccc_server_app/CCC_server_app: ccc_server_app/CMakeFiles/CCC_server_app.dir/main.cpp.o
ccc_server_app/CCC_server_app: ccc_server_app/CMakeFiles/CCC_server_app.dir/build.make
ccc_server_app/CCC_server_app: ccc_server_lib/libCCC_server_lib.a
ccc_server_app/CCC_server_app: /usr/lib/x86_64-linux-gnu/libboost_log.so.1.74.0
ccc_server_app/CCC_server_app: /usr/lib/x86_64-linux-gnu/libboost_thread.so.1.74.0
ccc_server_app/CCC_server_app: /usr/lib/x86_64-linux-gnu/libboost_atomic.so.1.74.0
ccc_server_app/CCC_server_app: /usr/lib/x86_64-linux-gnu/libboost_chrono.so.1.74.0
ccc_server_app/CCC_server_app: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so.1.74.0
ccc_server_app/CCC_server_app: /usr/lib/x86_64-linux-gnu/libboost_regex.so.1.74.0
ccc_server_app/CCC_server_app: /usr/lib/x86_64-linux-gnu/libssl.so
ccc_server_app/CCC_server_app: /usr/lib/x86_64-linux-gnu/libcrypto.so
ccc_server_app/CCC_server_app: ccc_server_app/CMakeFiles/CCC_server_app.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kali/CCC/ccc_server/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CCC_server_app"
	cd /home/kali/CCC/ccc_server/ccc_server_app && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CCC_server_app.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ccc_server_app/CMakeFiles/CCC_server_app.dir/build: ccc_server_app/CCC_server_app
.PHONY : ccc_server_app/CMakeFiles/CCC_server_app.dir/build

ccc_server_app/CMakeFiles/CCC_server_app.dir/clean:
	cd /home/kali/CCC/ccc_server/ccc_server_app && $(CMAKE_COMMAND) -P CMakeFiles/CCC_server_app.dir/cmake_clean.cmake
.PHONY : ccc_server_app/CMakeFiles/CCC_server_app.dir/clean

ccc_server_app/CMakeFiles/CCC_server_app.dir/depend:
	cd /home/kali/CCC/ccc_server && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kali/CCC/ccc_server /home/kali/CCC/ccc_server/ccc_server_app /home/kali/CCC/ccc_server /home/kali/CCC/ccc_server/ccc_server_app /home/kali/CCC/ccc_server/ccc_server_app/CMakeFiles/CCC_server_app.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ccc_server_app/CMakeFiles/CCC_server_app.dir/depend

