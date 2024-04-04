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
CMAKE_SOURCE_DIR = /mnt/DATA/muon_calibration/muon_calibration_binary

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/DATA/muon_calibration/muon_calibration_binary/build

# Include any dependencies generated for this target.
include CMakeFiles/Calibrator.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Calibrator.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Calibrator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Calibrator.dir/flags.make

CMakeFiles/Calibrator.dir/Calibrator.C.o: CMakeFiles/Calibrator.dir/flags.make
CMakeFiles/Calibrator.dir/Calibrator.C.o: ../Calibrator.C
CMakeFiles/Calibrator.dir/Calibrator.C.o: CMakeFiles/Calibrator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/DATA/muon_calibration/muon_calibration_binary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Calibrator.dir/Calibrator.C.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Calibrator.dir/Calibrator.C.o -MF CMakeFiles/Calibrator.dir/Calibrator.C.o.d -o CMakeFiles/Calibrator.dir/Calibrator.C.o -c /mnt/DATA/muon_calibration/muon_calibration_binary/Calibrator.C

CMakeFiles/Calibrator.dir/Calibrator.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Calibrator.dir/Calibrator.C.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/DATA/muon_calibration/muon_calibration_binary/Calibrator.C > CMakeFiles/Calibrator.dir/Calibrator.C.i

CMakeFiles/Calibrator.dir/Calibrator.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Calibrator.dir/Calibrator.C.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/DATA/muon_calibration/muon_calibration_binary/Calibrator.C -o CMakeFiles/Calibrator.dir/Calibrator.C.s

CMakeFiles/Calibrator.dir/src/BinaryDataStructs.cpp.o: CMakeFiles/Calibrator.dir/flags.make
CMakeFiles/Calibrator.dir/src/BinaryDataStructs.cpp.o: ../src/BinaryDataStructs.cpp
CMakeFiles/Calibrator.dir/src/BinaryDataStructs.cpp.o: CMakeFiles/Calibrator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/DATA/muon_calibration/muon_calibration_binary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Calibrator.dir/src/BinaryDataStructs.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Calibrator.dir/src/BinaryDataStructs.cpp.o -MF CMakeFiles/Calibrator.dir/src/BinaryDataStructs.cpp.o.d -o CMakeFiles/Calibrator.dir/src/BinaryDataStructs.cpp.o -c /mnt/DATA/muon_calibration/muon_calibration_binary/src/BinaryDataStructs.cpp

CMakeFiles/Calibrator.dir/src/BinaryDataStructs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Calibrator.dir/src/BinaryDataStructs.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/DATA/muon_calibration/muon_calibration_binary/src/BinaryDataStructs.cpp > CMakeFiles/Calibrator.dir/src/BinaryDataStructs.cpp.i

CMakeFiles/Calibrator.dir/src/BinaryDataStructs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Calibrator.dir/src/BinaryDataStructs.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/DATA/muon_calibration/muon_calibration_binary/src/BinaryDataStructs.cpp -o CMakeFiles/Calibrator.dir/src/BinaryDataStructs.cpp.s

CMakeFiles/Calibrator.dir/src/ChannelEntry.cpp.o: CMakeFiles/Calibrator.dir/flags.make
CMakeFiles/Calibrator.dir/src/ChannelEntry.cpp.o: ../src/ChannelEntry.cpp
CMakeFiles/Calibrator.dir/src/ChannelEntry.cpp.o: CMakeFiles/Calibrator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/DATA/muon_calibration/muon_calibration_binary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Calibrator.dir/src/ChannelEntry.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Calibrator.dir/src/ChannelEntry.cpp.o -MF CMakeFiles/Calibrator.dir/src/ChannelEntry.cpp.o.d -o CMakeFiles/Calibrator.dir/src/ChannelEntry.cpp.o -c /mnt/DATA/muon_calibration/muon_calibration_binary/src/ChannelEntry.cpp

CMakeFiles/Calibrator.dir/src/ChannelEntry.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Calibrator.dir/src/ChannelEntry.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/DATA/muon_calibration/muon_calibration_binary/src/ChannelEntry.cpp > CMakeFiles/Calibrator.dir/src/ChannelEntry.cpp.i

CMakeFiles/Calibrator.dir/src/ChannelEntry.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Calibrator.dir/src/ChannelEntry.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/DATA/muon_calibration/muon_calibration_binary/src/ChannelEntry.cpp -o CMakeFiles/Calibrator.dir/src/ChannelEntry.cpp.s

CMakeFiles/Calibrator.dir/src/PSDmuonTracker.cpp.o: CMakeFiles/Calibrator.dir/flags.make
CMakeFiles/Calibrator.dir/src/PSDmuonTracker.cpp.o: ../src/PSDmuonTracker.cpp
CMakeFiles/Calibrator.dir/src/PSDmuonTracker.cpp.o: CMakeFiles/Calibrator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/DATA/muon_calibration/muon_calibration_binary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Calibrator.dir/src/PSDmuonTracker.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Calibrator.dir/src/PSDmuonTracker.cpp.o -MF CMakeFiles/Calibrator.dir/src/PSDmuonTracker.cpp.o.d -o CMakeFiles/Calibrator.dir/src/PSDmuonTracker.cpp.o -c /mnt/DATA/muon_calibration/muon_calibration_binary/src/PSDmuonTracker.cpp

CMakeFiles/Calibrator.dir/src/PSDmuonTracker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Calibrator.dir/src/PSDmuonTracker.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/DATA/muon_calibration/muon_calibration_binary/src/PSDmuonTracker.cpp > CMakeFiles/Calibrator.dir/src/PSDmuonTracker.cpp.i

CMakeFiles/Calibrator.dir/src/PSDmuonTracker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Calibrator.dir/src/PSDmuonTracker.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/DATA/muon_calibration/muon_calibration_binary/src/PSDmuonTracker.cpp -o CMakeFiles/Calibrator.dir/src/PSDmuonTracker.cpp.s

CMakeFiles/Calibrator.dir/src/test.cpp.o: CMakeFiles/Calibrator.dir/flags.make
CMakeFiles/Calibrator.dir/src/test.cpp.o: ../src/test.cpp
CMakeFiles/Calibrator.dir/src/test.cpp.o: CMakeFiles/Calibrator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/DATA/muon_calibration/muon_calibration_binary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Calibrator.dir/src/test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Calibrator.dir/src/test.cpp.o -MF CMakeFiles/Calibrator.dir/src/test.cpp.o.d -o CMakeFiles/Calibrator.dir/src/test.cpp.o -c /mnt/DATA/muon_calibration/muon_calibration_binary/src/test.cpp

CMakeFiles/Calibrator.dir/src/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Calibrator.dir/src/test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/DATA/muon_calibration/muon_calibration_binary/src/test.cpp > CMakeFiles/Calibrator.dir/src/test.cpp.i

CMakeFiles/Calibrator.dir/src/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Calibrator.dir/src/test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/DATA/muon_calibration/muon_calibration_binary/src/test.cpp -o CMakeFiles/Calibrator.dir/src/test.cpp.s

# Object files for target Calibrator
Calibrator_OBJECTS = \
"CMakeFiles/Calibrator.dir/Calibrator.C.o" \
"CMakeFiles/Calibrator.dir/src/BinaryDataStructs.cpp.o" \
"CMakeFiles/Calibrator.dir/src/ChannelEntry.cpp.o" \
"CMakeFiles/Calibrator.dir/src/PSDmuonTracker.cpp.o" \
"CMakeFiles/Calibrator.dir/src/test.cpp.o"

# External object files for target Calibrator
Calibrator_EXTERNAL_OBJECTS =

Calibrator: CMakeFiles/Calibrator.dir/Calibrator.C.o
Calibrator: CMakeFiles/Calibrator.dir/src/BinaryDataStructs.cpp.o
Calibrator: CMakeFiles/Calibrator.dir/src/ChannelEntry.cpp.o
Calibrator: CMakeFiles/Calibrator.dir/src/PSDmuonTracker.cpp.o
Calibrator: CMakeFiles/Calibrator.dir/src/test.cpp.o
Calibrator: CMakeFiles/Calibrator.dir/build.make
Calibrator: libCustomClassDictionary.so
Calibrator: /home/doc/root_build/lib/libTree.so
Calibrator: /home/doc/root_build/lib/libGpad.so
Calibrator: /home/doc/root_build/lib/libPhysics.so
Calibrator: /home/doc/root_build/lib/libGraf.so
Calibrator: /home/doc/root_build/lib/libHist.so
Calibrator: /home/doc/root_build/lib/libMatrix.so
Calibrator: /home/doc/root_build/lib/libGenVector.so
Calibrator: /home/doc/root_build/lib/libMathCore.so
Calibrator: /home/doc/root_build/lib/libImt.so
Calibrator: /home/doc/root_build/lib/libMultiProc.so
Calibrator: /home/doc/root_build/lib/libNet.so
Calibrator: /home/doc/root_build/lib/libRIO.so
Calibrator: /home/doc/root_build/lib/libThread.so
Calibrator: /home/doc/root_build/lib/libCore.so
Calibrator: CMakeFiles/Calibrator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/DATA/muon_calibration/muon_calibration_binary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Calibrator"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Calibrator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Calibrator.dir/build: Calibrator
.PHONY : CMakeFiles/Calibrator.dir/build

CMakeFiles/Calibrator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Calibrator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Calibrator.dir/clean

CMakeFiles/Calibrator.dir/depend:
	cd /mnt/DATA/muon_calibration/muon_calibration_binary/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/DATA/muon_calibration/muon_calibration_binary /mnt/DATA/muon_calibration/muon_calibration_binary /mnt/DATA/muon_calibration/muon_calibration_binary/build /mnt/DATA/muon_calibration/muon_calibration_binary/build /mnt/DATA/muon_calibration/muon_calibration_binary/build/CMakeFiles/Calibrator.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Calibrator.dir/depend
