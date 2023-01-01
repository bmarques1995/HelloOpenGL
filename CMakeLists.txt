cmake_minimum_required(VERSION 3.20)

project(HelloOpenGL LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE PROJ_HEADERS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "src/include/*.hpp")
file(GLOB_RECURSE PROJ_SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "src/lib/*.cpp")

if(WIN32)
add_executable(HelloOpenGL WIN32 ${PROJ_SOURCES} ${PROJ_HEADERS})
add_compile_definitions(WIN_OPEN_GL)
else()
add_executable(HelloOpenGL ${PROJ_SOURCES} ${PROJ_HEADERS})
add_compile_definitions(LIN_OPEN_GL)
endif()
add_compile_definitions(GLFW_INCLUDE_NONE)
target_include_directories(HelloOpenGL PRIVATE "./src/include" "./vendor/glfw/include" "./vendor/glad/include" "./vendor/vulkan/src")
target_link_directories(HelloOpenGL PRIVATE "./install/lib")
target_link_libraries(HelloOpenGL PRIVATE glfw3 glad)