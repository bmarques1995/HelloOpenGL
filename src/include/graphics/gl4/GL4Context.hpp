#ifndef D3D11_CONTEXT_HPP
#define D3D11_CONTEXT_HPP

#include "interface/GraphicsContext.hpp"
#include <glad/gl_safe_include.h>

namespace APILearning
{
	class GL4Context : public GraphicsContext
	{
	public:
		GL4Context(GLADloadfunc interfaceFunction);
		~GL4Context();

		virtual void Update() override;
		virtual void SetClearColor(float r, float g, float b, float a) override;

	private:

		float m_ClearColor[4];
	};
}

#endif // D3D11_CONTEXT_HPP