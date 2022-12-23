#include "graphics/GL4/GL4Context.hpp"
#include <cassert>

APILearning::GL4Context::GL4Context(GLADloadfunc interfaceFunction)
{
    m_ClearColor[0] = .7f;
    m_ClearColor[1] = .3f;
    m_ClearColor[2] = .9f;
    m_ClearColor[3] = 1.0f;

    assert(gladLoadGL(interfaceFunction) != 0);
}

APILearning::GL4Context::~GL4Context()
{
}

void APILearning::GL4Context::Update()
{
    glClearColor(m_ClearColor[0], m_ClearColor[1], m_ClearColor[2], m_ClearColor[3]);

    glClear(GL_COLOR_BUFFER_BIT);
}

void APILearning::GL4Context::SetClearColor(float r, float g, float b, float a)
{
    m_ClearColor[0] = r;
    m_ClearColor[1] = g;
    m_ClearColor[2] = b;
    m_ClearColor[3] = a;
}
