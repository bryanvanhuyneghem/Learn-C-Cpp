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
CMAKE_SOURCE_DIR = C:\Users\bryan\CLionProjects\bitoperators

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\bryan\CLionProjects\bitoperators\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/bitoperators.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bitoperators.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bitoperators.dir/flags.make

CMakeFiles/bitoperators.dir/main.c.obj: CMakeFiles/bitoperators.dir/flags.make
CMakeFiles/bitoperators.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\bryan\CLionProjects\bitoperators\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/bitoperators.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\bitoperators.dir\main.c.obj   -c C:\Users\bryan\CLionProjects\bitoperators\main.c

CMakeFiles/bitoperators.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/bitoperators.dir/main.c.i"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\bryan\CLionProjects\bitoperators\main.c > CMakeFiles\bitoperators.dir\main.c.i

CMakeFiles/bitoperators.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/bitoperators.dir/main.c.s"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\bryan\CLionProjects\bitoperators\main.c -o CMakeFiles\bitoperators.dir\main.c.s

CMakeFiles/bitoperators.dir/main.c.obj.requires:

.PHONY : CMakeFiles/bitoperators.dir/main.c.obj.requires

CMakeFiles/bitoperators.dir/main.c.obj.provides: CMakeFiles/bitoperators.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\bitoperators.dir\build.make CMakeFiles/bitoperators.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/bitoperators.dir/main.c.obj.provides

CMakeFiles/bitoperators.dir/main.c.obj.provides.build: CMakeFiles/bitoperators.dir/main.c.obj


# Object files for target bitoperators
bitoperators_OBJECTS = \
"CMakeFiles/bitoperators.dir/main.c.obj"

# External object files for target bitoperators
bitoperators_EXTERNAL_OBJECTS =

bitoperators.exe: CMakeFiles/bitoperators.dir/main.c.obj
bitoperators.exe: CMakeFiles/bitoperators.dir/build.make
bitoperators.exe: CMakeFiles/bitoperators.dir/linklibs.rsp
bitoperators.exe: CMakeFiles/bitoperators.dir/objects1.rsp
bitoperators.exe: CMakeFiles/bitoperators.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\bryan\CLionProjects\bitoperators\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable bitoperators.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\bitoperators.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bitoperators.dir/build: bitoperators.exe

.PHONY : CMakeFiles/bitoperators.dir/build

CMakeFiles/bitoperators.dir/requires: CMakeFiles/bitoperators.dir/main.c.obj.requires

.PHONY : CMakeFiles/bitoperators.dir/requires

CMakeFiles/bitoperators.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\bitoperators.dir\cmake_clean.cmake
.PHONY : CMakeFiles/bitoperators.dir/clean

CMakeFiles/bitoperators.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\bryan\CLionProjects\bitoperators C:\Users\bryan\CLionProjects\bitoperators C:\Users\bryan\CLionProjects\bitoperators\cmake-build-debug C:\Users\bryan\CLionProjects\bitoperators\cmake-build-debug C:\Users\bryan\CLionProjects\bitoperators\cmake-build-debug\CMakeFiles\bitoperators.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bitoperators.dir/depend

