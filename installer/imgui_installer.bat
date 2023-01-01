set CompileMode=%~1

cmake -S ./vendor/imgui -B ./dependencies/imgui -DCMAKE_INSTALL_PREFIX="./install"
cmake --build ./dependencies/imgui --config %CompileMode% --target install