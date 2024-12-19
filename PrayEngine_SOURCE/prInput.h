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

	//정적변수 : 클래스 내부에서 전역변수 같이 동작
	//			클래스를 통해서만 누구나 접근 가능
	//			인스턴스를 여러개 만들어도 이 정적변수는 Data영역에 
	//			최초 1번 오직 클래스이름::정적변수이름 으로만 할당됨(재할당 되지 않음)
	//			프로그램이 종료되어야 사라짐

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

		static bool GetKeyDown(eKeyCode code) { return mKeys[(UINT)code].state == eKeyState::Down; }
		static bool GetKeyUp(eKeyCode code) { return mKeys[(UINT)code].state == eKeyState::Up; }
		static bool GetKey(eKeyCode code) { return mKeys[(UINT)code].state == eKeyState::Pressed; }

	private:
		static void CreateKeys();
		static void UpdateKeys();
		static bool IsKeyDown(eKeyCode code);
		static void UpdateKey(Input::Key& key);
		static void UpdateKeyDown(Input::Key& key);
		static void UpdateKeyUp(Input::Key& key);

	private:
		//숫자로 해버리면 다른사람은 알수 없음
		//int mState; //0 1 2  
		static std::vector<Key> mKeys; //키들을 가지고있는 정적 vector



	};

}

