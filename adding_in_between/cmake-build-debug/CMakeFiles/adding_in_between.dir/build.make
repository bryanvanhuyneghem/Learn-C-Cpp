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
CMAKE_SOURCE_DIR = C:\Users\bryan\CLionProjects\adding_in_between

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\bryan\CLionProjects\adding_in_between\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/adding_in_between.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/adding_in_between.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/adding_in_between.dir/flags.make

CMakeFiles/adding_in_between.dir/main.c.obj: CMakeFiles/adding_in_between.dir/flags.make
CMakeFiles/adding_in_between.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\bryan\CLionProjects\adding_in_between\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/adding_in_between.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\adding_in_between.dir\main.c.obj   -c C:\Users\bryan\CLionProjects\adding_in_between\main.c

CMakeFiles/adding_in_between.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/adding_in_between.dir/main.c.i"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\bryan\CLionProjects\adding_in_between\main.c > CMakeFiles\adding_in_between.dir\main.c.i

CMakeFiles/adding_in_between.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/adding_in_between.dir/main.c.s"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\bryan\CLionProjects\adding_in_between\main.c -o CMakeFiles\adding_in_between.dir\main.c.s

CMakeFiles/adding_in_between.dir/main.c.obj.requires:

.PHONY : CMakeFiles/adding_in_between.dir/main.c.obj.requires

CMakeFiles/adding_in_between.dir/main.c.obj.provides: CMakeFiles/adding_in_between.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\adding_in_between.dir\build.make CMakeFiles/adding_in_between.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/adding_in_between.dir/main.c.obj.provides

CMakeFiles/adding_in_between.dir/main.c.obj.provides.build: CMakeFiles/adding_in_between.dir/main.c.obj


# Object files for target adding_in_between
adding_in_between_OBJECTS = \
"CMakeFiles/adding_in_between.dir/main.c.obj"

# External object files for target adding_in_between
adding_in_between_EXTERNAL_OBJECTS =

adding_in_between.exe: CMakeFiles/adding_in_between.dir/main.c.obj
adding_in_between.exe: CMakeFiles/adding_in_between.dir/build.make
adding_in_between.exe: CMakeFiles/adding_in_between.dir/linklibs.rsp
adding_in_between.exe: CMakeFiles/adding_in_between.dir/objects1.rsp
adding_in_between.exe: CMakeFiles/adding_in_between.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\bryan\CLionProjects\adding_in_between\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable adding_in_between.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\adding_in_between.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/adding_in_between.dir/build: adding_in_between.exe

.PHONY : CMakeFiles/adding_in_between.dir/build

CMakeFiles/adding_in_between.dir/requires: CMakeFiles/adding_in_between.dir/main.c.obj.requires

.PHONY : CMakeFiles/adding_in_between.dir/requires

CMakeFiles/adding_in_between.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\adding_in_between.dir\cmake_clean.cmake
.PHONY : CMakeFiles/adding_in_between.dir/clean

CMakeFiles/adding_in_between.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\bryan\CLionProjects\adding_in_between C:\Users\bryan\CLionProjects\adding_in_between C:\Users\bryan\CLionProjects\adding_in_between\cmake-build-debug C:\Users\bryan\CLionProjects\adding_in_between\cmake-build-debug C:\Users\bryan\CLionProjects\adding_in_between\cmake-build-debug\CMakeFiles\adding_in_between.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/adding_in_between.dir/depend
