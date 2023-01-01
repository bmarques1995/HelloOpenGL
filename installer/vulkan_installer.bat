set CompileMode=%~1

cmake -S ./vendor/vulkan/vulkan_headers/ -B ./dependencies/vulkan/vulkan_headers/ -DCMAKE_INSTALL_PREFIX="./install"
cmake --build ./dependencies/vulkan/vulkan_headers/ --config %CompileMode% --target install
cmake -S ./vendor/vulkan/vulkan_loader/ -B ./dependencies/vulkan/vulkan_loader/ -DCMAKE_INSTALL_PREFIX="./install"
cmake --build ./dependencies/vulkan/vulkan_loader/ --config %CompileMode% --target install
