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
CMAKE_SOURCE_DIR = E:\Code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Code\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\Code.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\Code.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Code.dir\flags.make

CMakeFiles\Code.dir\main.cpp.obj: CMakeFiles\Code.dir\flags.make
CMakeFiles\Code.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Code.dir/main.cpp.obj"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Code.dir\main.cpp.obj /FdCMakeFiles\Code.dir\ /FS -c E:\Code\main.cpp
<<

CMakeFiles\Code.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Code.dir/main.cpp.i"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe" > CMakeFiles\Code.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Code\main.cpp
<<

CMakeFiles\Code.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Code.dir/main.cpp.s"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Code.dir\main.cpp.s /c E:\Code\main.cpp
<<

# Object files for target Code
Code_OBJECTS = \
"CMakeFiles\Code.dir\main.cpp.obj"

# External object files for target Code
Code_EXTERNAL_OBJECTS =

Code.exe: CMakeFiles\Code.dir\main.cpp.obj
Code.exe: CMakeFiles\Code.dir\build.make
Code.exe: CMakeFiles\Code.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Code.exe"
	"C:\Program Files\JetBrains\CLion 2020.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Code.dir --rc="C:\PROGRA~2\Windows Kits\10\bin\10.0.18362.0\x86\rc.exe" --mt="C:\PROGRA~2\Windows Kits\10\bin\10.0.18362.0\x86\mt.exe" --manifests  -- "C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.26.28801\bin\Hostx86\x86\link.exe" /nologo @CMakeFiles\Code.dir\objects1.rsp @<<
 /out:Code.exe /implib:Code.lib /pdb:E:\Code\cmake-build-debug\Code.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Code.dir\build: Code.exe

.PHONY : CMakeFiles\Code.dir\build

CMakeFiles\Code.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Code.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Code.dir\clean

CMakeFiles\Code.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" E:\Code E:\Code E:\Code\cmake-build-debug E:\Code\cmake-build-debug E:\Code\cmake-build-debug\CMakeFiles\Code.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\Code.dir\depend

