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
CMAKE_COMMAND = /home/tuminh14/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/201.7846.88/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/tuminh14/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/201.7846.88/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /media/tuminh14/OpenGl/FPS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/tuminh14/OpenGl/FPS/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/main.cpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main.cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.cpp.dir/flags.make

CMakeFiles/main.cpp.dir/main.cpp.o: CMakeFiles/main.cpp.dir/flags.make
CMakeFiles/main.cpp.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/tuminh14/OpenGl/FPS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.cpp.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.cpp.dir/main.cpp.o -c /media/tuminh14/OpenGl/FPS/main.cpp

CMakeFiles/main.cpp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.cpp.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/tuminh14/OpenGl/FPS/main.cpp > CMakeFiles/main.cpp.dir/main.cpp.i

CMakeFiles/main.cpp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.cpp.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/tuminh14/OpenGl/FPS/main.cpp -o CMakeFiles/main.cpp.dir/main.cpp.s

CMakeFiles/main.cpp.dir/SupportClass/vector3d.cpp.o: CMakeFiles/main.cpp.dir/flags.make
CMakeFiles/main.cpp.dir/SupportClass/vector3d.cpp.o: ../SupportClass/vector3d.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/tuminh14/OpenGl/FPS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.cpp.dir/SupportClass/vector3d.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.cpp.dir/SupportClass/vector3d.cpp.o -c /media/tuminh14/OpenGl/FPS/SupportClass/vector3d.cpp

CMakeFiles/main.cpp.dir/SupportClass/vector3d.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.cpp.dir/SupportClass/vector3d.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/tuminh14/OpenGl/FPS/SupportClass/vector3d.cpp > CMakeFiles/main.cpp.dir/SupportClass/vector3d.cpp.i

CMakeFiles/main.cpp.dir/SupportClass/vector3d.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.cpp.dir/SupportClass/vector3d.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/tuminh14/OpenGl/FPS/SupportClass/vector3d.cpp -o CMakeFiles/main.cpp.dir/SupportClass/vector3d.cpp.s

# Object files for target main.cpp
main_cpp_OBJECTS = \
"CMakeFiles/main.cpp.dir/main.cpp.o" \
"CMakeFiles/main.cpp.dir/SupportClass/vector3d.cpp.o"

# External object files for target main.cpp
main_cpp_EXTERNAL_OBJECTS =

../bin/main.cpp: CMakeFiles/main.cpp.dir/main.cpp.o
../bin/main.cpp: CMakeFiles/main.cpp.dir/SupportClass/vector3d.cpp.o
../bin/main.cpp: CMakeFiles/main.cpp.dir/build.make
../bin/main.cpp: /usr/lib/x86_64-linux-gnu/libOpenGL.so
../bin/main.cpp: /usr/lib/x86_64-linux-gnu/libGLX.so
../bin/main.cpp: /usr/lib/x86_64-linux-gnu/libGLU.so
../bin/main.cpp: /usr/lib/x86_64-linux-gnu/libglut.so
../bin/main.cpp: /usr/lib/x86_64-linux-gnu/libXmu.so
../bin/main.cpp: /usr/lib/x86_64-linux-gnu/libXi.so
../bin/main.cpp: CMakeFiles/main.cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/tuminh14/OpenGl/FPS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/main.cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.cpp.dir/build: ../bin/main.cpp

.PHONY : CMakeFiles/main.cpp.dir/build

CMakeFiles/main.cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.cpp.dir/clean

CMakeFiles/main.cpp.dir/depend:
	cd /media/tuminh14/OpenGl/FPS/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/tuminh14/OpenGl/FPS /media/tuminh14/OpenGl/FPS /media/tuminh14/OpenGl/FPS/cmake-build-debug /media/tuminh14/OpenGl/FPS/cmake-build-debug /media/tuminh14/OpenGl/FPS/cmake-build-debug/CMakeFiles/main.cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.cpp.dir/depend
