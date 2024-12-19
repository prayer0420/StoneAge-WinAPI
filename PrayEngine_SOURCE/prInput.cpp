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
		/*'Left', 'Down', 'Up',*/
	};


	void pr::Input::Initialize()
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

	void pr::Input::Update()
	{
		//mKeys의 개수만큼 반복(싹 다 체크)
		for (size_t i = 0; i < mKeys.size(); i++)
		{
			//지금 키가 눌렸다
			if (GetAsyncKeyState(ASCII[i]) & 0x8000)
			{
				//이전에도 눌렸다면 계속 눌려져있는 상태
				if (mKeys[i].bPressed == true)
				{
					mKeys[i].state = eKeyState::Pressed;
				}
				else //이전에 안눌렸다면 키가 처음 눌린 상태
				{
					mKeys[i].state = eKeyState::Down;
				}
				//현재 키 안눌렸다고 체크
				mKeys[i].bPressed = true; 
			}
			else  //지금 키가 안눌렸다.
			{
				//이전엔 눌렸다면 현재는 키를 뗀 상태
				if (mKeys[i].bPressed == true)
				{
					mKeys[i].state = eKeyState::Up;
				}
				else //이전에도 안눌렸다면 아무것도 아님
				{
					mKeys[i].state = eKeyState::None;
				}
				mKeys[i].bPressed = false;
			}
		}
	}
}