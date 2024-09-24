cmake_minimum_required(VERSION 3.15)
project(
    MiniGimp
    VERSION 1.0
    LANGUAGES CXX
)

find_package(PNG)
if(PNG_FOUND)
	include_directories(${PNG_INCLUDE_DIR})
	list(APPEND cimg_libs ${PNG_LIBRARY})
	list(APPEND cimg_defs "cimg_use_png")
endif(PNG_FOUND)

find_package(JPEG)
if(JPEG_FOUND)
	include_directories(${JPEG_INCLUDE_DIR})
	list(APPEND cimg_libs ${JPEG_LIBRARY})
	list(APPEND cimg_defs "cimg_use_jpeg")
endif(JPEG_FOUND)

find_package(TIFF)
if(TIFF_FOUND)
	include_directories(${TIFF_INCLUDE_DIR})
	list(APPEND cimg_libs ${TIFF_LIBRARY})
	list(APPEND image_defs "cimg_use_tiff")
endif(TIFF_FOUND)

if(FFTW3_FOUND)
	include_directories(${FFTW3_INCLUDE_DIR})
	list(APPEND cimg_libs ${FFTW3_LIBRARY})
	list(APPEND cimg_defs "cimg_use_fftw3")
endif(FFTW3_FOUND)

#find_package(ImageMagick COMPONENTS Magick++)
#if (ImageMagick_FOUND)
#	include_directories(${ImageMagick_INCLUDE_DIRS})
#	list(APPEND cimg_libs ${ImageMagick_LIBRARIES})
#	list(APPEND cimg_defs "cimg_use_magick")
#	list(APPEND cimg_defs "MAGICKCORE_QUANTUM_DEPTH=16")
#	list(APPEND cimg_defs "MAGICKCORE_HDRI_ENABLE=0")
#endif(ImageMagick_FOUND)

if(${CMAKE_SYSTEM_NAME} MATCHES "Windows")
    # Windows specific code
    list(APPEND cimgdisplay_libs gdi32)
    list(APPEND cimgdisplay_defs cimg_display=2)
    list(APPEND cimg_defs cimg_OS=2)
else(${CMAKE_SYSTEM_NAME} MATCHES "Windows")
    list(APPEND cimg_libs pthread)
    list(APPEND cimgdisplay_libs X11)
    list(APPEND cimgdisplay_defs cimg_display=1)
    list(APPEND cimg_defs cimg_OS=1)
endif(${CMAKE_SYSTEM_NAME} MATCHES "Windows")

include_directories(${CMAKE_CURRENT_LIST_DIR})

#For all executables in project 
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic -Werror")

add_executable(minigimp brushes.cpp color.cpp grayscale.cpp main.cpp)
target_compile_definitions(minigimp PRIVATE ${cimg_defs} ${cimgdisplay_defs})
target_link_libraries(minigimp ${cimg_libs} ${cimgdisplay_libs})

	
	
