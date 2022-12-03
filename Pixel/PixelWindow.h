#pragma once

#include "pch.h"
#include "PixelUtil.h"
#include "WindowImplementation.h"

namespace Ekko
{
	class PIXEL_API PixelWindow
	{
	public:
		static void Init();
		static PixelWindow* GetWindow();

		virtual void Create(int width, int height, const std::string& windowName);
		virtual void SwapBuffers();

		int GetWidth() const;
		int GetHeight() const;

	private:
		inline static PixelWindow* mInstance{ nullptr };

		WindowImplementation* mImplementation{ nullptr };

		int mWidth{ 0 };
		int mHeight{ 0 };
	};
}