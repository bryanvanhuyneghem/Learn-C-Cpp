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
CMAKE_SOURCE_DIR = C:\Users\bryan\CLionProjects\creating_list

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\bryan\CLionProjects\creating_list\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/creating_list.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/creating_list.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/creating_list.dir/flags.make

CMakeFiles/creating_list.dir/main.c.obj: CMakeFiles/creating_list.dir/flags.make
CMakeFiles/creating_list.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\bryan\CLionProjects\creating_list\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/creating_list.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\creating_list.dir\main.c.obj   -c C:\Users\bryan\CLionProjects\creating_list\main.c

CMakeFiles/creating_list.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/creating_list.dir/main.c.i"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\bryan\CLionProjects\creating_list\main.c > CMakeFiles\creating_list.dir\main.c.i

CMakeFiles/creating_list.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/creating_list.dir/main.c.s"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\bryan\CLionProjects\creating_list\main.c -o CMakeFiles\creating_list.dir\main.c.s

CMakeFiles/creating_list.dir/main.c.obj.requires:

.PHONY : CMakeFiles/creating_list.dir/main.c.obj.requires

CMakeFiles/creating_list.dir/main.c.obj.provides: CMakeFiles/creating_list.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\creating_list.dir\build.make CMakeFiles/creating_list.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/creating_list.dir/main.c.obj.provides

CMakeFiles/creating_list.dir/main.c.obj.provides.build: CMakeFiles/creating_list.dir/main.c.obj


# Object files for target creating_list
creating_list_OBJECTS = \
"CMakeFiles/creating_list.dir/main.c.obj"

# External object files for target creating_list
creating_list_EXTERNAL_OBJECTS =

creating_list.exe: CMakeFiles/creating_list.dir/main.c.obj
creating_list.exe: CMakeFiles/creating_list.dir/build.make
creating_list.exe: CMakeFiles/creating_list.dir/linklibs.rsp
creating_list.exe: CMakeFiles/creating_list.dir/objects1.rsp
creating_list.exe: CMakeFiles/creating_list.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\bryan\CLionProjects\creating_list\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable creating_list.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\creating_list.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/creating_list.dir/build: creating_list.exe

.PHONY : CMakeFiles/creating_list.dir/build

CMakeFiles/creating_list.dir/requires: CMakeFiles/creating_list.dir/main.c.obj.requires

.PHONY : CMakeFiles/creating_list.dir/requires

CMakeFiles/creating_list.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\creating_list.dir\cmake_clean.cmake
.PHONY : CMakeFiles/creating_list.dir/clean

CMakeFiles/creating_list.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\bryan\CLionProjects\creating_list C:\Users\bryan\CLionProjects\creating_list C:\Users\bryan\CLionProjects\creating_list\cmake-build-debug C:\Users\bryan\CLionProjects\creating_list\cmake-build-debug C:\Users\bryan\CLionProjects\creating_list\cmake-build-debug\CMakeFiles\creating_list.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/creating_list.dir/depend

