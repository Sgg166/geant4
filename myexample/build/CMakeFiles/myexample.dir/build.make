# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_SOURCE_DIR = /home/pub/geant4/myexample

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pub/geant4/myexample/build

# Include any dependencies generated for this target.
include CMakeFiles/myexample.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/myexample.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/myexample.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/myexample.dir/flags.make

CMakeFiles/myexample.dir/myexample.cc.o: CMakeFiles/myexample.dir/flags.make
CMakeFiles/myexample.dir/myexample.cc.o: /home/pub/geant4/myexample/myexample.cc
CMakeFiles/myexample.dir/myexample.cc.o: CMakeFiles/myexample.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pub/geant4/myexample/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/myexample.dir/myexample.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myexample.dir/myexample.cc.o -MF CMakeFiles/myexample.dir/myexample.cc.o.d -o CMakeFiles/myexample.dir/myexample.cc.o -c /home/pub/geant4/myexample/myexample.cc

CMakeFiles/myexample.dir/myexample.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myexample.dir/myexample.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pub/geant4/myexample/myexample.cc > CMakeFiles/myexample.dir/myexample.cc.i

CMakeFiles/myexample.dir/myexample.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myexample.dir/myexample.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pub/geant4/myexample/myexample.cc -o CMakeFiles/myexample.dir/myexample.cc.s

CMakeFiles/myexample.dir/src/ActionInitialization.cc.o: CMakeFiles/myexample.dir/flags.make
CMakeFiles/myexample.dir/src/ActionInitialization.cc.o: /home/pub/geant4/myexample/src/ActionInitialization.cc
CMakeFiles/myexample.dir/src/ActionInitialization.cc.o: CMakeFiles/myexample.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pub/geant4/myexample/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/myexample.dir/src/ActionInitialization.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myexample.dir/src/ActionInitialization.cc.o -MF CMakeFiles/myexample.dir/src/ActionInitialization.cc.o.d -o CMakeFiles/myexample.dir/src/ActionInitialization.cc.o -c /home/pub/geant4/myexample/src/ActionInitialization.cc

CMakeFiles/myexample.dir/src/ActionInitialization.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myexample.dir/src/ActionInitialization.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pub/geant4/myexample/src/ActionInitialization.cc > CMakeFiles/myexample.dir/src/ActionInitialization.cc.i

CMakeFiles/myexample.dir/src/ActionInitialization.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myexample.dir/src/ActionInitialization.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pub/geant4/myexample/src/ActionInitialization.cc -o CMakeFiles/myexample.dir/src/ActionInitialization.cc.s

CMakeFiles/myexample.dir/src/DetectorConstruction.cc.o: CMakeFiles/myexample.dir/flags.make
CMakeFiles/myexample.dir/src/DetectorConstruction.cc.o: /home/pub/geant4/myexample/src/DetectorConstruction.cc
CMakeFiles/myexample.dir/src/DetectorConstruction.cc.o: CMakeFiles/myexample.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pub/geant4/myexample/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/myexample.dir/src/DetectorConstruction.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myexample.dir/src/DetectorConstruction.cc.o -MF CMakeFiles/myexample.dir/src/DetectorConstruction.cc.o.d -o CMakeFiles/myexample.dir/src/DetectorConstruction.cc.o -c /home/pub/geant4/myexample/src/DetectorConstruction.cc

CMakeFiles/myexample.dir/src/DetectorConstruction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myexample.dir/src/DetectorConstruction.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pub/geant4/myexample/src/DetectorConstruction.cc > CMakeFiles/myexample.dir/src/DetectorConstruction.cc.i

CMakeFiles/myexample.dir/src/DetectorConstruction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myexample.dir/src/DetectorConstruction.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pub/geant4/myexample/src/DetectorConstruction.cc -o CMakeFiles/myexample.dir/src/DetectorConstruction.cc.s

CMakeFiles/myexample.dir/src/EventAction.cc.o: CMakeFiles/myexample.dir/flags.make
CMakeFiles/myexample.dir/src/EventAction.cc.o: /home/pub/geant4/myexample/src/EventAction.cc
CMakeFiles/myexample.dir/src/EventAction.cc.o: CMakeFiles/myexample.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pub/geant4/myexample/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/myexample.dir/src/EventAction.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myexample.dir/src/EventAction.cc.o -MF CMakeFiles/myexample.dir/src/EventAction.cc.o.d -o CMakeFiles/myexample.dir/src/EventAction.cc.o -c /home/pub/geant4/myexample/src/EventAction.cc

CMakeFiles/myexample.dir/src/EventAction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myexample.dir/src/EventAction.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pub/geant4/myexample/src/EventAction.cc > CMakeFiles/myexample.dir/src/EventAction.cc.i

CMakeFiles/myexample.dir/src/EventAction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myexample.dir/src/EventAction.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pub/geant4/myexample/src/EventAction.cc -o CMakeFiles/myexample.dir/src/EventAction.cc.s

CMakeFiles/myexample.dir/src/PrimaryGeneratorAction.cc.o: CMakeFiles/myexample.dir/flags.make
CMakeFiles/myexample.dir/src/PrimaryGeneratorAction.cc.o: /home/pub/geant4/myexample/src/PrimaryGeneratorAction.cc
CMakeFiles/myexample.dir/src/PrimaryGeneratorAction.cc.o: CMakeFiles/myexample.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pub/geant4/myexample/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/myexample.dir/src/PrimaryGeneratorAction.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myexample.dir/src/PrimaryGeneratorAction.cc.o -MF CMakeFiles/myexample.dir/src/PrimaryGeneratorAction.cc.o.d -o CMakeFiles/myexample.dir/src/PrimaryGeneratorAction.cc.o -c /home/pub/geant4/myexample/src/PrimaryGeneratorAction.cc

CMakeFiles/myexample.dir/src/PrimaryGeneratorAction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myexample.dir/src/PrimaryGeneratorAction.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pub/geant4/myexample/src/PrimaryGeneratorAction.cc > CMakeFiles/myexample.dir/src/PrimaryGeneratorAction.cc.i

CMakeFiles/myexample.dir/src/PrimaryGeneratorAction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myexample.dir/src/PrimaryGeneratorAction.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pub/geant4/myexample/src/PrimaryGeneratorAction.cc -o CMakeFiles/myexample.dir/src/PrimaryGeneratorAction.cc.s

CMakeFiles/myexample.dir/src/RunAction.cc.o: CMakeFiles/myexample.dir/flags.make
CMakeFiles/myexample.dir/src/RunAction.cc.o: /home/pub/geant4/myexample/src/RunAction.cc
CMakeFiles/myexample.dir/src/RunAction.cc.o: CMakeFiles/myexample.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pub/geant4/myexample/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/myexample.dir/src/RunAction.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myexample.dir/src/RunAction.cc.o -MF CMakeFiles/myexample.dir/src/RunAction.cc.o.d -o CMakeFiles/myexample.dir/src/RunAction.cc.o -c /home/pub/geant4/myexample/src/RunAction.cc

CMakeFiles/myexample.dir/src/RunAction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myexample.dir/src/RunAction.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pub/geant4/myexample/src/RunAction.cc > CMakeFiles/myexample.dir/src/RunAction.cc.i

CMakeFiles/myexample.dir/src/RunAction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myexample.dir/src/RunAction.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pub/geant4/myexample/src/RunAction.cc -o CMakeFiles/myexample.dir/src/RunAction.cc.s

CMakeFiles/myexample.dir/src/SteppingAction.cc.o: CMakeFiles/myexample.dir/flags.make
CMakeFiles/myexample.dir/src/SteppingAction.cc.o: /home/pub/geant4/myexample/src/SteppingAction.cc
CMakeFiles/myexample.dir/src/SteppingAction.cc.o: CMakeFiles/myexample.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pub/geant4/myexample/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/myexample.dir/src/SteppingAction.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myexample.dir/src/SteppingAction.cc.o -MF CMakeFiles/myexample.dir/src/SteppingAction.cc.o.d -o CMakeFiles/myexample.dir/src/SteppingAction.cc.o -c /home/pub/geant4/myexample/src/SteppingAction.cc

CMakeFiles/myexample.dir/src/SteppingAction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myexample.dir/src/SteppingAction.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pub/geant4/myexample/src/SteppingAction.cc > CMakeFiles/myexample.dir/src/SteppingAction.cc.i

CMakeFiles/myexample.dir/src/SteppingAction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myexample.dir/src/SteppingAction.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pub/geant4/myexample/src/SteppingAction.cc -o CMakeFiles/myexample.dir/src/SteppingAction.cc.s

# Object files for target myexample
myexample_OBJECTS = \
"CMakeFiles/myexample.dir/myexample.cc.o" \
"CMakeFiles/myexample.dir/src/ActionInitialization.cc.o" \
"CMakeFiles/myexample.dir/src/DetectorConstruction.cc.o" \
"CMakeFiles/myexample.dir/src/EventAction.cc.o" \
"CMakeFiles/myexample.dir/src/PrimaryGeneratorAction.cc.o" \
"CMakeFiles/myexample.dir/src/RunAction.cc.o" \
"CMakeFiles/myexample.dir/src/SteppingAction.cc.o"

# External object files for target myexample
myexample_EXTERNAL_OBJECTS =

myexample: CMakeFiles/myexample.dir/myexample.cc.o
myexample: CMakeFiles/myexample.dir/src/ActionInitialization.cc.o
myexample: CMakeFiles/myexample.dir/src/DetectorConstruction.cc.o
myexample: CMakeFiles/myexample.dir/src/EventAction.cc.o
myexample: CMakeFiles/myexample.dir/src/PrimaryGeneratorAction.cc.o
myexample: CMakeFiles/myexample.dir/src/RunAction.cc.o
myexample: CMakeFiles/myexample.dir/src/SteppingAction.cc.o
myexample: CMakeFiles/myexample.dir/build.make
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4Tree.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4FR.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4GMocren.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4visHepRep.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4RayTracer.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4VRML.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4ToolsSG.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4OpenGL.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4vis_management.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4modeling.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4interfaces.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4persistency.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4error_propagation.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4readout.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4physicslists.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4run.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4event.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4tracking.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4parmodels.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4processes.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4digits_hits.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4track.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4particles.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4geometry.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4materials.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4graphics_reps.so
myexample: /usr/lib64/libGL.so
myexample: /usr/lib64/libQt5OpenGL.so.5.15.9
myexample: /usr/lib64/libQt5PrintSupport.so.5.15.9
myexample: /usr/lib64/libQt5Widgets.so.5.15.9
myexample: /usr/lib64/libQt5Gui.so.5.15.9
myexample: /usr/lib64/libQt5Core.so.5.15.9
myexample: /usr/lib64/libXmu.so
myexample: /usr/lib64/libXext.so
myexample: /usr/lib64/libXt.so
myexample: /usr/lib64/libICE.so
myexample: /usr/lib64/libSM.so
myexample: /usr/lib64/libX11.so
myexample: /usr/lib64/libxerces-c.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4analysis.so
myexample: /usr/lib64/libexpat.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4zlib.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4intercoms.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4global.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4clhep.so
myexample: /home/particle/geant4-v11.1.2/installdir/lib64/libG4ptl.so.2.3.3
myexample: CMakeFiles/myexample.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pub/geant4/myexample/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable myexample"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/myexample.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/myexample.dir/build: myexample
.PHONY : CMakeFiles/myexample.dir/build

CMakeFiles/myexample.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/myexample.dir/cmake_clean.cmake
.PHONY : CMakeFiles/myexample.dir/clean

CMakeFiles/myexample.dir/depend:
	cd /home/pub/geant4/myexample/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pub/geant4/myexample /home/pub/geant4/myexample /home/pub/geant4/myexample/build /home/pub/geant4/myexample/build /home/pub/geant4/myexample/build/CMakeFiles/myexample.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/myexample.dir/depend

