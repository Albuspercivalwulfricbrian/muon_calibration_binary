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
include CMakeFiles/CreateTrackTree.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CreateTrackTree.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CreateTrackTree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CreateTrackTree.dir/flags.make

CMakeFiles/CreateTrackTree.dir/CreateTrackTree.C.o: CMakeFiles/CreateTrackTree.dir/flags.make
CMakeFiles/CreateTrackTree.dir/CreateTrackTree.C.o: ../CreateTrackTree.C
CMakeFiles/CreateTrackTree.dir/CreateTrackTree.C.o: CMakeFiles/CreateTrackTree.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/DATA/muon_calibration/muon_calibration_binary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CreateTrackTree.dir/CreateTrackTree.C.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CreateTrackTree.dir/CreateTrackTree.C.o -MF CMakeFiles/CreateTrackTree.dir/CreateTrackTree.C.o.d -o CMakeFiles/CreateTrackTree.dir/CreateTrackTree.C.o -c /mnt/DATA/muon_calibration/muon_calibration_binary/CreateTrackTree.C

CMakeFiles/CreateTrackTree.dir/CreateTrackTree.C.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CreateTrackTree.dir/CreateTrackTree.C.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/DATA/muon_calibration/muon_calibration_binary/CreateTrackTree.C > CMakeFiles/CreateTrackTree.dir/CreateTrackTree.C.i

CMakeFiles/CreateTrackTree.dir/CreateTrackTree.C.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CreateTrackTree.dir/CreateTrackTree.C.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/DATA/muon_calibration/muon_calibration_binary/CreateTrackTree.C -o CMakeFiles/CreateTrackTree.dir/CreateTrackTree.C.s

CMakeFiles/CreateTrackTree.dir/src/BinaryDataStructs.cpp.o: CMakeFiles/CreateTrackTree.dir/flags.make
CMakeFiles/CreateTrackTree.dir/src/BinaryDataStructs.cpp.o: ../src/BinaryDataStructs.cpp
CMakeFiles/CreateTrackTree.dir/src/BinaryDataStructs.cpp.o: CMakeFiles/CreateTrackTree.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/DATA/muon_calibration/muon_calibration_binary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CreateTrackTree.dir/src/BinaryDataStructs.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CreateTrackTree.dir/src/BinaryDataStructs.cpp.o -MF CMakeFiles/CreateTrackTree.dir/src/BinaryDataStructs.cpp.o.d -o CMakeFiles/CreateTrackTree.dir/src/BinaryDataStructs.cpp.o -c /mnt/DATA/muon_calibration/muon_calibration_binary/src/BinaryDataStructs.cpp

CMakeFiles/CreateTrackTree.dir/src/BinaryDataStructs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CreateTrackTree.dir/src/BinaryDataStructs.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/DATA/muon_calibration/muon_calibration_binary/src/BinaryDataStructs.cpp > CMakeFiles/CreateTrackTree.dir/src/BinaryDataStructs.cpp.i

CMakeFiles/CreateTrackTree.dir/src/BinaryDataStructs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CreateTrackTree.dir/src/BinaryDataStructs.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/DATA/muon_calibration/muon_calibration_binary/src/BinaryDataStructs.cpp -o CMakeFiles/CreateTrackTree.dir/src/BinaryDataStructs.cpp.s

CMakeFiles/CreateTrackTree.dir/src/ChannelEntry.cpp.o: CMakeFiles/CreateTrackTree.dir/flags.make
CMakeFiles/CreateTrackTree.dir/src/ChannelEntry.cpp.o: ../src/ChannelEntry.cpp
CMakeFiles/CreateTrackTree.dir/src/ChannelEntry.cpp.o: CMakeFiles/CreateTrackTree.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/DATA/muon_calibration/muon_calibration_binary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/CreateTrackTree.dir/src/ChannelEntry.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CreateTrackTree.dir/src/ChannelEntry.cpp.o -MF CMakeFiles/CreateTrackTree.dir/src/ChannelEntry.cpp.o.d -o CMakeFiles/CreateTrackTree.dir/src/ChannelEntry.cpp.o -c /mnt/DATA/muon_calibration/muon_calibration_binary/src/ChannelEntry.cpp

CMakeFiles/CreateTrackTree.dir/src/ChannelEntry.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CreateTrackTree.dir/src/ChannelEntry.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/DATA/muon_calibration/muon_calibration_binary/src/ChannelEntry.cpp > CMakeFiles/CreateTrackTree.dir/src/ChannelEntry.cpp.i

CMakeFiles/CreateTrackTree.dir/src/ChannelEntry.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CreateTrackTree.dir/src/ChannelEntry.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/DATA/muon_calibration/muon_calibration_binary/src/ChannelEntry.cpp -o CMakeFiles/CreateTrackTree.dir/src/ChannelEntry.cpp.s

CMakeFiles/CreateTrackTree.dir/src/PSDmuonTracker.cpp.o: CMakeFiles/CreateTrackTree.dir/flags.make
CMakeFiles/CreateTrackTree.dir/src/PSDmuonTracker.cpp.o: ../src/PSDmuonTracker.cpp
CMakeFiles/CreateTrackTree.dir/src/PSDmuonTracker.cpp.o: CMakeFiles/CreateTrackTree.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/DATA/muon_calibration/muon_calibration_binary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/CreateTrackTree.dir/src/PSDmuonTracker.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CreateTrackTree.dir/src/PSDmuonTracker.cpp.o -MF CMakeFiles/CreateTrackTree.dir/src/PSDmuonTracker.cpp.o.d -o CMakeFiles/CreateTrackTree.dir/src/PSDmuonTracker.cpp.o -c /mnt/DATA/muon_calibration/muon_calibration_binary/src/PSDmuonTracker.cpp

CMakeFiles/CreateTrackTree.dir/src/PSDmuonTracker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CreateTrackTree.dir/src/PSDmuonTracker.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/DATA/muon_calibration/muon_calibration_binary/src/PSDmuonTracker.cpp > CMakeFiles/CreateTrackTree.dir/src/PSDmuonTracker.cpp.i

CMakeFiles/CreateTrackTree.dir/src/PSDmuonTracker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CreateTrackTree.dir/src/PSDmuonTracker.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/DATA/muon_calibration/muon_calibration_binary/src/PSDmuonTracker.cpp -o CMakeFiles/CreateTrackTree.dir/src/PSDmuonTracker.cpp.s

CMakeFiles/CreateTrackTree.dir/src/test.cpp.o: CMakeFiles/CreateTrackTree.dir/flags.make
CMakeFiles/CreateTrackTree.dir/src/test.cpp.o: ../src/test.cpp
CMakeFiles/CreateTrackTree.dir/src/test.cpp.o: CMakeFiles/CreateTrackTree.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/DATA/muon_calibration/muon_calibration_binary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/CreateTrackTree.dir/src/test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CreateTrackTree.dir/src/test.cpp.o -MF CMakeFiles/CreateTrackTree.dir/src/test.cpp.o.d -o CMakeFiles/CreateTrackTree.dir/src/test.cpp.o -c /mnt/DATA/muon_calibration/muon_calibration_binary/src/test.cpp

CMakeFiles/CreateTrackTree.dir/src/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CreateTrackTree.dir/src/test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/DATA/muon_calibration/muon_calibration_binary/src/test.cpp > CMakeFiles/CreateTrackTree.dir/src/test.cpp.i

CMakeFiles/CreateTrackTree.dir/src/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CreateTrackTree.dir/src/test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/DATA/muon_calibration/muon_calibration_binary/src/test.cpp -o CMakeFiles/CreateTrackTree.dir/src/test.cpp.s

# Object files for target CreateTrackTree
CreateTrackTree_OBJECTS = \
"CMakeFiles/CreateTrackTree.dir/CreateTrackTree.C.o" \
"CMakeFiles/CreateTrackTree.dir/src/BinaryDataStructs.cpp.o" \
"CMakeFiles/CreateTrackTree.dir/src/ChannelEntry.cpp.o" \
"CMakeFiles/CreateTrackTree.dir/src/PSDmuonTracker.cpp.o" \
"CMakeFiles/CreateTrackTree.dir/src/test.cpp.o"

# External object files for target CreateTrackTree
CreateTrackTree_EXTERNAL_OBJECTS =

CreateTrackTree: CMakeFiles/CreateTrackTree.dir/CreateTrackTree.C.o
CreateTrackTree: CMakeFiles/CreateTrackTree.dir/src/BinaryDataStructs.cpp.o
CreateTrackTree: CMakeFiles/CreateTrackTree.dir/src/ChannelEntry.cpp.o
CreateTrackTree: CMakeFiles/CreateTrackTree.dir/src/PSDmuonTracker.cpp.o
CreateTrackTree: CMakeFiles/CreateTrackTree.dir/src/test.cpp.o
CreateTrackTree: CMakeFiles/CreateTrackTree.dir/build.make
CreateTrackTree: libCustomClassDictionary.so
CreateTrackTree: /home/doc/root_build/lib/libTree.so
CreateTrackTree: /home/doc/root_build/lib/libGui.so
CreateTrackTree: /home/doc/root_build/lib/libPhysics.so
CreateTrackTree: /home/doc/root_build/lib/libGpad.so
CreateTrackTree: /home/doc/root_build/lib/libGraf.so
CreateTrackTree: /home/doc/root_build/lib/libHist.so
CreateTrackTree: /home/doc/root_build/lib/libMatrix.so
CreateTrackTree: /home/doc/root_build/lib/libGenVector.so
CreateTrackTree: /home/doc/root_build/lib/libMathCore.so
CreateTrackTree: /home/doc/root_build/lib/libImt.so
CreateTrackTree: /home/doc/root_build/lib/libMultiProc.so
CreateTrackTree: /home/doc/root_build/lib/libNet.so
CreateTrackTree: /home/doc/root_build/lib/libRIO.so
CreateTrackTree: /home/doc/root_build/lib/libThread.so
CreateTrackTree: /home/doc/root_build/lib/libCore.so
CreateTrackTree: CMakeFiles/CreateTrackTree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/DATA/muon_calibration/muon_calibration_binary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable CreateTrackTree"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CreateTrackTree.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CreateTrackTree.dir/build: CreateTrackTree
.PHONY : CMakeFiles/CreateTrackTree.dir/build

CMakeFiles/CreateTrackTree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CreateTrackTree.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CreateTrackTree.dir/clean

CMakeFiles/CreateTrackTree.dir/depend:
	cd /mnt/DATA/muon_calibration/muon_calibration_binary/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/DATA/muon_calibration/muon_calibration_binary /mnt/DATA/muon_calibration/muon_calibration_binary /mnt/DATA/muon_calibration/muon_calibration_binary/build /mnt/DATA/muon_calibration/muon_calibration_binary/build /mnt/DATA/muon_calibration/muon_calibration_binary/build/CMakeFiles/CreateTrackTree.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CreateTrackTree.dir/depend

