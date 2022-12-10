cmake_minimum_required(VERSION 3.20)

project(HelloOpenGL LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE PROJ_HEADERS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "src/include/*.hpp")
file(GLOB_RECURSE PROJ_SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "src/lib/*.cpp")

add_subdirectory(./vendor/glfw)

if(WIN32)
add_executable(HelloOpenGL WIN32 ${PROJ_SOURCES})
add_compile_definitions(WIN_OPEN_GL)
else()
add_executable(HelloOpenGL ${PROJ_SOURCES})
add_compile_definitions(LIN_OPEN_GL)
endif()
target_include_directories(HelloOpenGL PRIVATE "./src/include" "./vendor/glfw/include")
target_link_libraries(HelloOpenGL PRIVATE glfw)