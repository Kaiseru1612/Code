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
CMAKE_SOURCE_DIR = /cygdrive/d/Code/Exam

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/d/Code/Exam/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Exam.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Exam.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Exam.dir/flags.make

CMakeFiles/Exam.dir/main.cpp.o: CMakeFiles/Exam.dir/flags.make
CMakeFiles/Exam.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/Code/Exam/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Exam.dir/main.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Exam.dir/main.cpp.o -c /cygdrive/d/Code/Exam/main.cpp

CMakeFiles/Exam.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Exam.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/Code/Exam/main.cpp > CMakeFiles/Exam.dir/main.cpp.i

CMakeFiles/Exam.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Exam.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/Code/Exam/main.cpp -o CMakeFiles/Exam.dir/main.cpp.s

# Object files for target Exam
Exam_OBJECTS = \
"CMakeFiles/Exam.dir/main.cpp.o"

# External object files for target Exam
Exam_EXTERNAL_OBJECTS =

Exam.exe: CMakeFiles/Exam.dir/main.cpp.o
Exam.exe: CMakeFiles/Exam.dir/build.make
Exam.exe: CMakeFiles/Exam.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/d/Code/Exam/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Exam.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Exam.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Exam.dir/build: Exam.exe

.PHONY : CMakeFiles/Exam.dir/build

CMakeFiles/Exam.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Exam.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Exam.dir/clean

CMakeFiles/Exam.dir/depend:
	cd /cygdrive/d/Code/Exam/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/d/Code/Exam /cygdrive/d/Code/Exam /cygdrive/d/Code/Exam/cmake-build-debug /cygdrive/d/Code/Exam/cmake-build-debug /cygdrive/d/Code/Exam/cmake-build-debug/CMakeFiles/Exam.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Exam.dir/depend

