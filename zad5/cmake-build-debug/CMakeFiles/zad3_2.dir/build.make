# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /snap/clion/111/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/111/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kacper/CLionProjects/zad4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kacper/CLionProjects/zad4/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/zad3_2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/zad3_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/zad3_2.dir/flags.make

CMakeFiles/zad3_2.dir/main.cpp.o: CMakeFiles/zad3_2.dir/flags.make
CMakeFiles/zad3_2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kacper/CLionProjects/zad4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/zad3_2.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/zad3_2.dir/main.cpp.o -c /home/kacper/CLionProjects/zad4/main.cpp

CMakeFiles/zad3_2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zad3_2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kacper/CLionProjects/zad4/main.cpp > CMakeFiles/zad3_2.dir/main.cpp.i

CMakeFiles/zad3_2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zad3_2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kacper/CLionProjects/zad4/main.cpp -o CMakeFiles/zad3_2.dir/main.cpp.s

CMakeFiles/zad3_2.dir/Matrix.cpp.o: CMakeFiles/zad3_2.dir/flags.make
CMakeFiles/zad3_2.dir/Matrix.cpp.o: ../Matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kacper/CLionProjects/zad4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/zad3_2.dir/Matrix.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/zad3_2.dir/Matrix.cpp.o -c /home/kacper/CLionProjects/zad4/Matrix.cpp

CMakeFiles/zad3_2.dir/Matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zad3_2.dir/Matrix.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kacper/CLionProjects/zad4/Matrix.cpp > CMakeFiles/zad3_2.dir/Matrix.cpp.i

CMakeFiles/zad3_2.dir/Matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zad3_2.dir/Matrix.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kacper/CLionProjects/zad4/Matrix.cpp -o CMakeFiles/zad3_2.dir/Matrix.cpp.s

CMakeFiles/zad3_2.dir/Vector.cpp.o: CMakeFiles/zad3_2.dir/flags.make
CMakeFiles/zad3_2.dir/Vector.cpp.o: ../Vector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kacper/CLionProjects/zad4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/zad3_2.dir/Vector.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/zad3_2.dir/Vector.cpp.o -c /home/kacper/CLionProjects/zad4/Vector.cpp

CMakeFiles/zad3_2.dir/Vector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zad3_2.dir/Vector.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kacper/CLionProjects/zad4/Vector.cpp > CMakeFiles/zad3_2.dir/Vector.cpp.i

CMakeFiles/zad3_2.dir/Vector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zad3_2.dir/Vector.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kacper/CLionProjects/zad4/Vector.cpp -o CMakeFiles/zad3_2.dir/Vector.cpp.s

CMakeFiles/zad3_2.dir/SystemOfLinearEquations.cpp.o: CMakeFiles/zad3_2.dir/flags.make
CMakeFiles/zad3_2.dir/SystemOfLinearEquations.cpp.o: ../SystemOfLinearEquations.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kacper/CLionProjects/zad4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/zad3_2.dir/SystemOfLinearEquations.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/zad3_2.dir/SystemOfLinearEquations.cpp.o -c /home/kacper/CLionProjects/zad4/SystemOfLinearEquations.cpp

CMakeFiles/zad3_2.dir/SystemOfLinearEquations.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zad3_2.dir/SystemOfLinearEquations.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kacper/CLionProjects/zad4/SystemOfLinearEquations.cpp > CMakeFiles/zad3_2.dir/SystemOfLinearEquations.cpp.i

CMakeFiles/zad3_2.dir/SystemOfLinearEquations.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zad3_2.dir/SystemOfLinearEquations.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kacper/CLionProjects/zad4/SystemOfLinearEquations.cpp -o CMakeFiles/zad3_2.dir/SystemOfLinearEquations.cpp.s

# Object files for target zad3_2
zad3_2_OBJECTS = \
"CMakeFiles/zad3_2.dir/main.cpp.o" \
"CMakeFiles/zad3_2.dir/Matrix.cpp.o" \
"CMakeFiles/zad3_2.dir/Vector.cpp.o" \
"CMakeFiles/zad3_2.dir/SystemOfLinearEquations.cpp.o"

# External object files for target zad3_2
zad3_2_EXTERNAL_OBJECTS =

zad3_2: CMakeFiles/zad3_2.dir/main.cpp.o
zad3_2: CMakeFiles/zad3_2.dir/Matrix.cpp.o
zad3_2: CMakeFiles/zad3_2.dir/Vector.cpp.o
zad3_2: CMakeFiles/zad3_2.dir/SystemOfLinearEquations.cpp.o
zad3_2: CMakeFiles/zad3_2.dir/build.make
zad3_2: CMakeFiles/zad3_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kacper/CLionProjects/zad4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable zad3_2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/zad3_2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/zad3_2.dir/build: zad3_2

.PHONY : CMakeFiles/zad3_2.dir/build

CMakeFiles/zad3_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/zad3_2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/zad3_2.dir/clean

CMakeFiles/zad3_2.dir/depend:
	cd /home/kacper/CLionProjects/zad4/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kacper/CLionProjects/zad4 /home/kacper/CLionProjects/zad4 /home/kacper/CLionProjects/zad4/cmake-build-debug /home/kacper/CLionProjects/zad4/cmake-build-debug /home/kacper/CLionProjects/zad4/cmake-build-debug/CMakeFiles/zad3_2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/zad3_2.dir/depend

