# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2019.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2019.1.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\clion_project\offer16

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\clion_project\offer16\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/offer16.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/offer16.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/offer16.dir/flags.make

CMakeFiles/offer16.dir/main.cpp.obj: CMakeFiles/offer16.dir/flags.make
CMakeFiles/offer16.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\clion_project\offer16\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/offer16.dir/main.cpp.obj"
	"D:\Program Files\mingw64\bin\g++.exe"  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\offer16.dir\main.cpp.obj -c E:\clion_project\offer16\main.cpp

CMakeFiles/offer16.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/offer16.dir/main.cpp.i"
	"D:\Program Files\mingw64\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\clion_project\offer16\main.cpp > CMakeFiles\offer16.dir\main.cpp.i

CMakeFiles/offer16.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/offer16.dir/main.cpp.s"
	"D:\Program Files\mingw64\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\clion_project\offer16\main.cpp -o CMakeFiles\offer16.dir\main.cpp.s

# Object files for target offer16
offer16_OBJECTS = \
"CMakeFiles/offer16.dir/main.cpp.obj"

# External object files for target offer16
offer16_EXTERNAL_OBJECTS =

offer16.exe: CMakeFiles/offer16.dir/main.cpp.obj
offer16.exe: CMakeFiles/offer16.dir/build.make
offer16.exe: CMakeFiles/offer16.dir/linklibs.rsp
offer16.exe: CMakeFiles/offer16.dir/objects1.rsp
offer16.exe: CMakeFiles/offer16.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\clion_project\offer16\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable offer16.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\offer16.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/offer16.dir/build: offer16.exe

.PHONY : CMakeFiles/offer16.dir/build

CMakeFiles/offer16.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\offer16.dir\cmake_clean.cmake
.PHONY : CMakeFiles/offer16.dir/clean

CMakeFiles/offer16.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\clion_project\offer16 E:\clion_project\offer16 E:\clion_project\offer16\cmake-build-debug E:\clion_project\offer16\cmake-build-debug E:\clion_project\offer16\cmake-build-debug\CMakeFiles\offer16.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/offer16.dir/depend

