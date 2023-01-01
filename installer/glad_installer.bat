set CompileMode=%~1

cmake -S ./vendor/glad -B ./dependencies/glad -DCMAKE_INSTALL_PREFIX="./install"
cmake --build ./dependencies/glad --config %CompileMode% --target install