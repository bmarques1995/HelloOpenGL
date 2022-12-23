#include <iostream>

#include "interface/Window.hpp"
#include "interface/GraphicsContext.hpp"
#include "window/glfw/GLFWWindow.hpp"
#include "graphics/gl4/GL4Context.hpp"

int program();

#ifdef WIN_OPEN_GL

#include <windows.h>

INT APIENTRY wWinMain(_In_ HINSTANCE hInstance, 
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPWSTR lpCmdLine,
    _In_ int nCmdShow)
{
    return program();
}

#elif LIN_OPEN_GL

int main()
{
    return program();
}

#endif

int program()
{
    APILearning::Window* window = new APILearning::GLFWWindow();
    APILearning::GraphicsContext* context = new APILearning::GL4Context(std::any_cast<GLADloadfunc>(window->GetNativeWindow()));
    context->SetClearColor(.7f, .3f, .9f, 1.0f);

    while (!window->ShouldClose())
    {
        window->Update();
        context->Update();
    }

    delete context;
    delete window;
    return 0;
}

