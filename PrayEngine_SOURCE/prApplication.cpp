#include "prApplication.h"
#include "prInput.h"

namespace pr
{
	Application::Application()
		:mHwnd(nullptr)
		, mHdc(nullptr)
	{}

	Application::~Application()
	{
	}

	void Application::Initialize(HWND hwnd)
	{
		mHwnd = hwnd;
		mHdc = GetDC(hwnd);
		mPlayer.SetPoisition(0, 0);

		Input::Initialize();
	}

	void Application::Run()
	{
		Update();
		LateUpdate();
		Render();
 	}


	void Application::Update()
	{
		Input::Update();

		mPlayer.Update();

	}

	void Application::LateUpdate()
	{
		mPlayer.LateUpdate();
	}
	 
	void Application::Render()
	{
		mPlayer.Render(mHdc);
	}
}