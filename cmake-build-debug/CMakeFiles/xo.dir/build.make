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
include CMakeFiles/xo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/xo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/xo.dir/flags.make

CMakeFiles/xo.dir/xo/border.c.obj: CMakeFiles/xo.dir/flags.make
CMakeFiles/xo.dir/xo/border.c.obj: ../xo/border.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Sabbrumm\CLionProjects\C-NOVA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/xo.dir/xo/border.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\xo.dir\xo\border.c.obj   -c C:\Users\Sabbrumm\CLionProjects\C-NOVA\xo\border.c

CMakeFiles/xo.dir/xo/border.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/xo.dir/xo/border.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Sabbrumm\CLionProjects\C-NOVA\xo\border.c > CMakeFiles\xo.dir\xo\border.c.i

CMakeFiles/xo.dir/xo/border.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/xo.dir/xo/border.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Sabbrumm\CLionProjects\C-NOVA\xo\border.c -o CMakeFiles\xo.dir\xo\border.c.s

# Object files for target xo
xo_OBJECTS = \
"CMakeFiles/xo.dir/xo/border.c.obj"

# External object files for target xo
xo_EXTERNAL_OBJECTS =

xo.exe: CMakeFiles/xo.dir/xo/border.c.obj
xo.exe: CMakeFiles/xo.dir/build.make
xo.exe: CMakeFiles/xo.dir/linklibs.rsp
xo.exe: CMakeFiles/xo.dir/objects1.rsp
xo.exe: CMakeFiles/xo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Sabbrumm\CLionProjects\C-NOVA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable xo.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\xo.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/xo.dir/build: xo.exe

.PHONY : CMakeFiles/xo.dir/build

CMakeFiles/xo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\xo.dir\cmake_clean.cmake
.PHONY : CMakeFiles/xo.dir/clean

CMakeFiles/xo.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Sabbrumm\CLionProjects\C-NOVA C:\Users\Sabbrumm\CLionProjects\C-NOVA C:\Users\Sabbrumm\CLionProjects\C-NOVA\cmake-build-debug C:\Users\Sabbrumm\CLionProjects\C-NOVA\cmake-build-debug C:\Users\Sabbrumm\CLionProjects\C-NOVA\cmake-build-debug\CMakeFiles\xo.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/xo.dir/depend
