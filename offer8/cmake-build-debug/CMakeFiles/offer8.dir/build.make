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
CMAKE_SOURCE_DIR = E:\clion_project\offer8

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\clion_project\offer8\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/offer8.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/offer8.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/offer8.dir/flags.make

CMakeFiles/offer8.dir/main.cpp.obj: CMakeFiles/offer8.dir/flags.make
CMakeFiles/offer8.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\clion_project\offer8\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/offer8.dir/main.cpp.obj"
	"D:\Program Files\mingw64\bin\g++.exe"  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\offer8.dir\main.cpp.obj -c E:\clion_project\offer8\main.cpp

CMakeFiles/offer8.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/offer8.dir/main.cpp.i"
	"D:\Program Files\mingw64\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\clion_project\offer8\main.cpp > CMakeFiles\offer8.dir\main.cpp.i

CMakeFiles/offer8.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/offer8.dir/main.cpp.s"
	"D:\Program Files\mingw64\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\clion_project\offer8\main.cpp -o CMakeFiles\offer8.dir\main.cpp.s

# Object files for target offer8
offer8_OBJECTS = \
"CMakeFiles/offer8.dir/main.cpp.obj"

# External object files for target offer8
offer8_EXTERNAL_OBJECTS =

offer8.exe: CMakeFiles/offer8.dir/main.cpp.obj
offer8.exe: CMakeFiles/offer8.dir/build.make
offer8.exe: CMakeFiles/offer8.dir/linklibs.rsp
offer8.exe: CMakeFiles/offer8.dir/objects1.rsp
offer8.exe: CMakeFiles/offer8.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\clion_project\offer8\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable offer8.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\offer8.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/offer8.dir/build: offer8.exe

.PHONY : CMakeFiles/offer8.dir/build

CMakeFiles/offer8.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\offer8.dir\cmake_clean.cmake
.PHONY : CMakeFiles/offer8.dir/clean

CMakeFiles/offer8.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\clion_project\offer8 E:\clion_project\offer8 E:\clion_project\offer8\cmake-build-debug E:\clion_project\offer8\cmake-build-debug E:\clion_project\offer8\cmake-build-debug\CMakeFiles\offer8.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/offer8.dir/depend

