# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.1.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.1.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\bryan\CLionProjects\DemoFriendClass

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\bryan\CLionProjects\DemoFriendClass\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DemoFriendClass.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DemoFriendClass.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DemoFriendClass.dir/flags.make

CMakeFiles/DemoFriendClass.dir/main.cpp.obj: CMakeFiles/DemoFriendClass.dir/flags.make
CMakeFiles/DemoFriendClass.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\bryan\CLionProjects\DemoFriendClass\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DemoFriendClass.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\DemoFriendClass.dir\main.cpp.obj -c C:\Users\bryan\CLionProjects\DemoFriendClass\main.cpp

CMakeFiles/DemoFriendClass.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DemoFriendClass.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\bryan\CLionProjects\DemoFriendClass\main.cpp > CMakeFiles\DemoFriendClass.dir\main.cpp.i

CMakeFiles/DemoFriendClass.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DemoFriendClass.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\bryan\CLionProjects\DemoFriendClass\main.cpp -o CMakeFiles\DemoFriendClass.dir\main.cpp.s

CMakeFiles/DemoFriendClass.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/DemoFriendClass.dir/main.cpp.obj.requires

CMakeFiles/DemoFriendClass.dir/main.cpp.obj.provides: CMakeFiles/DemoFriendClass.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\DemoFriendClass.dir\build.make CMakeFiles/DemoFriendClass.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/DemoFriendClass.dir/main.cpp.obj.provides

CMakeFiles/DemoFriendClass.dir/main.cpp.obj.provides.build: CMakeFiles/DemoFriendClass.dir/main.cpp.obj


# Object files for target DemoFriendClass
DemoFriendClass_OBJECTS = \
"CMakeFiles/DemoFriendClass.dir/main.cpp.obj"

# External object files for target DemoFriendClass
DemoFriendClass_EXTERNAL_OBJECTS =

DemoFriendClass.exe: CMakeFiles/DemoFriendClass.dir/main.cpp.obj
DemoFriendClass.exe: CMakeFiles/DemoFriendClass.dir/build.make
DemoFriendClass.exe: CMakeFiles/DemoFriendClass.dir/linklibs.rsp
DemoFriendClass.exe: CMakeFiles/DemoFriendClass.dir/objects1.rsp
DemoFriendClass.exe: CMakeFiles/DemoFriendClass.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\bryan\CLionProjects\DemoFriendClass\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DemoFriendClass.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\DemoFriendClass.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DemoFriendClass.dir/build: DemoFriendClass.exe

.PHONY : CMakeFiles/DemoFriendClass.dir/build

CMakeFiles/DemoFriendClass.dir/requires: CMakeFiles/DemoFriendClass.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/DemoFriendClass.dir/requires

CMakeFiles/DemoFriendClass.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\DemoFriendClass.dir\cmake_clean.cmake
.PHONY : CMakeFiles/DemoFriendClass.dir/clean

CMakeFiles/DemoFriendClass.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\bryan\CLionProjects\DemoFriendClass C:\Users\bryan\CLionProjects\DemoFriendClass C:\Users\bryan\CLionProjects\DemoFriendClass\cmake-build-debug C:\Users\bryan\CLionProjects\DemoFriendClass\cmake-build-debug C:\Users\bryan\CLionProjects\DemoFriendClass\cmake-build-debug\CMakeFiles\DemoFriendClass.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DemoFriendClass.dir/depend

