# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\software\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\software\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\work\Clion\LearningOpenCV

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\work\Clion\LearningOpenCV\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/OpenCV_Sample_Blur.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/OpenCV_Sample_Blur.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/OpenCV_Sample_Blur.dir/flags.make

CMakeFiles/OpenCV_Sample_Blur.dir/Samples/Filter/Blur/Blur.cpp.obj: CMakeFiles/OpenCV_Sample_Blur.dir/flags.make
CMakeFiles/OpenCV_Sample_Blur.dir/Samples/Filter/Blur/Blur.cpp.obj: CMakeFiles/OpenCV_Sample_Blur.dir/includes_CXX.rsp
CMakeFiles/OpenCV_Sample_Blur.dir/Samples/Filter/Blur/Blur.cpp.obj: ../Samples/Filter/Blur/Blur.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\work\Clion\LearningOpenCV\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/OpenCV_Sample_Blur.dir/Samples/Filter/Blur/Blur.cpp.obj"
	D:\software\msys2\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\OpenCV_Sample_Blur.dir\Samples\Filter\Blur\Blur.cpp.obj -c D:\work\Clion\LearningOpenCV\Samples\Filter\Blur\Blur.cpp

CMakeFiles/OpenCV_Sample_Blur.dir/Samples/Filter/Blur/Blur.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenCV_Sample_Blur.dir/Samples/Filter/Blur/Blur.cpp.i"
	D:\software\msys2\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\work\Clion\LearningOpenCV\Samples\Filter\Blur\Blur.cpp > CMakeFiles\OpenCV_Sample_Blur.dir\Samples\Filter\Blur\Blur.cpp.i

CMakeFiles/OpenCV_Sample_Blur.dir/Samples/Filter/Blur/Blur.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenCV_Sample_Blur.dir/Samples/Filter/Blur/Blur.cpp.s"
	D:\software\msys2\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\work\Clion\LearningOpenCV\Samples\Filter\Blur\Blur.cpp -o CMakeFiles\OpenCV_Sample_Blur.dir\Samples\Filter\Blur\Blur.cpp.s

# Object files for target OpenCV_Sample_Blur
OpenCV_Sample_Blur_OBJECTS = \
"CMakeFiles/OpenCV_Sample_Blur.dir/Samples/Filter/Blur/Blur.cpp.obj"

# External object files for target OpenCV_Sample_Blur
OpenCV_Sample_Blur_EXTERNAL_OBJECTS =

OpenCV_Sample_Blur.exe: CMakeFiles/OpenCV_Sample_Blur.dir/Samples/Filter/Blur/Blur.cpp.obj
OpenCV_Sample_Blur.exe: CMakeFiles/OpenCV_Sample_Blur.dir/build.make
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_gapi.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_stitching.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_alphamat.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_aruco.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_bgsegm.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_ccalib.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_dnn_objdetect.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_dnn_superres.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_dpm.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_face.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_fuzzy.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_hdf.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_hfs.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_img_hash.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_intensity_transform.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_line_descriptor.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_ovis.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_quality.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_rapid.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_reg.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_rgbd.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_saliency.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_sfm.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_stereo.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_structured_light.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_superres.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_surface_matching.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_tracking.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_videostab.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_xfeatures2d.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_xobjdetect.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_xphoto.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_highgui.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_shape.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_datasets.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_plot.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_text.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_dnn.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_ml.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_phase_unwrapping.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_optflow.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_ximgproc.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_video.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_videoio.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_imgcodecs.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_objdetect.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_calib3d.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_features2d.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_flann.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_photo.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_imgproc.dll.a
OpenCV_Sample_Blur.exe: D:/software/msys2/mingw64/lib/libopencv_core.dll.a
OpenCV_Sample_Blur.exe: CMakeFiles/OpenCV_Sample_Blur.dir/linklibs.rsp
OpenCV_Sample_Blur.exe: CMakeFiles/OpenCV_Sample_Blur.dir/objects1.rsp
OpenCV_Sample_Blur.exe: CMakeFiles/OpenCV_Sample_Blur.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\work\Clion\LearningOpenCV\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable OpenCV_Sample_Blur.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\OpenCV_Sample_Blur.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/OpenCV_Sample_Blur.dir/build: OpenCV_Sample_Blur.exe

.PHONY : CMakeFiles/OpenCV_Sample_Blur.dir/build

CMakeFiles/OpenCV_Sample_Blur.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\OpenCV_Sample_Blur.dir\cmake_clean.cmake
.PHONY : CMakeFiles/OpenCV_Sample_Blur.dir/clean

CMakeFiles/OpenCV_Sample_Blur.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\work\Clion\LearningOpenCV D:\work\Clion\LearningOpenCV D:\work\Clion\LearningOpenCV\cmake-build-debug D:\work\Clion\LearningOpenCV\cmake-build-debug D:\work\Clion\LearningOpenCV\cmake-build-debug\CMakeFiles\OpenCV_Sample_Blur.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/OpenCV_Sample_Blur.dir/depend

