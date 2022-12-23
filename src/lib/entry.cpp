#include <iostream>

#include <glad/gl_safe_include.h>
#include <glfw/glfw3.h>

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
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    gladLoadGL(glfwGetProcAddress);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {

        glClearColor(.7, .3, .9, 1.0);

        glClear(GL_COLOR_BUFFER_BIT);
        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}

