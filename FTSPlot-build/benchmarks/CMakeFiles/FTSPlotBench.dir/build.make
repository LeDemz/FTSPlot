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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/demz/1_SOFTWARE/FTSPlot

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/demz/1_SOFTWARE/FTSPlot/FTSPlot-build

# Include any dependencies generated for this target.
include benchmarks/CMakeFiles/FTSPlotBench.dir/depend.make

# Include the progress variables for this target.
include benchmarks/CMakeFiles/FTSPlotBench.dir/progress.make

# Include the compile flags for this target's objects.
include benchmarks/CMakeFiles/FTSPlotBench.dir/flags.make

benchmarks/FTSPlotBenchMainWindow.moc: ../benchmarks/FTSPlotBenchMainWindow.h
benchmarks/FTSPlotBenchMainWindow.moc: benchmarks/FTSPlotBenchMainWindow.moc_parameters
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/demz/1_SOFTWARE/FTSPlot/FTSPlot-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating FTSPlotBenchMainWindow.moc"
	cd /home/demz/1_SOFTWARE/FTSPlot/FTSPlot-build/benchmarks && /usr/lib/x86_64-linux-gnu/qt4/bin/moc @/home/demz/1_SOFTWARE/FTSPlot/FTSPlot-build/benchmarks/FTSPlotBenchMainWindow.moc_parameters

benchmarks/ui_FTSPlotBenchMainWindow.h: ../benchmarks/FTSPlotBenchMainWindow.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/demz/1_SOFTWARE/FTSPlot/FTSPlot-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ui_FTSPlotBenchMainWindow.h"
	cd /home/demz/1_SOFTWARE/FTSPlot/FTSPlot-build/benchmarks && /usr/lib/x86_64-linux-gnu/qt4/bin/uic -o /home/demz/1_SOFTWARE/FTSPlot/FTSPlot-build/benchmarks/ui_FTSPlotBenchMainWindow.h /home/demz/1_SOFTWARE/FTSPlot/benchmarks/FTSPlotBenchMainWindow.ui

benchmarks/CMakeFiles/FTSPlotBench.dir/FTSPlotBenchMainWindow.cpp.o: benchmarks/CMakeFiles/FTSPlotBench.dir/flags.make
benchmarks/CMakeFiles/FTSPlotBench.dir/FTSPlotBenchMainWindow.cpp.o: ../benchmarks/FTSPlotBenchMainWindow.cpp
benchmarks/CMakeFiles/FTSPlotBench.dir/FTSPlotBenchMainWindow.cpp.o: benchmarks/FTSPlotBenchMainWindow.moc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/demz/1_SOFTWARE/FTSPlot/FTSPlot-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object benchmarks/CMakeFiles/FTSPlotBench.dir/FTSPlotBenchMainWindow.cpp.o"
	cd /home/demz/1_SOFTWARE/FTSPlot/FTSPlot-build/benchmarks && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FTSPlotBench.dir/FTSPlotBenchMainWindow.cpp.o -c /home/demz/1_SOFTWARE/FTSPlot/benchmarks/FTSPlotBenchMainWindow.cpp

benchmarks/CMakeFiles/FTSPlotBench.dir/FTSPlotBenchMainWindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FTSPlotBench.dir/FTSPlotBenchMainWindow.cpp.i"
	cd /home/demz/1_SOFTWARE/FTSPlot/FTSPlot-build/benchmarks && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/demz/1_SOFTWARE/FTSPlot/benchmarks/FTSPlotBenchMainWindow.cpp > CMakeFiles/FTSPlotBench.dir/FTSPlotBenchMainWindow.cpp.i

benchmarks/CMakeFiles/FTSPlotBench.dir/FTSPlotBenchMainWindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FTSPlotBench.dir/FTSPlotBenchMainWindow.cpp.s"
	cd /home/demz/1_SOFTWARE/FTSPlot/FTSPlot-build/benchmarks && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/demz/1_SOFTWARE/FTSPlot/benchmarks/FTSPlotBenchMainWindow.cpp -o CMakeFiles/FTSPlotBench.dir/FTSPlotBenchMainWindow.cpp.s

benchmarks/CMakeFiles/FTSPlotBench.dir/FTSPlotBench.cpp.o: benchmarks/CMakeFiles/FTSPlotBench.dir/flags.make
benchmarks/CMakeFiles/FTSPlotBench.dir/FTSPlotBench.cpp.o: ../benchmarks/FTSPlotBench.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/demz/1_SOFTWARE/FTSPlot/FTSPlot-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object benchmarks/CMakeFiles/FTSPlotBench.dir/FTSPlotBench.cpp.o"
	cd /home/demz/1_SOFTWARE/FTSPlot/FTSPlot-build/benchmarks && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FTSPlotBench.dir/FTSPlotBench.cpp.o -c /home/demz/1_SOFTWARE/FTSPlot/benchmarks/FTSPlotBench.cpp

benchmarks/CMakeFiles/FTSPlotBench.dir/FTSPlotBench.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FTSPlotBench.dir/FTSPlotBench.cpp.i"
	cd /home/demz/1_SOFTWARE/FTSPlot/FTSPlot-build/benchmarks && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/demz/1_SOFTWARE/FTSPlot/benchmarks/FTSPlotBench.cpp > CMakeFiles/FTSPlotBench.dir/FTSPlotBench.cpp.i

benchmarks/CMakeFiles/FTSPlotBench.dir/FTSPlotBench.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FTSPlotBench.dir/FTSPlotBench.cpp.s"
	cd /home/demz/1_SOFTWARE/FTSPlot/FTSPlot-build/benchmarks && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/demz/1_SOFTWARE/FTSPlot/benchmarks/FTSPlotBench.cpp -o CMakeFiles/FTSPlotBench.dir/FTSPlotBench.cpp.s

# Object files for target FTSPlotBench
FTSPlotBench_OBJECTS = \
"CMakeFiles/FTSPlotBench.dir/FTSPlotBenchMainWindow.cpp.o" \
"CMakeFiles/FTSPlotBench.dir/FTSPlotBench.cpp.o"

# External object files for target FTSPlotBench
FTSPlotBench_EXTERNAL_OBJECTS =

benchmarks/FTSPlotBench: benchmarks/CMakeFiles/FTSPlotBench.dir/FTSPlotBenchMainWindow.cpp.o
benchmarks/FTSPlotBench: benchmarks/CMakeFiles/FTSPlotBench.dir/FTSPlotBench.cpp.o
benchmarks/FTSPlotBench: benchmarks/CMakeFiles/FTSPlotBench.dir/build.make
benchmarks/FTSPlotBench: benchmarks/libFTSPlotBenchLib.a
benchmarks/FTSPlotBench: /usr/lib/x86_64-linux-gnu/libQtOpenGL.so
benchmarks/FTSPlotBench: /usr/lib/x86_64-linux-gnu/libQtGui.so
benchmarks/FTSPlotBench: /usr/lib/x86_64-linux-gnu/libQtCore.so
benchmarks/FTSPlotBench: /usr/lib/x86_64-linux-gnu/libGL.so
benchmarks/FTSPlotBench: /usr/lib/x86_64-linux-gnu/libGLU.so
benchmarks/FTSPlotBench: /usr/lib/x86_64-linux-gnu/libSM.so
benchmarks/FTSPlotBench: /usr/lib/x86_64-linux-gnu/libICE.so
benchmarks/FTSPlotBench: /usr/lib/x86_64-linux-gnu/libX11.so
benchmarks/FTSPlotBench: /usr/lib/x86_64-linux-gnu/libXext.so
benchmarks/FTSPlotBench: benchmarks/CMakeFiles/FTSPlotBench.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/demz/1_SOFTWARE/FTSPlot/FTSPlot-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable FTSPlotBench"
	cd /home/demz/1_SOFTWARE/FTSPlot/FTSPlot-build/benchmarks && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FTSPlotBench.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
benchmarks/CMakeFiles/FTSPlotBench.dir/build: benchmarks/FTSPlotBench

.PHONY : benchmarks/CMakeFiles/FTSPlotBench.dir/build

benchmarks/CMakeFiles/FTSPlotBench.dir/clean:
	cd /home/demz/1_SOFTWARE/FTSPlot/FTSPlot-build/benchmarks && $(CMAKE_COMMAND) -P CMakeFiles/FTSPlotBench.dir/cmake_clean.cmake
.PHONY : benchmarks/CMakeFiles/FTSPlotBench.dir/clean

benchmarks/CMakeFiles/FTSPlotBench.dir/depend: benchmarks/FTSPlotBenchMainWindow.moc
benchmarks/CMakeFiles/FTSPlotBench.dir/depend: benchmarks/ui_FTSPlotBenchMainWindow.h
	cd /home/demz/1_SOFTWARE/FTSPlot/FTSPlot-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/demz/1_SOFTWARE/FTSPlot /home/demz/1_SOFTWARE/FTSPlot/benchmarks /home/demz/1_SOFTWARE/FTSPlot/FTSPlot-build /home/demz/1_SOFTWARE/FTSPlot/FTSPlot-build/benchmarks /home/demz/1_SOFTWARE/FTSPlot/FTSPlot-build/benchmarks/CMakeFiles/FTSPlotBench.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : benchmarks/CMakeFiles/FTSPlotBench.dir/depend

