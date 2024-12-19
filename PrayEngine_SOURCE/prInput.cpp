#include "prInput.h"

namespace pr
{
	//여기는 Input클래스 바깥 전역 영역이기때문에 풀네임으로 작성
	//정적변수이기 때문에 전역 영역에서 최초 1번 초기화 시켜줘야 함
	std::vector<Input::Key> Input::mKeys = {};

	//eKeyCode만큼의 배열을 만듦
	int ASCII[(UINT)eKeyCode::End] =
	{
		'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P',
		'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L',
		'Z', 'X', 'C', 'V', 'B', 'N', 'M',
		VK_LEFT, VK_RIGHT, VK_DOWN, VK_UP
	};


	void pr::Input::Initialize()
	{
		CreateKeys();
	}

	void pr::Input::Update()
	{
		//1. 순회
		//2. 키 눌렸는지 체크
		//3. 현재 키 상태와 이전 키 상태를 비교하여 상태 업데이트
		UpdateKeys();

	}
	void Input::CreateKeys()
	{
		//eKeyCode의 개수만큼 반복(싹 다 초기화)
		for (size_t i = 0; i < (UINT)eKeyCode::End; i++)
		{
			Key key = {};
			key.bPressed = false;
			key.state = eKeyState::None;
			key.keyCode = (eKeyCode)i;

			mKeys.push_back(key);
		}
	}
	void Input::UpdateKeys()
	{
		//벡터의 처음부터  끝까지 순회
		//각 요소가 익명함수의 인자로 전달됨
		//이 익명함수는 인자(요소)를 참조값으로 받고, void를 반환
		//익명함수 내부에서 UpdateKey를 호출하여 key를 그 함수의 인자로 전달(참조값)
		//=> 모든 키 값에 대해 원본 값을 바꿔줌
		std::for_each(mKeys.begin(), mKeys.end(),
			[](Key& key) -> void
			{
				UpdateKey(key);
			});
	}

	bool Input::IsKeyDown(eKeyCode code)
	{
		return GetAsyncKeyState(ASCII[(UINT)code]) & 0x8000;
	}

	void Input::UpdateKey(Input::Key& key)
	{
		//key가 현재 눌린 상태인지 검사
		if (IsKeyDown(key.keyCode))
		{
			UpdateKeyDown(key);
		}
		else //key가 현재 안눌린 상태라면
		{
			UpdateKeyUp(key);
		}
	}

	void Input::UpdateKeyDown(Input::Key& key)
	{
		//이전에도 눌린 상태라면 계속 눌려져있는 상태
		if (key.bPressed == true)
			key.state = eKeyState::Pressed;
		else //이전에 안눌린 상태라면 키가 이제 막 눌린 상태
			key.state = eKeyState::Down;

		//어쨋든 현재 키가 눌린 상태
		key.bPressed = true;
	}

	void Input::UpdateKeyUp(Input::Key& key)
	{
		//이전엔 눌린 상태라면 현재는 키를 뗀 상태
		if (key.bPressed == true)
			key.state = eKeyState::Up;
		else //이전에도 안눌린 상태라면 애초에 키가 안눌린 상태
			key.state = eKeyState::None;

		//어쨋든 현재 키가 안눌린 상태
		key.bPressed = false;
	}
}