@echo off

call ./installer/sdl_installer Release

cmake -S . -B ./out/build