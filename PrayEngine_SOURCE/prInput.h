#pragma once
#include <CommonInclude.h>

namespace pr
{

	//숫자를 문자로 바꿔주는 문법
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
		End,
	};

	class Input
	{
	public:
		struct Key				//키 하나당 가지고 있는 정보
		{
			//char keyCode;		
			eKeyCode keyCode;	//내가 어떤 키 인지
			eKeyState state;	//어떤 상태인지
			bool bPressed;		//눌려있는지
		};

		static void Initialize();
		static void Update();	//매프레임마다 키보드 상태 체크

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

