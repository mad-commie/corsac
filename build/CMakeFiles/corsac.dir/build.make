# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/daat/Projects/C++/corsac

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/daat/Projects/C++/corsac/build

# Include any dependencies generated for this target.
include CMakeFiles/corsac.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/corsac.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/corsac.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/corsac.dir/flags.make

CMakeFiles/corsac.dir/corsac.cpp.o: CMakeFiles/corsac.dir/flags.make
CMakeFiles/corsac.dir/corsac.cpp.o: ../corsac.cpp
CMakeFiles/corsac.dir/corsac.cpp.o: CMakeFiles/corsac.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/daat/Projects/C++/corsac/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/corsac.dir/corsac.cpp.o"
	/usr/bin/g++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/corsac.dir/corsac.cpp.o -MF CMakeFiles/corsac.dir/corsac.cpp.o.d -o CMakeFiles/corsac.dir/corsac.cpp.o -c /home/daat/Projects/C++/corsac/corsac.cpp

CMakeFiles/corsac.dir/corsac.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/corsac.dir/corsac.cpp.i"
	/usr/bin/g++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/daat/Projects/C++/corsac/corsac.cpp > CMakeFiles/corsac.dir/corsac.cpp.i

CMakeFiles/corsac.dir/corsac.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/corsac.dir/corsac.cpp.s"
	/usr/bin/g++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/daat/Projects/C++/corsac/corsac.cpp -o CMakeFiles/corsac.dir/corsac.cpp.s

# Object files for target corsac
corsac_OBJECTS = \
"CMakeFiles/corsac.dir/corsac.cpp.o"

# External object files for target corsac
corsac_EXTERNAL_OBJECTS =

corsac: CMakeFiles/corsac.dir/corsac.cpp.o
corsac: CMakeFiles/corsac.dir/build.make
corsac: lib/libcorsac_lib.a
corsac: CMakeFiles/corsac.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/daat/Projects/C++/corsac/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable corsac"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/corsac.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/corsac.dir/build: corsac
.PHONY : CMakeFiles/corsac.dir/build

CMakeFiles/corsac.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/corsac.dir/cmake_clean.cmake
.PHONY : CMakeFiles/corsac.dir/clean

CMakeFiles/corsac.dir/depend:
	cd /home/daat/Projects/C++/corsac/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/daat/Projects/C++/corsac /home/daat/Projects/C++/corsac /home/daat/Projects/C++/corsac/build /home/daat/Projects/C++/corsac/build /home/daat/Projects/C++/corsac/build/CMakeFiles/corsac.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/corsac.dir/depend

