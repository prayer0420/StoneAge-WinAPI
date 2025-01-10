#include "prPlayerScript.h"
#include "prInput.h"
#include "prTransform.h"
#include "prTime.h"
#include "prGameObject.h"
#include "prAnimator.h"

namespace pr
{
	PlayerScript::PlayerScript()
		:mState(PlayerScript::eState::Idle)
		,battling(false)
		,mAnimator(nullptr)
	{
	}
	PlayerScript::~PlayerScript()
	{
	}
	void PlayerScript::Initialize()
	{
	}
	void PlayerScript::Update()
	{
		if(mAnimator==nullptr)
			mAnimator = GetOwner()->GetComponent<Animator>();

		switch (mState)
		{
		case pr::PlayerScript::eState::Idle:
			idle();
			break;
		case pr::PlayerScript::eState::Walk:
			keyboardMove();
			break;
		case pr::PlayerScript::eState::Attack:
			break;
		case pr::PlayerScript::eState::Dead:
			break;
		case pr::PlayerScript::eState::Hurt:
			break;
		case pr::PlayerScript::eState::Guard:
			break;
		case pr::PlayerScript::eState::UsingItem:
			break;
		case pr::PlayerScript::eState::ChangingPet:
			break;
		case pr::PlayerScript::eState::Escape:
			break;
		default:
			break;
		}

	}
	void PlayerScript::LateUpdate()
	{
	}

	void PlayerScript::Render(HDC hdc)
	{
	}

	void PlayerScript::PlayWalkAnimationBydirection()
	{
		std::wstring activeAnimationName = mAnimator->GetActiveAnimationName();
		std::wstring name = activeAnimationName.substr(0,activeAnimationName.find(L"_"));

		//size_t pos = activeAnimationName.find(L'_');

		//if (pos != std::wstring::npos) 
		//{
		//	std::wstring result = activeAnimationName.substr(0, pos);  // 시작부터 언더바 앞까지 부분 문자열 추출
		//	std::wcout << result << std::endl;  // 출력: MammonHurt
		//}

		switch (mDirection)
		{
		case pr::PlayerScript::eDirection::F:
			mAnimator->PlayAnimation(name + L"_F", true);
			break;
		case pr::PlayerScript::eDirection::LF:
			mAnimator->PlayAnimation(name + L"_LF", true);
			break;
		case pr::PlayerScript::eDirection::L:
			mAnimator->PlayAnimation(name + L"_L", true);
			break;
		case pr::PlayerScript::eDirection::LB:
			mAnimator->PlayAnimation(name + L"_LB", true);
			break;
		case pr::PlayerScript::eDirection::B:
			mAnimator->PlayAnimation(name + L"_B", true);
			break;
		case pr::PlayerScript::eDirection::RB:
			mAnimator->PlayAnimation(name + L"_RB", true);
			break;
		case pr::PlayerScript::eDirection::R:
			mAnimator->PlayAnimation(name + L"_R", true);
			break;
		case pr::PlayerScript::eDirection::RF:
			mAnimator->PlayAnimation(name + L"_RF", true);
			break;
		default:
			assert(false);
		}
	}

	void PlayerScript::idle()
	{
		if (!battling)
		{
			if (Input::GetKey(eKeyCode::A) || Input::GetKey(eKeyCode::Left))
			{
				mState = PlayerScript::eState::Walk;
			}

			if (Input::GetKey(eKeyCode::D) || Input::GetKey(eKeyCode::Right))
				mState = PlayerScript::eState::Walk;

			if (Input::GetKey(eKeyCode::W) || Input::GetKey(eKeyCode::Up))
				mState = PlayerScript::eState::Walk;

			if (Input::GetKey(eKeyCode::S) || Input::GetKey(eKeyCode::Down))
				mState = PlayerScript::eState::Walk;
		}
	}

	void PlayerScript::walk()
	{
		if (!battling)
		{
			keyboardMove();
		}

	}

	void PlayerScript::attack()
	{
	}

	void PlayerScript::dead()
	{
	}

	void PlayerScript::hurt()
	{
	}

	void PlayerScript::guard()
	{
	}

	void PlayerScript::usingItem()
	{
	}

	void PlayerScript::changingPet()
	{
	}

	void PlayerScript::escape()
	{
	}
	void PlayerScript::keyboardMove()
	{
		const int speed = 100.0f;

		Transform* tr = GetOwner()->GetComponent<Transform>();
		Vector2 pos = tr->GetPosition();

		//누르고 있는 동안 이동
		//좌
		if (Input::GetKey(eKeyCode::A) || Input::GetKey(eKeyCode::Left))
		{
			mDirection = eDirection::L;
			pos.x -= speed * Time::DeltaTime();
		}
		//좌상
		else if (Input::GetKey(eKeyCode::A) && Input::GetKey(eKeyCode::W)
			|| Input::GetKey(eKeyCode::Right) && Input::GetKey(eKeyCode::Up))
		{
			mDirection = eDirection::LB;
			pos.x -= speed * Time::DeltaTime();
			pos.y += speed * Time::DeltaTime();
		}
		//상
		else if (Input::GetKey(eKeyCode::W) || Input::GetKey(eKeyCode::Up))
		{
			mDirection = eDirection::B;
			pos.y -= speed * Time::DeltaTime();
		}
		//우상
		else if (Input::GetKey(eKeyCode::W) && Input::GetKey(eKeyCode::R)
			|| Input::GetKey(eKeyCode::Up) && Input::GetKey(eKeyCode::Right))
		{
			mDirection = eDirection::RB;
			pos.x += speed * Time::DeltaTime();
			pos.y -= speed * Time::DeltaTime();
		}
		//우
		else if (Input::GetKey(eKeyCode::D) || Input::GetKey(eKeyCode::Right))
		{
			mDirection = eDirection::R;
			pos.x += speed * Time::DeltaTime();
		}
		//우하
		else if (Input::GetKey(eKeyCode::D) && Input::GetKey(eKeyCode::S)
			|| Input::GetKey(eKeyCode::Right) && Input::GetKey(eKeyCode::Down))
		{
			mDirection = eDirection::RF;
			pos.x += speed * Time::DeltaTime();
			pos.y += speed * Time::DeltaTime();
		}
		//하
		else if (Input::GetKey(eKeyCode::S) || Input::GetKey(eKeyCode::Down))
		{
			mDirection = eDirection::F;
			pos.y += speed * Time::DeltaTime();
		}
		//좌하
		else if (Input::GetKey(eKeyCode::A) && Input::GetKey(eKeyCode::S)
			|| Input::GetKey(eKeyCode::Left) && Input::GetKey(eKeyCode::Down))
		{
			mDirection = eDirection::LF;
			pos.y += speed * Time::DeltaTime();
			pos.x -= speed * Time::DeltaTime();
		}

		PlayWalkAnimationBydirection();

		tr->SetPosition({ pos });

		//뗐을때 Idle로 돌아감
		if (   Input::GetKeyUp(eKeyCode::A) || Input::GetKeyUp(eKeyCode::Left)
			|| Input::GetKeyUp(eKeyCode::D) || Input::GetKeyUp(eKeyCode::Right)
			|| Input::GetKeyUp(eKeyCode::W) || Input::GetKeyUp(eKeyCode::Up)
			|| Input::GetKeyUp(eKeyCode::S) || Input::GetKeyUp(eKeyCode::Down))
		{
			mState = PlayerScript::eState::Idle;

			std::wstring activeAnimationName = mAnimator->GetActiveAnimationName();
			std::wstring name = activeAnimationName.substr(activeAnimationName.find(L"_"));
			mAnimator->PlayAnimation(name + L"RF", true);

		}

	}
}