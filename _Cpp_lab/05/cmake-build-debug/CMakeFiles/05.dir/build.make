# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.1.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "S:\Documents\CLion Projects\C&C++ subject\_Cpp_lab\05"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "S:\Documents\CLion Projects\C&C++ subject\_Cpp_lab\05\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/05.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/05.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/05.dir/flags.make

CMakeFiles/05.dir/main.cpp.obj: CMakeFiles/05.dir/flags.make
CMakeFiles/05.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="S:\Documents\CLion Projects\C&C++ subject\_Cpp_lab\05\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/05.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\05.dir\main.cpp.obj -c "S:\Documents\CLion Projects\C&C++ subject\_Cpp_lab\05\main.cpp"

CMakeFiles/05.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/05.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "S:\Documents\CLion Projects\C&C++ subject\_Cpp_lab\05\main.cpp" > CMakeFiles\05.dir\main.cpp.i

CMakeFiles/05.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/05.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "S:\Documents\CLion Projects\C&C++ subject\_Cpp_lab\05\main.cpp" -o CMakeFiles\05.dir\main.cpp.s

# Object files for target 05
05_OBJECTS = \
"CMakeFiles/05.dir/main.cpp.obj"

# External object files for target 05
05_EXTERNAL_OBJECTS =

05.exe: CMakeFiles/05.dir/main.cpp.obj
05.exe: CMakeFiles/05.dir/build.make
05.exe: CMakeFiles/05.dir/linklibs.rsp
05.exe: CMakeFiles/05.dir/objects1.rsp
05.exe: CMakeFiles/05.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="S:\Documents\CLion Projects\C&C++ subject\_Cpp_lab\05\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 05.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\05.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/05.dir/build: 05.exe

.PHONY : CMakeFiles/05.dir/build

CMakeFiles/05.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\05.dir\cmake_clean.cmake
.PHONY : CMakeFiles/05.dir/clean

CMakeFiles/05.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "S:\Documents\CLion Projects\C&C++ subject\_Cpp_lab\05" "S:\Documents\CLion Projects\C&C++ subject\_Cpp_lab\05" "S:\Documents\CLion Projects\C&C++ subject\_Cpp_lab\05\cmake-build-debug" "S:\Documents\CLion Projects\C&C++ subject\_Cpp_lab\05\cmake-build-debug" "S:\Documents\CLion Projects\C&C++ subject\_Cpp_lab\05\cmake-build-debug\CMakeFiles\05.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/05.dir/depend

