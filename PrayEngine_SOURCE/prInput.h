#pragma once
#include <CommonInclude.h>

namespace pr
{

	enum class eKeyState
	{
		Down,		//0
		Pressed,	//1
		Up,			//2
		None,		//3
	};


	enum class eKeyCode
	{
		Q, W, E, R, T, Y, U, I, O, P,
		A, S, D, F, G, H, J, K, L,
		Z, X, C, V, B, N, M,
		Left, Right, Down, Up,
		Num0, Num1, Num2, Num3, Num4, Num5, Num6, Num7, Num8, Num9,
		End,
	};

	class Input
	{
	public:
		struct Key				
		{
			eKeyCode keyCode;	
			eKeyState state;	
			bool bPressed;		
		};

		static void Initialize();
		static void Update();	

		static bool GetKeyDown(eKeyCode code) { return Keys[(UINT)code].state == eKeyState::Down; }
		static bool GetKeyUp(eKeyCode code) { return Keys[(UINT)code].state == eKeyState::Up; }
		static bool GetKey(eKeyCode code) { return Keys[(UINT)code].state == eKeyState::Pressed; }

	private:
		static void createKeys();
		static void updateKeys();
		static void updateKey(Input::Key& key);
		static bool isKeyDown(eKeyCode code);
		static void updateKeyDown(Input::Key& key);
		static void updateKeyUp(Input::Key& key);

	private:
		static std::vector<Key> Keys;
	};

}

