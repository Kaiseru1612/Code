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
CMAKE_SOURCE_DIR = /cygdrive/d/Code/AssCA

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/d/Code/AssCA/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/AssCA.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AssCA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AssCA.dir/flags.make

CMakeFiles/AssCA.dir/main.cpp.o: CMakeFiles/AssCA.dir/flags.make
CMakeFiles/AssCA.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/Code/AssCA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AssCA.dir/main.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AssCA.dir/main.cpp.o -c /cygdrive/d/Code/AssCA/main.cpp

CMakeFiles/AssCA.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AssCA.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/Code/AssCA/main.cpp > CMakeFiles/AssCA.dir/main.cpp.i

CMakeFiles/AssCA.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AssCA.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/Code/AssCA/main.cpp -o CMakeFiles/AssCA.dir/main.cpp.s

# Object files for target AssCA
AssCA_OBJECTS = \
"CMakeFiles/AssCA.dir/main.cpp.o"

# External object files for target AssCA
AssCA_EXTERNAL_OBJECTS =

AssCA.exe: CMakeFiles/AssCA.dir/main.cpp.o
AssCA.exe: CMakeFiles/AssCA.dir/build.make
AssCA.exe: CMakeFiles/AssCA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/d/Code/AssCA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable AssCA.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AssCA.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AssCA.dir/build: AssCA.exe

.PHONY : CMakeFiles/AssCA.dir/build

CMakeFiles/AssCA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AssCA.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AssCA.dir/clean

CMakeFiles/AssCA.dir/depend:
	cd /cygdrive/d/Code/AssCA/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/d/Code/AssCA /cygdrive/d/Code/AssCA /cygdrive/d/Code/AssCA/cmake-build-debug /cygdrive/d/Code/AssCA/cmake-build-debug /cygdrive/d/Code/AssCA/cmake-build-debug/CMakeFiles/AssCA.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AssCA.dir/depend

