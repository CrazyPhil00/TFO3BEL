# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Phili\OneDrive\Desktop\cpp\011_lotto

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Phili\OneDrive\Desktop\cpp\011_lotto\build

# Include any dependencies generated for this target.
include CMakeFiles/SampleProject.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/SampleProject.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/SampleProject.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SampleProject.dir/flags.make

CMakeFiles/SampleProject.dir/src/main.cpp.obj: CMakeFiles/SampleProject.dir/flags.make
CMakeFiles/SampleProject.dir/src/main.cpp.obj: CMakeFiles/SampleProject.dir/includes_CXX.rsp
CMakeFiles/SampleProject.dir/src/main.cpp.obj: C:/Users/Phili/OneDrive/Desktop/cpp/011_lotto/src/main.cpp
CMakeFiles/SampleProject.dir/src/main.cpp.obj: CMakeFiles/SampleProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Phili\OneDrive\Desktop\cpp\011_lotto\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SampleProject.dir/src/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SampleProject.dir/src/main.cpp.obj -MF CMakeFiles\SampleProject.dir\src\main.cpp.obj.d -o CMakeFiles\SampleProject.dir\src\main.cpp.obj -c C:\Users\Phili\OneDrive\Desktop\cpp\011_lotto\src\main.cpp

CMakeFiles/SampleProject.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SampleProject.dir/src/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Phili\OneDrive\Desktop\cpp\011_lotto\src\main.cpp > CMakeFiles\SampleProject.dir\src\main.cpp.i

CMakeFiles/SampleProject.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SampleProject.dir/src/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Phili\OneDrive\Desktop\cpp\011_lotto\src\main.cpp -o CMakeFiles\SampleProject.dir\src\main.cpp.s

# Object files for target SampleProject
SampleProject_OBJECTS = \
"CMakeFiles/SampleProject.dir/src/main.cpp.obj"

# External object files for target SampleProject
SampleProject_EXTERNAL_OBJECTS =

SampleProject.exe: CMakeFiles/SampleProject.dir/src/main.cpp.obj
SampleProject.exe: CMakeFiles/SampleProject.dir/build.make
SampleProject.exe: CMakeFiles/SampleProject.dir/linkLibs.rsp
SampleProject.exe: CMakeFiles/SampleProject.dir/objects1.rsp
SampleProject.exe: CMakeFiles/SampleProject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Phili\OneDrive\Desktop\cpp\011_lotto\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SampleProject.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SampleProject.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SampleProject.dir/build: SampleProject.exe
.PHONY : CMakeFiles/SampleProject.dir/build

CMakeFiles/SampleProject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SampleProject.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SampleProject.dir/clean

CMakeFiles/SampleProject.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Phili\OneDrive\Desktop\cpp\011_lotto C:\Users\Phili\OneDrive\Desktop\cpp\011_lotto C:\Users\Phili\OneDrive\Desktop\cpp\011_lotto\build C:\Users\Phili\OneDrive\Desktop\cpp\011_lotto\build C:\Users\Phili\OneDrive\Desktop\cpp\011_lotto\build\CMakeFiles\SampleProject.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SampleProject.dir/depend

