# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Sabbrumm\CLionProjects\C-NOVA

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Sabbrumm\CLionProjects\C-NOVA\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/overflow.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/overflow.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/overflow.dir/flags.make

CMakeFiles/overflow.dir/calc1/overflow.c.obj: CMakeFiles/overflow.dir/flags.make
CMakeFiles/overflow.dir/calc1/overflow.c.obj: ../calc1/overflow.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Sabbrumm\CLionProjects\C-NOVA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/overflow.dir/calc1/overflow.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\overflow.dir\calc1\overflow.c.obj   -c C:\Users\Sabbrumm\CLionProjects\C-NOVA\calc1\overflow.c

CMakeFiles/overflow.dir/calc1/overflow.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/overflow.dir/calc1/overflow.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Sabbrumm\CLionProjects\C-NOVA\calc1\overflow.c > CMakeFiles\overflow.dir\calc1\overflow.c.i

CMakeFiles/overflow.dir/calc1/overflow.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/overflow.dir/calc1/overflow.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Sabbrumm\CLionProjects\C-NOVA\calc1\overflow.c -o CMakeFiles\overflow.dir\calc1\overflow.c.s

# Object files for target overflow
overflow_OBJECTS = \
"CMakeFiles/overflow.dir/calc1/overflow.c.obj"

# External object files for target overflow
overflow_EXTERNAL_OBJECTS =

overflow.exe: CMakeFiles/overflow.dir/calc1/overflow.c.obj
overflow.exe: CMakeFiles/overflow.dir/build.make
overflow.exe: CMakeFiles/overflow.dir/linklibs.rsp
overflow.exe: CMakeFiles/overflow.dir/objects1.rsp
overflow.exe: CMakeFiles/overflow.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Sabbrumm\CLionProjects\C-NOVA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable overflow.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\overflow.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/overflow.dir/build: overflow.exe

.PHONY : CMakeFiles/overflow.dir/build

CMakeFiles/overflow.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\overflow.dir\cmake_clean.cmake
.PHONY : CMakeFiles/overflow.dir/clean

CMakeFiles/overflow.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Sabbrumm\CLionProjects\C-NOVA C:\Users\Sabbrumm\CLionProjects\C-NOVA C:\Users\Sabbrumm\CLionProjects\C-NOVA\cmake-build-debug C:\Users\Sabbrumm\CLionProjects\C-NOVA\cmake-build-debug C:\Users\Sabbrumm\CLionProjects\C-NOVA\cmake-build-debug\CMakeFiles\overflow.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/overflow.dir/depend
