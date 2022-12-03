#include "pch.h"
#include "Renderer.h"
#include "OpenGLthings/OpenGLRenderer.h"

namespace Ekko
{
	void Renderer::Init()
	{
		if (mInstance == nullptr)
			mInstance = new Renderer;
	}

	Renderer* Renderer::GetRenderer()
	{
		return mInstance;
	}

	void Renderer::Draw(Picture& picture, int x, int y, int z, Shader& shader)
	{
		GetRenderer()->mImplementation->Draw(picture, x, y, z, shader);
	}

	Renderer::Renderer()
	{
#ifdef PIXEL_OPENGL
		mImplementation = new OpenGLRenderer{};
#else
		#OpenGL_is_the_only_option_right_now
#endif
	}
}