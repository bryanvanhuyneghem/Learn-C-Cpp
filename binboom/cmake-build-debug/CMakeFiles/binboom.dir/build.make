# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\bryan\CLionProjects\binboom

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\bryan\CLionProjects\binboom\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/binboom.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/binboom.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/binboom.dir/flags.make

CMakeFiles/binboom.dir/main.cpp.obj: CMakeFiles/binboom.dir/flags.make
CMakeFiles/binboom.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\bryan\CLionProjects\binboom\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/binboom.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\binboom.dir\main.cpp.obj -c C:\Users\bryan\CLionProjects\binboom\main.cpp

CMakeFiles/binboom.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/binboom.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\bryan\CLionProjects\binboom\main.cpp > CMakeFiles\binboom.dir\main.cpp.i

CMakeFiles/binboom.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/binboom.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\bryan\CLionProjects\binboom\main.cpp -o CMakeFiles\binboom.dir\main.cpp.s

# Object files for target binboom
binboom_OBJECTS = \
"CMakeFiles/binboom.dir/main.cpp.obj"

# External object files for target binboom
binboom_EXTERNAL_OBJECTS =

binboom.exe: CMakeFiles/binboom.dir/main.cpp.obj
binboom.exe: CMakeFiles/binboom.dir/build.make
binboom.exe: CMakeFiles/binboom.dir/linklibs.rsp
binboom.exe: CMakeFiles/binboom.dir/objects1.rsp
binboom.exe: CMakeFiles/binboom.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\bryan\CLionProjects\binboom\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable binboom.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\binboom.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/binboom.dir/build: binboom.exe

.PHONY : CMakeFiles/binboom.dir/build

CMakeFiles/binboom.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\binboom.dir\cmake_clean.cmake
.PHONY : CMakeFiles/binboom.dir/clean

CMakeFiles/binboom.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\bryan\CLionProjects\binboom C:\Users\bryan\CLionProjects\binboom C:\Users\bryan\CLionProjects\binboom\cmake-build-debug C:\Users\bryan\CLionProjects\binboom\cmake-build-debug C:\Users\bryan\CLionProjects\binboom\cmake-build-debug\CMakeFiles\binboom.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/binboom.dir/depend

