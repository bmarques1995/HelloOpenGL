#ifndef GLFW_WINDOW_HPP
#define GLFW_WINDOW_HPP

#include "interface/Window.hpp"
#include <glfw/glfw3.h>

namespace APILearning
{
	class GLFWWindow : public Window
	{
	public:
		GLFWWindow(WindowProps props = WindowProps());
		~GLFWWindow();

		virtual void Update() override;
		virtual uint32_t GetWidth() override;
		virtual uint32_t GetHeight() override;
		virtual bool ShouldClose() override;
		virtual std::any GetNativeWindow() override;

	private:
		GLFWwindow* m_Window;

		bool m_ShouldClose;
		uint32_t m_Width;
		uint32_t m_Height;
		std::string m_Title;
	};

}

#endif
