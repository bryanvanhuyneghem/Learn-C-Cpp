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
CMAKE_SOURCE_DIR = C:\Users\bryan\CLionProjects\vb_move2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\bryan\CLionProjects\vb_move2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/vb_move2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/vb_move2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/vb_move2.dir/flags.make

CMakeFiles/vb_move2.dir/main.cpp.obj: CMakeFiles/vb_move2.dir/flags.make
CMakeFiles/vb_move2.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\bryan\CLionProjects\vb_move2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/vb_move2.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\vb_move2.dir\main.cpp.obj -c C:\Users\bryan\CLionProjects\vb_move2\main.cpp

CMakeFiles/vb_move2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vb_move2.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\bryan\CLionProjects\vb_move2\main.cpp > CMakeFiles\vb_move2.dir\main.cpp.i

CMakeFiles/vb_move2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vb_move2.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\bryan\CLionProjects\vb_move2\main.cpp -o CMakeFiles\vb_move2.dir\main.cpp.s

# Object files for target vb_move2
vb_move2_OBJECTS = \
"CMakeFiles/vb_move2.dir/main.cpp.obj"

# External object files for target vb_move2
vb_move2_EXTERNAL_OBJECTS =

vb_move2.exe: CMakeFiles/vb_move2.dir/main.cpp.obj
vb_move2.exe: CMakeFiles/vb_move2.dir/build.make
vb_move2.exe: CMakeFiles/vb_move2.dir/linklibs.rsp
vb_move2.exe: CMakeFiles/vb_move2.dir/objects1.rsp
vb_move2.exe: CMakeFiles/vb_move2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\bryan\CLionProjects\vb_move2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable vb_move2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\vb_move2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/vb_move2.dir/build: vb_move2.exe

.PHONY : CMakeFiles/vb_move2.dir/build

CMakeFiles/vb_move2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\vb_move2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/vb_move2.dir/clean

CMakeFiles/vb_move2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\bryan\CLionProjects\vb_move2 C:\Users\bryan\CLionProjects\vb_move2 C:\Users\bryan\CLionProjects\vb_move2\cmake-build-debug C:\Users\bryan\CLionProjects\vb_move2\cmake-build-debug C:\Users\bryan\CLionProjects\vb_move2\cmake-build-debug\CMakeFiles\vb_move2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/vb_move2.dir/depend

