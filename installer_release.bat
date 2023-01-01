@echo off

call ./installer/glfw_installer Release
call ./installer/glad_installer Release
call ./installer/vulkan_installer Release
call ./installer/imgui_installer Release

cmake -S . -B ./out/build