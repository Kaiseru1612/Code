# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Code\Assignment193

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Code\Assignment193\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\Assignment193.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\Assignment193.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Assignment193.dir\flags.make

CMakeFiles\Assignment193.dir\main.cpp.obj: CMakeFiles\Assignment193.dir\flags.make
CMakeFiles\Assignment193.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Code\Assignment193\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Assignment193.dir/main.cpp.obj"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Assignment193.dir\main.cpp.obj /FdCMakeFiles\Assignment193.dir\ /FS -c E:\Code\Assignment193\main.cpp
<<

CMakeFiles\Assignment193.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment193.dir/main.cpp.i"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe" > CMakeFiles\Assignment193.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Code\Assignment193\main.cpp
<<

CMakeFiles\Assignment193.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment193.dir/main.cpp.s"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Assignment193.dir\main.cpp.s /c E:\Code\Assignment193\main.cpp
<<

CMakeFiles\Assignment193.dir\sword.cpp.obj: CMakeFiles\Assignment193.dir\flags.make
CMakeFiles\Assignment193.dir\sword.cpp.obj: ..\sword.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Code\Assignment193\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Assignment193.dir/sword.cpp.obj"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Assignment193.dir\sword.cpp.obj /FdCMakeFiles\Assignment193.dir\ /FS -c E:\Code\Assignment193\sword.cpp
<<

CMakeFiles\Assignment193.dir\sword.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment193.dir/sword.cpp.i"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe" > CMakeFiles\Assignment193.dir\sword.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Code\Assignment193\sword.cpp
<<

CMakeFiles\Assignment193.dir\sword.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment193.dir/sword.cpp.s"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Assignment193.dir\sword.cpp.s /c E:\Code\Assignment193\sword.cpp
<<

# Object files for target Assignment193
Assignment193_OBJECTS = \
"CMakeFiles\Assignment193.dir\main.cpp.obj" \
"CMakeFiles\Assignment193.dir\sword.cpp.obj"

# External object files for target Assignment193
Assignment193_EXTERNAL_OBJECTS =

Assignment193.exe: CMakeFiles\Assignment193.dir\main.cpp.obj
Assignment193.exe: CMakeFiles\Assignment193.dir\sword.cpp.obj
Assignment193.exe: CMakeFiles\Assignment193.dir\build.make
Assignment193.exe: CMakeFiles\Assignment193.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Code\Assignment193\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Assignment193.exe"
	"C:\Program Files\JetBrains\CLion 2020.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Assignment193.dir --rc="C:\PROGRA~2\Windows Kits\10\bin\10.0.18362.0\x86\rc.exe" --mt="C:\PROGRA~2\Windows Kits\10\bin\10.0.18362.0\x86\mt.exe" --manifests  -- "C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\link.exe" /nologo @CMakeFiles\Assignment193.dir\objects1.rsp @<<
 /out:Assignment193.exe /implib:Assignment193.lib /pdb:E:\Code\Assignment193\cmake-build-debug\Assignment193.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Assignment193.dir\build: Assignment193.exe

.PHONY : CMakeFiles\Assignment193.dir\build

CMakeFiles\Assignment193.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Assignment193.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Assignment193.dir\clean

CMakeFiles\Assignment193.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" E:\Code\Assignment193 E:\Code\Assignment193 E:\Code\Assignment193\cmake-build-debug E:\Code\Assignment193\cmake-build-debug E:\Code\Assignment193\cmake-build-debug\CMakeFiles\Assignment193.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\Assignment193.dir\depend

