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
CMAKE_SOURCE_DIR = C:\Users\bryan\CLionProjects\bestand

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\bryan\CLionProjects\bestand\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/bestand.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bestand.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bestand.dir/flags.make

CMakeFiles/bestand.dir/main.cpp.obj: CMakeFiles/bestand.dir/flags.make
CMakeFiles/bestand.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\bryan\CLionProjects\bestand\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bestand.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\bestand.dir\main.cpp.obj -c C:\Users\bryan\CLionProjects\bestand\main.cpp

CMakeFiles/bestand.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bestand.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\bryan\CLionProjects\bestand\main.cpp > CMakeFiles\bestand.dir\main.cpp.i

CMakeFiles/bestand.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bestand.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\bryan\CLionProjects\bestand\main.cpp -o CMakeFiles\bestand.dir\main.cpp.s

CMakeFiles/bestand.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/bestand.dir/main.cpp.obj.requires

CMakeFiles/bestand.dir/main.cpp.obj.provides: CMakeFiles/bestand.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\bestand.dir\build.make CMakeFiles/bestand.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/bestand.dir/main.cpp.obj.provides

CMakeFiles/bestand.dir/main.cpp.obj.provides.build: CMakeFiles/bestand.dir/main.cpp.obj


# Object files for target bestand
bestand_OBJECTS = \
"CMakeFiles/bestand.dir/main.cpp.obj"

# External object files for target bestand
bestand_EXTERNAL_OBJECTS =

bestand.exe: CMakeFiles/bestand.dir/main.cpp.obj
bestand.exe: CMakeFiles/bestand.dir/build.make
bestand.exe: CMakeFiles/bestand.dir/linklibs.rsp
bestand.exe: CMakeFiles/bestand.dir/objects1.rsp
bestand.exe: CMakeFiles/bestand.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\bryan\CLionProjects\bestand\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bestand.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\bestand.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bestand.dir/build: bestand.exe

.PHONY : CMakeFiles/bestand.dir/build

CMakeFiles/bestand.dir/requires: CMakeFiles/bestand.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/bestand.dir/requires

CMakeFiles/bestand.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\bestand.dir\cmake_clean.cmake
.PHONY : CMakeFiles/bestand.dir/clean

CMakeFiles/bestand.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\bryan\CLionProjects\bestand C:\Users\bryan\CLionProjects\bestand C:\Users\bryan\CLionProjects\bestand\cmake-build-debug C:\Users\bryan\CLionProjects\bestand\cmake-build-debug C:\Users\bryan\CLionProjects\bestand\cmake-build-debug\CMakeFiles\bestand.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bestand.dir/depend

