# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = "/cygdrive/c/Users/LAPTOP MSI/AppData/Local/JetBrains/CLion2021.1/cygwin_cmake/bin/cmake.exe"

# The command to remove a file.
RM = "/cygdrive/c/Users/LAPTOP MSI/AppData/Local/JetBrains/CLion2021.1/cygwin_cmake/bin/cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/d/Code/testassignment2_202

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/d/Code/testassignment2_202/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/testassignment2_202.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/testassignment2_202.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/testassignment2_202.dir/flags.make

CMakeFiles/testassignment2_202.dir/main.cpp.o: CMakeFiles/testassignment2_202.dir/flags.make
CMakeFiles/testassignment2_202.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/Code/testassignment2_202/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/testassignment2_202.dir/main.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/testassignment2_202.dir/main.cpp.o -c /cygdrive/d/Code/testassignment2_202/main.cpp

CMakeFiles/testassignment2_202.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/testassignment2_202.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/Code/testassignment2_202/main.cpp > CMakeFiles/testassignment2_202.dir/main.cpp.i

CMakeFiles/testassignment2_202.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/testassignment2_202.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/Code/testassignment2_202/main.cpp -o CMakeFiles/testassignment2_202.dir/main.cpp.s

# Object files for target testassignment2_202
testassignment2_202_OBJECTS = \
"CMakeFiles/testassignment2_202.dir/main.cpp.o"

# External object files for target testassignment2_202
testassignment2_202_EXTERNAL_OBJECTS =

testassignment2_202.exe: CMakeFiles/testassignment2_202.dir/main.cpp.o
testassignment2_202.exe: CMakeFiles/testassignment2_202.dir/build.make
testassignment2_202.exe: CMakeFiles/testassignment2_202.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/d/Code/testassignment2_202/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable testassignment2_202.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/testassignment2_202.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/testassignment2_202.dir/build: testassignment2_202.exe

.PHONY : CMakeFiles/testassignment2_202.dir/build

CMakeFiles/testassignment2_202.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/testassignment2_202.dir/cmake_clean.cmake
.PHONY : CMakeFiles/testassignment2_202.dir/clean

CMakeFiles/testassignment2_202.dir/depend:
	cd /cygdrive/d/Code/testassignment2_202/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/d/Code/testassignment2_202 /cygdrive/d/Code/testassignment2_202 /cygdrive/d/Code/testassignment2_202/cmake-build-debug /cygdrive/d/Code/testassignment2_202/cmake-build-debug /cygdrive/d/Code/testassignment2_202/cmake-build-debug/CMakeFiles/testassignment2_202.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/testassignment2_202.dir/depend

