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
CMAKE_SOURCE_DIR = C:\Users\bryan\CLionProjects\bitfiddling

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\bryan\CLionProjects\bitfiddling\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/bitfiddling.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bitfiddling.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bitfiddling.dir/flags.make

CMakeFiles/bitfiddling.dir/main.c.obj: CMakeFiles/bitfiddling.dir/flags.make
CMakeFiles/bitfiddling.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\bryan\CLionProjects\bitfiddling\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/bitfiddling.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\bitfiddling.dir\main.c.obj   -c C:\Users\bryan\CLionProjects\bitfiddling\main.c

CMakeFiles/bitfiddling.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/bitfiddling.dir/main.c.i"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\bryan\CLionProjects\bitfiddling\main.c > CMakeFiles\bitfiddling.dir\main.c.i

CMakeFiles/bitfiddling.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/bitfiddling.dir/main.c.s"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\bryan\CLionProjects\bitfiddling\main.c -o CMakeFiles\bitfiddling.dir\main.c.s

CMakeFiles/bitfiddling.dir/main.c.obj.requires:

.PHONY : CMakeFiles/bitfiddling.dir/main.c.obj.requires

CMakeFiles/bitfiddling.dir/main.c.obj.provides: CMakeFiles/bitfiddling.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\bitfiddling.dir\build.make CMakeFiles/bitfiddling.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/bitfiddling.dir/main.c.obj.provides

CMakeFiles/bitfiddling.dir/main.c.obj.provides.build: CMakeFiles/bitfiddling.dir/main.c.obj


# Object files for target bitfiddling
bitfiddling_OBJECTS = \
"CMakeFiles/bitfiddling.dir/main.c.obj"

# External object files for target bitfiddling
bitfiddling_EXTERNAL_OBJECTS =

bitfiddling.exe: CMakeFiles/bitfiddling.dir/main.c.obj
bitfiddling.exe: CMakeFiles/bitfiddling.dir/build.make
bitfiddling.exe: CMakeFiles/bitfiddling.dir/linklibs.rsp
bitfiddling.exe: CMakeFiles/bitfiddling.dir/objects1.rsp
bitfiddling.exe: CMakeFiles/bitfiddling.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\bryan\CLionProjects\bitfiddling\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable bitfiddling.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\bitfiddling.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bitfiddling.dir/build: bitfiddling.exe

.PHONY : CMakeFiles/bitfiddling.dir/build

CMakeFiles/bitfiddling.dir/requires: CMakeFiles/bitfiddling.dir/main.c.obj.requires

.PHONY : CMakeFiles/bitfiddling.dir/requires

CMakeFiles/bitfiddling.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\bitfiddling.dir\cmake_clean.cmake
.PHONY : CMakeFiles/bitfiddling.dir/clean

CMakeFiles/bitfiddling.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\bryan\CLionProjects\bitfiddling C:\Users\bryan\CLionProjects\bitfiddling C:\Users\bryan\CLionProjects\bitfiddling\cmake-build-debug C:\Users\bryan\CLionProjects\bitfiddling\cmake-build-debug C:\Users\bryan\CLionProjects\bitfiddling\cmake-build-debug\CMakeFiles\bitfiddling.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bitfiddling.dir/depend

