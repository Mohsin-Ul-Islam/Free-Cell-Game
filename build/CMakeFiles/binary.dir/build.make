# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_SOURCE_DIR = /root/Projects/Free-Cell-Game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/Projects/Free-Cell-Game/build

# Include any dependencies generated for this target.
include CMakeFiles/binary.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/binary.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/binary.dir/flags.make

CMakeFiles/binary.dir/src/main.cpp.o: CMakeFiles/binary.dir/flags.make
CMakeFiles/binary.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/Projects/Free-Cell-Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/binary.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/binary.dir/src/main.cpp.o -c /root/Projects/Free-Cell-Game/src/main.cpp

CMakeFiles/binary.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/binary.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/Projects/Free-Cell-Game/src/main.cpp > CMakeFiles/binary.dir/src/main.cpp.i

CMakeFiles/binary.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/binary.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/Projects/Free-Cell-Game/src/main.cpp -o CMakeFiles/binary.dir/src/main.cpp.s

CMakeFiles/binary.dir/src/Game.cpp.o: CMakeFiles/binary.dir/flags.make
CMakeFiles/binary.dir/src/Game.cpp.o: ../src/Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/Projects/Free-Cell-Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/binary.dir/src/Game.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/binary.dir/src/Game.cpp.o -c /root/Projects/Free-Cell-Game/src/Game.cpp

CMakeFiles/binary.dir/src/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/binary.dir/src/Game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/Projects/Free-Cell-Game/src/Game.cpp > CMakeFiles/binary.dir/src/Game.cpp.i

CMakeFiles/binary.dir/src/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/binary.dir/src/Game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/Projects/Free-Cell-Game/src/Game.cpp -o CMakeFiles/binary.dir/src/Game.cpp.s

CMakeFiles/binary.dir/src/Deck.cpp.o: CMakeFiles/binary.dir/flags.make
CMakeFiles/binary.dir/src/Deck.cpp.o: ../src/Deck.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/Projects/Free-Cell-Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/binary.dir/src/Deck.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/binary.dir/src/Deck.cpp.o -c /root/Projects/Free-Cell-Game/src/Deck.cpp

CMakeFiles/binary.dir/src/Deck.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/binary.dir/src/Deck.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/Projects/Free-Cell-Game/src/Deck.cpp > CMakeFiles/binary.dir/src/Deck.cpp.i

CMakeFiles/binary.dir/src/Deck.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/binary.dir/src/Deck.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/Projects/Free-Cell-Game/src/Deck.cpp -o CMakeFiles/binary.dir/src/Deck.cpp.s

CMakeFiles/binary.dir/src/Board.cpp.o: CMakeFiles/binary.dir/flags.make
CMakeFiles/binary.dir/src/Board.cpp.o: ../src/Board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/Projects/Free-Cell-Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/binary.dir/src/Board.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/binary.dir/src/Board.cpp.o -c /root/Projects/Free-Cell-Game/src/Board.cpp

CMakeFiles/binary.dir/src/Board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/binary.dir/src/Board.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/Projects/Free-Cell-Game/src/Board.cpp > CMakeFiles/binary.dir/src/Board.cpp.i

CMakeFiles/binary.dir/src/Board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/binary.dir/src/Board.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/Projects/Free-Cell-Game/src/Board.cpp -o CMakeFiles/binary.dir/src/Board.cpp.s

CMakeFiles/binary.dir/src/Card.cpp.o: CMakeFiles/binary.dir/flags.make
CMakeFiles/binary.dir/src/Card.cpp.o: ../src/Card.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/Projects/Free-Cell-Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/binary.dir/src/Card.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/binary.dir/src/Card.cpp.o -c /root/Projects/Free-Cell-Game/src/Card.cpp

CMakeFiles/binary.dir/src/Card.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/binary.dir/src/Card.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/Projects/Free-Cell-Game/src/Card.cpp > CMakeFiles/binary.dir/src/Card.cpp.i

CMakeFiles/binary.dir/src/Card.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/binary.dir/src/Card.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/Projects/Free-Cell-Game/src/Card.cpp -o CMakeFiles/binary.dir/src/Card.cpp.s

# Object files for target binary
binary_OBJECTS = \
"CMakeFiles/binary.dir/src/main.cpp.o" \
"CMakeFiles/binary.dir/src/Game.cpp.o" \
"CMakeFiles/binary.dir/src/Deck.cpp.o" \
"CMakeFiles/binary.dir/src/Board.cpp.o" \
"CMakeFiles/binary.dir/src/Card.cpp.o"

# External object files for target binary
binary_EXTERNAL_OBJECTS =

binary: CMakeFiles/binary.dir/src/main.cpp.o
binary: CMakeFiles/binary.dir/src/Game.cpp.o
binary: CMakeFiles/binary.dir/src/Deck.cpp.o
binary: CMakeFiles/binary.dir/src/Board.cpp.o
binary: CMakeFiles/binary.dir/src/Card.cpp.o
binary: CMakeFiles/binary.dir/build.make
binary: libs/Console/libconsole.a
binary: CMakeFiles/binary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/Projects/Free-Cell-Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable binary"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/binary.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/binary.dir/build: binary

.PHONY : CMakeFiles/binary.dir/build

CMakeFiles/binary.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/binary.dir/cmake_clean.cmake
.PHONY : CMakeFiles/binary.dir/clean

CMakeFiles/binary.dir/depend:
	cd /root/Projects/Free-Cell-Game/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/Projects/Free-Cell-Game /root/Projects/Free-Cell-Game /root/Projects/Free-Cell-Game/build /root/Projects/Free-Cell-Game/build /root/Projects/Free-Cell-Game/build/CMakeFiles/binary.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/binary.dir/depend

