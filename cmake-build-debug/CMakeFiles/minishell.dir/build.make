# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /cygdrive/c/Users/kopi9/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/kopi9/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Clion_projects/minishell

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Clion_projects/minishell/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/minishell.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/minishell.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/minishell.dir/flags.make

CMakeFiles/minishell.dir/Sources/minishell.c.o: CMakeFiles/minishell.dir/flags.make
CMakeFiles/minishell.dir/Sources/minishell.c.o: ../Sources/minishell.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Clion_projects/minishell/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/minishell.dir/Sources/minishell.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/minishell.dir/Sources/minishell.c.o   -c /cygdrive/c/Clion_projects/minishell/Sources/minishell.c

CMakeFiles/minishell.dir/Sources/minishell.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/minishell.dir/Sources/minishell.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Clion_projects/minishell/Sources/minishell.c > CMakeFiles/minishell.dir/Sources/minishell.c.i

CMakeFiles/minishell.dir/Sources/minishell.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/minishell.dir/Sources/minishell.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Clion_projects/minishell/Sources/minishell.c -o CMakeFiles/minishell.dir/Sources/minishell.c.s

CMakeFiles/minishell.dir/Sources/ft.c.o: CMakeFiles/minishell.dir/flags.make
CMakeFiles/minishell.dir/Sources/ft.c.o: ../Sources/ft.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Clion_projects/minishell/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/minishell.dir/Sources/ft.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/minishell.dir/Sources/ft.c.o   -c /cygdrive/c/Clion_projects/minishell/Sources/ft.c

CMakeFiles/minishell.dir/Sources/ft.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/minishell.dir/Sources/ft.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Clion_projects/minishell/Sources/ft.c > CMakeFiles/minishell.dir/Sources/ft.c.i

CMakeFiles/minishell.dir/Sources/ft.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/minishell.dir/Sources/ft.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Clion_projects/minishell/Sources/ft.c -o CMakeFiles/minishell.dir/Sources/ft.c.s

CMakeFiles/minishell.dir/Sources/ft_strsplit.c.o: CMakeFiles/minishell.dir/flags.make
CMakeFiles/minishell.dir/Sources/ft_strsplit.c.o: ../Sources/ft_strsplit.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Clion_projects/minishell/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/minishell.dir/Sources/ft_strsplit.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/minishell.dir/Sources/ft_strsplit.c.o   -c /cygdrive/c/Clion_projects/minishell/Sources/ft_strsplit.c

CMakeFiles/minishell.dir/Sources/ft_strsplit.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/minishell.dir/Sources/ft_strsplit.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Clion_projects/minishell/Sources/ft_strsplit.c > CMakeFiles/minishell.dir/Sources/ft_strsplit.c.i

CMakeFiles/minishell.dir/Sources/ft_strsplit.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/minishell.dir/Sources/ft_strsplit.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Clion_projects/minishell/Sources/ft_strsplit.c -o CMakeFiles/minishell.dir/Sources/ft_strsplit.c.s

CMakeFiles/minishell.dir/Sources/commands.c.o: CMakeFiles/minishell.dir/flags.make
CMakeFiles/minishell.dir/Sources/commands.c.o: ../Sources/commands.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Clion_projects/minishell/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/minishell.dir/Sources/commands.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/minishell.dir/Sources/commands.c.o   -c /cygdrive/c/Clion_projects/minishell/Sources/commands.c

CMakeFiles/minishell.dir/Sources/commands.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/minishell.dir/Sources/commands.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Clion_projects/minishell/Sources/commands.c > CMakeFiles/minishell.dir/Sources/commands.c.i

CMakeFiles/minishell.dir/Sources/commands.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/minishell.dir/Sources/commands.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Clion_projects/minishell/Sources/commands.c -o CMakeFiles/minishell.dir/Sources/commands.c.s

CMakeFiles/minishell.dir/Sources/exit.c.o: CMakeFiles/minishell.dir/flags.make
CMakeFiles/minishell.dir/Sources/exit.c.o: ../Sources/exit.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Clion_projects/minishell/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/minishell.dir/Sources/exit.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/minishell.dir/Sources/exit.c.o   -c /cygdrive/c/Clion_projects/minishell/Sources/exit.c

CMakeFiles/minishell.dir/Sources/exit.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/minishell.dir/Sources/exit.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Clion_projects/minishell/Sources/exit.c > CMakeFiles/minishell.dir/Sources/exit.c.i

CMakeFiles/minishell.dir/Sources/exit.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/minishell.dir/Sources/exit.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Clion_projects/minishell/Sources/exit.c -o CMakeFiles/minishell.dir/Sources/exit.c.s

CMakeFiles/minishell.dir/Sources/unstandart.c.o: CMakeFiles/minishell.dir/flags.make
CMakeFiles/minishell.dir/Sources/unstandart.c.o: ../Sources/unstandart.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Clion_projects/minishell/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/minishell.dir/Sources/unstandart.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/minishell.dir/Sources/unstandart.c.o   -c /cygdrive/c/Clion_projects/minishell/Sources/unstandart.c

CMakeFiles/minishell.dir/Sources/unstandart.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/minishell.dir/Sources/unstandart.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Clion_projects/minishell/Sources/unstandart.c > CMakeFiles/minishell.dir/Sources/unstandart.c.i

CMakeFiles/minishell.dir/Sources/unstandart.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/minishell.dir/Sources/unstandart.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Clion_projects/minishell/Sources/unstandart.c -o CMakeFiles/minishell.dir/Sources/unstandart.c.s

# Object files for target minishell
minishell_OBJECTS = \
"CMakeFiles/minishell.dir/Sources/minishell.c.o" \
"CMakeFiles/minishell.dir/Sources/ft.c.o" \
"CMakeFiles/minishell.dir/Sources/ft_strsplit.c.o" \
"CMakeFiles/minishell.dir/Sources/commands.c.o" \
"CMakeFiles/minishell.dir/Sources/exit.c.o" \
"CMakeFiles/minishell.dir/Sources/unstandart.c.o"

# External object files for target minishell
minishell_EXTERNAL_OBJECTS =

minishell.exe: CMakeFiles/minishell.dir/Sources/minishell.c.o
minishell.exe: CMakeFiles/minishell.dir/Sources/ft.c.o
minishell.exe: CMakeFiles/minishell.dir/Sources/ft_strsplit.c.o
minishell.exe: CMakeFiles/minishell.dir/Sources/commands.c.o
minishell.exe: CMakeFiles/minishell.dir/Sources/exit.c.o
minishell.exe: CMakeFiles/minishell.dir/Sources/unstandart.c.o
minishell.exe: CMakeFiles/minishell.dir/build.make
minishell.exe: CMakeFiles/minishell.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Clion_projects/minishell/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking C executable minishell.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/minishell.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/minishell.dir/build: minishell.exe

.PHONY : CMakeFiles/minishell.dir/build

CMakeFiles/minishell.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/minishell.dir/cmake_clean.cmake
.PHONY : CMakeFiles/minishell.dir/clean

CMakeFiles/minishell.dir/depend:
	cd /cygdrive/c/Clion_projects/minishell/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Clion_projects/minishell /cygdrive/c/Clion_projects/minishell /cygdrive/c/Clion_projects/minishell/cmake-build-debug /cygdrive/c/Clion_projects/minishell/cmake-build-debug /cygdrive/c/Clion_projects/minishell/cmake-build-debug/CMakeFiles/minishell.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/minishell.dir/depend

