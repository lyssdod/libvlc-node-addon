cmake_minimum_required(VERSION 3.1)

project(libvlc-node-addon)

# specify module sources
file(GLOB MODULE_SOURCES "src/*.cpp")

# some dirs
set(VLC_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/vlc-2.2/include")
set(VLCPP_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/libvlcpp/vlcpp")

# target props
add_library(${PROJECT_NAME} SHARED ${MODULE_SOURCES})
set_target_properties(${PROJECT_NAME} PROPERTIES PREFIX "" SUFFIX ".node")

# include/link options
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_JS_INC})
target_link_libraries(${PROJECT_NAME} ${CMAKE_JS_LIB})