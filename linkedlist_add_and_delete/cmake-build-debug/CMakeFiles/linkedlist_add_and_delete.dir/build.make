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
CMAKE_SOURCE_DIR = C:\Users\bryan\CLionProjects\linkedlist_add_and_delete

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\bryan\CLionProjects\linkedlist_add_and_delete\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/linkedlist_add_and_delete.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/linkedlist_add_and_delete.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/linkedlist_add_and_delete.dir/flags.make

CMakeFiles/linkedlist_add_and_delete.dir/main.c.obj: CMakeFiles/linkedlist_add_and_delete.dir/flags.make
CMakeFiles/linkedlist_add_and_delete.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\bryan\CLionProjects\linkedlist_add_and_delete\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/linkedlist_add_and_delete.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\linkedlist_add_and_delete.dir\main.c.obj   -c C:\Users\bryan\CLionProjects\linkedlist_add_and_delete\main.c

CMakeFiles/linkedlist_add_and_delete.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/linkedlist_add_and_delete.dir/main.c.i"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\bryan\CLionProjects\linkedlist_add_and_delete\main.c > CMakeFiles\linkedlist_add_and_delete.dir\main.c.i

CMakeFiles/linkedlist_add_and_delete.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/linkedlist_add_and_delete.dir/main.c.s"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\bryan\CLionProjects\linkedlist_add_and_delete\main.c -o CMakeFiles\linkedlist_add_and_delete.dir\main.c.s

CMakeFiles/linkedlist_add_and_delete.dir/main.c.obj.requires:

.PHONY : CMakeFiles/linkedlist_add_and_delete.dir/main.c.obj.requires

CMakeFiles/linkedlist_add_and_delete.dir/main.c.obj.provides: CMakeFiles/linkedlist_add_and_delete.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\linkedlist_add_and_delete.dir\build.make CMakeFiles/linkedlist_add_and_delete.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/linkedlist_add_and_delete.dir/main.c.obj.provides

CMakeFiles/linkedlist_add_and_delete.dir/main.c.obj.provides.build: CMakeFiles/linkedlist_add_and_delete.dir/main.c.obj


# Object files for target linkedlist_add_and_delete
linkedlist_add_and_delete_OBJECTS = \
"CMakeFiles/linkedlist_add_and_delete.dir/main.c.obj"

# External object files for target linkedlist_add_and_delete
linkedlist_add_and_delete_EXTERNAL_OBJECTS =

linkedlist_add_and_delete.exe: CMakeFiles/linkedlist_add_and_delete.dir/main.c.obj
linkedlist_add_and_delete.exe: CMakeFiles/linkedlist_add_and_delete.dir/build.make
linkedlist_add_and_delete.exe: CMakeFiles/linkedlist_add_and_delete.dir/linklibs.rsp
linkedlist_add_and_delete.exe: CMakeFiles/linkedlist_add_and_delete.dir/objects1.rsp
linkedlist_add_and_delete.exe: CMakeFiles/linkedlist_add_and_delete.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\bryan\CLionProjects\linkedlist_add_and_delete\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable linkedlist_add_and_delete.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\linkedlist_add_and_delete.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/linkedlist_add_and_delete.dir/build: linkedlist_add_and_delete.exe

.PHONY : CMakeFiles/linkedlist_add_and_delete.dir/build

CMakeFiles/linkedlist_add_and_delete.dir/requires: CMakeFiles/linkedlist_add_and_delete.dir/main.c.obj.requires

.PHONY : CMakeFiles/linkedlist_add_and_delete.dir/requires

CMakeFiles/linkedlist_add_and_delete.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\linkedlist_add_and_delete.dir\cmake_clean.cmake
.PHONY : CMakeFiles/linkedlist_add_and_delete.dir/clean

CMakeFiles/linkedlist_add_and_delete.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\bryan\CLionProjects\linkedlist_add_and_delete C:\Users\bryan\CLionProjects\linkedlist_add_and_delete C:\Users\bryan\CLionProjects\linkedlist_add_and_delete\cmake-build-debug C:\Users\bryan\CLionProjects\linkedlist_add_and_delete\cmake-build-debug C:\Users\bryan\CLionProjects\linkedlist_add_and_delete\cmake-build-debug\CMakeFiles\linkedlist_add_and_delete.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/linkedlist_add_and_delete.dir/depend

