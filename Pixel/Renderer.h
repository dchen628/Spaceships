#pragma once

#include "PixelUtil.h"
#include "Shader.h"
#include "Picture.h"
#include "RendererImplementation.h"

namespace Ekko
{
	class PIXEL_API Renderer
	{
	public:
		static void Init();
		static Renderer* GetRenderer();

		static void Draw(Picture& picture, int x, int y, int z, Shader& shader = mDefaultShader);



	private:
		inline static Renderer* mInstance{ nullptr };

		RendererImplementation* mImplementation;

		Renderer();

		inline static Shader mDefaultShader{ "Assets/Shaders/defaultPixelVertex.glsl",
			"Assets/Shaders/defaultPixelFragment.glsl" };
	};
}