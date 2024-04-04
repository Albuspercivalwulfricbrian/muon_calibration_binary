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
include CMakeFiles/FileReader.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/FileReader.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/FileReader.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FileReader.dir/flags.make

CMakeFiles/FileReader.dir/FileReader.cpp.o: CMakeFiles/FileReader.dir/flags.make
CMakeFiles/FileReader.dir/FileReader.cpp.o: ../FileReader.cpp
CMakeFiles/FileReader.dir/FileReader.cpp.o: CMakeFiles/FileReader.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/DATA/muon_calibration/muon_calibration_binary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FileReader.dir/FileReader.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FileReader.dir/FileReader.cpp.o -MF CMakeFiles/FileReader.dir/FileReader.cpp.o.d -o CMakeFiles/FileReader.dir/FileReader.cpp.o -c /mnt/DATA/muon_calibration/muon_calibration_binary/FileReader.cpp

CMakeFiles/FileReader.dir/FileReader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FileReader.dir/FileReader.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/DATA/muon_calibration/muon_calibration_binary/FileReader.cpp > CMakeFiles/FileReader.dir/FileReader.cpp.i

CMakeFiles/FileReader.dir/FileReader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FileReader.dir/FileReader.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/DATA/muon_calibration/muon_calibration_binary/FileReader.cpp -o CMakeFiles/FileReader.dir/FileReader.cpp.s

CMakeFiles/FileReader.dir/src/BinaryDataStructs.cpp.o: CMakeFiles/FileReader.dir/flags.make
CMakeFiles/FileReader.dir/src/BinaryDataStructs.cpp.o: ../src/BinaryDataStructs.cpp
CMakeFiles/FileReader.dir/src/BinaryDataStructs.cpp.o: CMakeFiles/FileReader.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/DATA/muon_calibration/muon_calibration_binary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/FileReader.dir/src/BinaryDataStructs.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FileReader.dir/src/BinaryDataStructs.cpp.o -MF CMakeFiles/FileReader.dir/src/BinaryDataStructs.cpp.o.d -o CMakeFiles/FileReader.dir/src/BinaryDataStructs.cpp.o -c /mnt/DATA/muon_calibration/muon_calibration_binary/src/BinaryDataStructs.cpp

CMakeFiles/FileReader.dir/src/BinaryDataStructs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FileReader.dir/src/BinaryDataStructs.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/DATA/muon_calibration/muon_calibration_binary/src/BinaryDataStructs.cpp > CMakeFiles/FileReader.dir/src/BinaryDataStructs.cpp.i

CMakeFiles/FileReader.dir/src/BinaryDataStructs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FileReader.dir/src/BinaryDataStructs.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/DATA/muon_calibration/muon_calibration_binary/src/BinaryDataStructs.cpp -o CMakeFiles/FileReader.dir/src/BinaryDataStructs.cpp.s

CMakeFiles/FileReader.dir/src/ChannelEntry.cpp.o: CMakeFiles/FileReader.dir/flags.make
CMakeFiles/FileReader.dir/src/ChannelEntry.cpp.o: ../src/ChannelEntry.cpp
CMakeFiles/FileReader.dir/src/ChannelEntry.cpp.o: CMakeFiles/FileReader.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/DATA/muon_calibration/muon_calibration_binary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/FileReader.dir/src/ChannelEntry.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FileReader.dir/src/ChannelEntry.cpp.o -MF CMakeFiles/FileReader.dir/src/ChannelEntry.cpp.o.d -o CMakeFiles/FileReader.dir/src/ChannelEntry.cpp.o -c /mnt/DATA/muon_calibration/muon_calibration_binary/src/ChannelEntry.cpp

CMakeFiles/FileReader.dir/src/ChannelEntry.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FileReader.dir/src/ChannelEntry.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/DATA/muon_calibration/muon_calibration_binary/src/ChannelEntry.cpp > CMakeFiles/FileReader.dir/src/ChannelEntry.cpp.i

CMakeFiles/FileReader.dir/src/ChannelEntry.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FileReader.dir/src/ChannelEntry.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/DATA/muon_calibration/muon_calibration_binary/src/ChannelEntry.cpp -o CMakeFiles/FileReader.dir/src/ChannelEntry.cpp.s

CMakeFiles/FileReader.dir/src/PSDmuonTracker.cpp.o: CMakeFiles/FileReader.dir/flags.make
CMakeFiles/FileReader.dir/src/PSDmuonTracker.cpp.o: ../src/PSDmuonTracker.cpp
CMakeFiles/FileReader.dir/src/PSDmuonTracker.cpp.o: CMakeFiles/FileReader.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/DATA/muon_calibration/muon_calibration_binary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/FileReader.dir/src/PSDmuonTracker.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FileReader.dir/src/PSDmuonTracker.cpp.o -MF CMakeFiles/FileReader.dir/src/PSDmuonTracker.cpp.o.d -o CMakeFiles/FileReader.dir/src/PSDmuonTracker.cpp.o -c /mnt/DATA/muon_calibration/muon_calibration_binary/src/PSDmuonTracker.cpp

CMakeFiles/FileReader.dir/src/PSDmuonTracker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FileReader.dir/src/PSDmuonTracker.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/DATA/muon_calibration/muon_calibration_binary/src/PSDmuonTracker.cpp > CMakeFiles/FileReader.dir/src/PSDmuonTracker.cpp.i

CMakeFiles/FileReader.dir/src/PSDmuonTracker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FileReader.dir/src/PSDmuonTracker.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/DATA/muon_calibration/muon_calibration_binary/src/PSDmuonTracker.cpp -o CMakeFiles/FileReader.dir/src/PSDmuonTracker.cpp.s

CMakeFiles/FileReader.dir/src/test.cpp.o: CMakeFiles/FileReader.dir/flags.make
CMakeFiles/FileReader.dir/src/test.cpp.o: ../src/test.cpp
CMakeFiles/FileReader.dir/src/test.cpp.o: CMakeFiles/FileReader.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/DATA/muon_calibration/muon_calibration_binary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/FileReader.dir/src/test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FileReader.dir/src/test.cpp.o -MF CMakeFiles/FileReader.dir/src/test.cpp.o.d -o CMakeFiles/FileReader.dir/src/test.cpp.o -c /mnt/DATA/muon_calibration/muon_calibration_binary/src/test.cpp

CMakeFiles/FileReader.dir/src/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FileReader.dir/src/test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/DATA/muon_calibration/muon_calibration_binary/src/test.cpp > CMakeFiles/FileReader.dir/src/test.cpp.i

CMakeFiles/FileReader.dir/src/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FileReader.dir/src/test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/DATA/muon_calibration/muon_calibration_binary/src/test.cpp -o CMakeFiles/FileReader.dir/src/test.cpp.s

# Object files for target FileReader
FileReader_OBJECTS = \
"CMakeFiles/FileReader.dir/FileReader.cpp.o" \
"CMakeFiles/FileReader.dir/src/BinaryDataStructs.cpp.o" \
"CMakeFiles/FileReader.dir/src/ChannelEntry.cpp.o" \
"CMakeFiles/FileReader.dir/src/PSDmuonTracker.cpp.o" \
"CMakeFiles/FileReader.dir/src/test.cpp.o"

# External object files for target FileReader
FileReader_EXTERNAL_OBJECTS =

FileReader: CMakeFiles/FileReader.dir/FileReader.cpp.o
FileReader: CMakeFiles/FileReader.dir/src/BinaryDataStructs.cpp.o
FileReader: CMakeFiles/FileReader.dir/src/ChannelEntry.cpp.o
FileReader: CMakeFiles/FileReader.dir/src/PSDmuonTracker.cpp.o
FileReader: CMakeFiles/FileReader.dir/src/test.cpp.o
FileReader: CMakeFiles/FileReader.dir/build.make
FileReader: libCustomClassDictionary.so
FileReader: /home/doc/root_build/lib/libTree.so
FileReader: /home/doc/root_build/lib/libGpad.so
FileReader: /home/doc/root_build/lib/libPhysics.so
FileReader: /home/doc/root_build/lib/libGraf.so
FileReader: /home/doc/root_build/lib/libHist.so
FileReader: /home/doc/root_build/lib/libMatrix.so
FileReader: /home/doc/root_build/lib/libGenVector.so
FileReader: /home/doc/root_build/lib/libMathCore.so
FileReader: /home/doc/root_build/lib/libImt.so
FileReader: /home/doc/root_build/lib/libMultiProc.so
FileReader: /home/doc/root_build/lib/libNet.so
FileReader: /home/doc/root_build/lib/libRIO.so
FileReader: /home/doc/root_build/lib/libThread.so
FileReader: /home/doc/root_build/lib/libCore.so
FileReader: CMakeFiles/FileReader.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/DATA/muon_calibration/muon_calibration_binary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable FileReader"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FileReader.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FileReader.dir/build: FileReader
.PHONY : CMakeFiles/FileReader.dir/build

CMakeFiles/FileReader.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FileReader.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FileReader.dir/clean

CMakeFiles/FileReader.dir/depend:
	cd /mnt/DATA/muon_calibration/muon_calibration_binary/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/DATA/muon_calibration/muon_calibration_binary /mnt/DATA/muon_calibration/muon_calibration_binary /mnt/DATA/muon_calibration/muon_calibration_binary/build /mnt/DATA/muon_calibration/muon_calibration_binary/build /mnt/DATA/muon_calibration/muon_calibration_binary/build/CMakeFiles/FileReader.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FileReader.dir/depend

