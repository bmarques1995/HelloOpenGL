set CompileMode=%~1

cmake -S ./vendor/glfw -B ./dependencies/glfw -DCMAKE_INSTALL_PREFIX="./install"
cmake --build ./dependencies/glfw --config %CompileMode% --target install