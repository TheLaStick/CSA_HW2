# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\ASUS\CLionProjects\CSA_HW2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\ASUS\CLionProjects\CSA_HW2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\CSA_HW1.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\CSA_HW1.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\CSA_HW1.dir\flags.make

CMakeFiles\CSA_HW1.dir\Sources\main.cpp.obj: CMakeFiles\CSA_HW1.dir\flags.make
CMakeFiles\CSA_HW1.dir\Sources\main.cpp.obj: ..\Sources\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ASUS\CLionProjects\CSA_HW2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CSA_HW1.dir/Sources/main.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\CSA_HW1.dir\Sources\main.cpp.obj /FdCMakeFiles\CSA_HW1.dir\ /FS -c C:\Users\ASUS\CLionProjects\CSA_HW2\Sources\main.cpp
<<

CMakeFiles\CSA_HW1.dir\Sources\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CSA_HW1.dir/Sources/main.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\CSA_HW1.dir\Sources\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\ASUS\CLionProjects\CSA_HW2\Sources\main.cpp
<<

CMakeFiles\CSA_HW1.dir\Sources\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CSA_HW1.dir/Sources/main.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\CSA_HW1.dir\Sources\main.cpp.s /c C:\Users\ASUS\CLionProjects\CSA_HW2\Sources\main.cpp
<<

CMakeFiles\CSA_HW1.dir\Sources\container.cpp.obj: CMakeFiles\CSA_HW1.dir\flags.make
CMakeFiles\CSA_HW1.dir\Sources\container.cpp.obj: ..\Sources\container.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ASUS\CLionProjects\CSA_HW2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CSA_HW1.dir/Sources/container.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\CSA_HW1.dir\Sources\container.cpp.obj /FdCMakeFiles\CSA_HW1.dir\ /FS -c C:\Users\ASUS\CLionProjects\CSA_HW2\Sources\container.cpp
<<

CMakeFiles\CSA_HW1.dir\Sources\container.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CSA_HW1.dir/Sources/container.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\CSA_HW1.dir\Sources\container.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\ASUS\CLionProjects\CSA_HW2\Sources\container.cpp
<<

CMakeFiles\CSA_HW1.dir\Sources\container.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CSA_HW1.dir/Sources/container.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\CSA_HW1.dir\Sources\container.cpp.s /c C:\Users\ASUS\CLionProjects\CSA_HW2\Sources\container.cpp
<<

CMakeFiles\CSA_HW1.dir\Sources\flower.cpp.obj: CMakeFiles\CSA_HW1.dir\flags.make
CMakeFiles\CSA_HW1.dir\Sources\flower.cpp.obj: ..\Sources\flower.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ASUS\CLionProjects\CSA_HW2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/CSA_HW1.dir/Sources/flower.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\CSA_HW1.dir\Sources\flower.cpp.obj /FdCMakeFiles\CSA_HW1.dir\ /FS -c C:\Users\ASUS\CLionProjects\CSA_HW2\Sources\flower.cpp
<<

CMakeFiles\CSA_HW1.dir\Sources\flower.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CSA_HW1.dir/Sources/flower.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\CSA_HW1.dir\Sources\flower.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\ASUS\CLionProjects\CSA_HW2\Sources\flower.cpp
<<

CMakeFiles\CSA_HW1.dir\Sources\flower.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CSA_HW1.dir/Sources/flower.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\CSA_HW1.dir\Sources\flower.cpp.s /c C:\Users\ASUS\CLionProjects\CSA_HW2\Sources\flower.cpp
<<

CMakeFiles\CSA_HW1.dir\Sources\bush.cpp.obj: CMakeFiles\CSA_HW1.dir\flags.make
CMakeFiles\CSA_HW1.dir\Sources\bush.cpp.obj: ..\Sources\bush.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ASUS\CLionProjects\CSA_HW2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/CSA_HW1.dir/Sources/bush.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\CSA_HW1.dir\Sources\bush.cpp.obj /FdCMakeFiles\CSA_HW1.dir\ /FS -c C:\Users\ASUS\CLionProjects\CSA_HW2\Sources\bush.cpp
<<

CMakeFiles\CSA_HW1.dir\Sources\bush.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CSA_HW1.dir/Sources/bush.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\CSA_HW1.dir\Sources\bush.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\ASUS\CLionProjects\CSA_HW2\Sources\bush.cpp
<<

CMakeFiles\CSA_HW1.dir\Sources\bush.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CSA_HW1.dir/Sources/bush.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\CSA_HW1.dir\Sources\bush.cpp.s /c C:\Users\ASUS\CLionProjects\CSA_HW2\Sources\bush.cpp
<<

CMakeFiles\CSA_HW1.dir\Sources\tree.cpp.obj: CMakeFiles\CSA_HW1.dir\flags.make
CMakeFiles\CSA_HW1.dir\Sources\tree.cpp.obj: ..\Sources\tree.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ASUS\CLionProjects\CSA_HW2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/CSA_HW1.dir/Sources/tree.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\CSA_HW1.dir\Sources\tree.cpp.obj /FdCMakeFiles\CSA_HW1.dir\ /FS -c C:\Users\ASUS\CLionProjects\CSA_HW2\Sources\tree.cpp
<<

CMakeFiles\CSA_HW1.dir\Sources\tree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CSA_HW1.dir/Sources/tree.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\CSA_HW1.dir\Sources\tree.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\ASUS\CLionProjects\CSA_HW2\Sources\tree.cpp
<<

CMakeFiles\CSA_HW1.dir\Sources\tree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CSA_HW1.dir/Sources/tree.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\CSA_HW1.dir\Sources\tree.cpp.s /c C:\Users\ASUS\CLionProjects\CSA_HW2\Sources\tree.cpp
<<

CMakeFiles\CSA_HW1.dir\Sources\plant.cpp.obj: CMakeFiles\CSA_HW1.dir\flags.make
CMakeFiles\CSA_HW1.dir\Sources\plant.cpp.obj: ..\Sources\plant.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ASUS\CLionProjects\CSA_HW2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/CSA_HW1.dir/Sources/plant.cpp.obj"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\CSA_HW1.dir\Sources\plant.cpp.obj /FdCMakeFiles\CSA_HW1.dir\ /FS -c C:\Users\ASUS\CLionProjects\CSA_HW2\Sources\plant.cpp
<<

CMakeFiles\CSA_HW1.dir\Sources\plant.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CSA_HW1.dir/Sources/plant.cpp.i"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\CSA_HW1.dir\Sources\plant.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\ASUS\CLionProjects\CSA_HW2\Sources\plant.cpp
<<

CMakeFiles\CSA_HW1.dir\Sources\plant.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CSA_HW1.dir/Sources/plant.cpp.s"
	C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\CSA_HW1.dir\Sources\plant.cpp.s /c C:\Users\ASUS\CLionProjects\CSA_HW2\Sources\plant.cpp
<<

# Object files for target CSA_HW1
CSA_HW1_OBJECTS = \
"CMakeFiles\CSA_HW1.dir\Sources\main.cpp.obj" \
"CMakeFiles\CSA_HW1.dir\Sources\container.cpp.obj" \
"CMakeFiles\CSA_HW1.dir\Sources\flower.cpp.obj" \
"CMakeFiles\CSA_HW1.dir\Sources\bush.cpp.obj" \
"CMakeFiles\CSA_HW1.dir\Sources\tree.cpp.obj" \
"CMakeFiles\CSA_HW1.dir\Sources\plant.cpp.obj"

# External object files for target CSA_HW1
CSA_HW1_EXTERNAL_OBJECTS =

CSA_HW1.exe: CMakeFiles\CSA_HW1.dir\Sources\main.cpp.obj
CSA_HW1.exe: CMakeFiles\CSA_HW1.dir\Sources\container.cpp.obj
CSA_HW1.exe: CMakeFiles\CSA_HW1.dir\Sources\flower.cpp.obj
CSA_HW1.exe: CMakeFiles\CSA_HW1.dir\Sources\bush.cpp.obj
CSA_HW1.exe: CMakeFiles\CSA_HW1.dir\Sources\tree.cpp.obj
CSA_HW1.exe: CMakeFiles\CSA_HW1.dir\Sources\plant.cpp.obj
CSA_HW1.exe: CMakeFiles\CSA_HW1.dir\build.make
CSA_HW1.exe: CMakeFiles\CSA_HW1.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\ASUS\CLionProjects\CSA_HW2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable CSA_HW1.exe"
	"C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\CSA_HW1.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~1\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\CSA_HW1.dir\objects1.rsp @<<
 /out:CSA_HW1.exe /implib:CSA_HW1.lib /pdb:C:\Users\ASUS\CLionProjects\CSA_HW2\cmake-build-debug\CSA_HW1.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\CSA_HW1.dir\build: CSA_HW1.exe
.PHONY : CMakeFiles\CSA_HW1.dir\build

CMakeFiles\CSA_HW1.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CSA_HW1.dir\cmake_clean.cmake
.PHONY : CMakeFiles\CSA_HW1.dir\clean

CMakeFiles\CSA_HW1.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\ASUS\CLionProjects\CSA_HW2 C:\Users\ASUS\CLionProjects\CSA_HW2 C:\Users\ASUS\CLionProjects\CSA_HW2\cmake-build-debug C:\Users\ASUS\CLionProjects\CSA_HW2\cmake-build-debug C:\Users\ASUS\CLionProjects\CSA_HW2\cmake-build-debug\CMakeFiles\CSA_HW1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\CSA_HW1.dir\depend
