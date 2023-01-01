@echo off

call ./installer/glfw_installer Debug
call ./installer/glad_installer Debug
call ./installer/vulkan_installer Debug
call ./installer/imgui_installer Debug

cmake -S . -B ./out/build