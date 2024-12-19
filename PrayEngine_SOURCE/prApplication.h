#pragma once
#include "prGameObject.h"

namespace pr
{
	class Application
	{
	public:
		Application();

		~Application();

	public:
		void Initialize(HWND hwnd);
		void Run();
		void Update();
		void LateUpdate();
		void Render();

	private:
		HWND mHwnd;
		HDC mHdc;
		float mSpeed;
		//float mX;
		//float mY;
		GameObject mPlayer;
	};

}