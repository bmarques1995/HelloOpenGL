#include "window/GLFW/GLFWWindow.hpp"
#include <cassert>

APILearning::GLFWWindow::GLFWWindow(WindowProps props)
{
    m_Title = props.Title;
    m_Width = props.Width;
    m_Height = props.Height;
    m_ShouldClose = false;

    /* Initialize the library */
    assert(glfwInit()!=0);

    /* Create a windowed mode window and its OpenGL context */
    m_Window = glfwCreateWindow(m_Width, m_Height, m_Title.c_str(), NULL, NULL);
    if (!m_Window)
    {
        glfwTerminate();
        assert(false);
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(m_Window);
}

APILearning::GLFWWindow::~GLFWWindow()
{
    glfwTerminate();
}

void APILearning::GLFWWindow::Update()
{
    glfwSwapBuffers(m_Window);
    glfwPollEvents();
}

uint32_t APILearning::GLFWWindow::GetWidth()
{
	return m_Width;
}

uint32_t APILearning::GLFWWindow::GetHeight()
{
	return m_Height;
}

bool APILearning::GLFWWindow::ShouldClose()
{
    m_ShouldClose = glfwWindowShouldClose(m_Window);
	return m_ShouldClose;
}

std::any APILearning::GLFWWindow::GetNativeWindow()
{
	return glfwGetProcAddress;
}
