@echo off

call ./installer/glfw_installer Debug
call ./installer/glad_installer Debug

cmake -S . -B ./out/build