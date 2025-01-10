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
		,mDirection(PlayerScript::eDirection::F	)
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
		case pr::PlayerScript::eState::Run:
			Run();
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

	void PlayerScript::PlayAnimationBydirectionAndstate()
	{
		std::wstring activeAnimationName = mAnimator->GetActiveAnimationName();
		std::wstring PlayerName = activeAnimationName.substr(0, activeAnimationName.find(L"_"));

		std::wstring addStateName = StateToWstring(mState);
		std::wstring addDirName = DirToWstring(mDirection);

		switch (mDirection)
		{
		case pr::PlayerScript::eDirection::F:
			mAnimator->PlayAnimation(PlayerName + addStateName + addDirName, true);
			break;

		case pr::PlayerScript::eDirection::LF:
			mAnimator->PlayAnimation(PlayerName + addStateName + addDirName, true);
			break;

		case pr::PlayerScript::eDirection::L:
			mAnimator->PlayAnimation(PlayerName + addStateName + addDirName, true);
			break;

		case pr::PlayerScript::eDirection::LB:
			mAnimator->PlayAnimation(PlayerName + addStateName + addDirName, true);
			break;

		case pr::PlayerScript::eDirection::B:
			mAnimator->PlayAnimation(PlayerName + addStateName + addDirName, true);
			break;

		case pr::PlayerScript::eDirection::RB:
			mAnimator->PlayAnimation(PlayerName + addStateName + addDirName, true);
			break;
		case pr::PlayerScript::eDirection::R:
			mAnimator->PlayAnimation(PlayerName + addStateName + addDirName, true);
			break;

		case pr::PlayerScript::eDirection::RF:
			mAnimator->PlayAnimation(PlayerName + addStateName + addDirName, true);
			break;
		default:
			assert(false);
			break;
		}
	}

	std::wstring pr::PlayerScript::StateToWstring(eState state)
	{
		switch (state)
		{
		case pr::PlayerScript::eState::Idle:
			return L"_Idle";
			break;
		case pr::PlayerScript::eState::Run:
			return L"_Run";
			break;
		case pr::PlayerScript::eState::Attack:
			return L"_Attack";
			break;
		case pr::PlayerScript::eState::Dead:
			return L"_Dead";
			break;
		case pr::PlayerScript::eState::Hurt:
			return L"_Hurt";
			break;
		case pr::PlayerScript::eState::Guard:
			return L"_Guard";
			break;
		case pr::PlayerScript::eState::UsingItem:
			return L"_UsingItem";
			break;
		case pr::PlayerScript::eState::ChangingPet:
			return L"_ChangingPet";
			break;
		case pr::PlayerScript::eState::Escape:
			return L"_Escape";
			break;
		default:
			assert(false);
			break;
		}
	}

	std::wstring pr::PlayerScript::DirToWstring(eDirection dir)
	{
		switch (dir)
		{
		case pr::PlayerScript::eDirection::F:
			return L"_F";
			break;
		case pr::PlayerScript::eDirection::LF:
			return L"_LF";
			break;
		case pr::PlayerScript::eDirection::L:
			return L"_L";
			break;
		case pr::PlayerScript::eDirection::LB:
			return L"_LB";
			break;
		case pr::PlayerScript::eDirection::B:
			return L"_B";
			break;
		case pr::PlayerScript::eDirection::RB:
			return L"_RB";
			break;
		case pr::PlayerScript::eDirection::R:
			return L"_R";
			break;
		case pr::PlayerScript::eDirection::RF:
			return L"_RF";
			break;
		default:
			assert(false);
			break;
		}
	}

	void PlayerScript::idle()
	{
		if (!battling)
		{
			if (Input::GetKey(eKeyCode::A) || Input::GetKey(eKeyCode::Left))
			{
				mState = PlayerScript::eState::Run;
			}
			//좌상
			if (Input::GetKey(eKeyCode::A) && Input::GetKey(eKeyCode::W)
				|| Input::GetKey(eKeyCode::Left) && Input::GetKey(eKeyCode::Up))
			{
				mState = PlayerScript::eState::Run;
			}
			//상
			if (Input::GetKey(eKeyCode::W) || Input::GetKey(eKeyCode::Up))
			{
				mState = PlayerScript::eState::Run;
			}
			//우상
			if (Input::GetKey(eKeyCode::W) && Input::GetKey(eKeyCode::D)
				|| Input::GetKey(eKeyCode::Up) && Input::GetKey(eKeyCode::Right))
			{
				mState = PlayerScript::eState::Run;
			}
			//우
			if (Input::GetKey(eKeyCode::D) || Input::GetKey(eKeyCode::Right))
			{
				mState = PlayerScript::eState::Run;
			}
			//우하
			if (Input::GetKey(eKeyCode::D) && Input::GetKey(eKeyCode::S)
				|| Input::GetKey(eKeyCode::Right) && Input::GetKey(eKeyCode::Down))
			{
				mState = PlayerScript::eState::Run;
			}
			//하
			if (Input::GetKey(eKeyCode::S) || Input::GetKey(eKeyCode::Down))
			{
				mState = PlayerScript::eState::Run;
			}
			//좌하
			if (Input::GetKey(eKeyCode::A) && Input::GetKey(eKeyCode::S)
				|| Input::GetKey(eKeyCode::Left) && Input::GetKey(eKeyCode::Down))
			{
				mState = PlayerScript::eState::Run;
			}
			PlayAnimationBydirectionAndstate();
		}
	}

	void PlayerScript::Run()
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
		const float speed = 100.0f;

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
		if (Input::GetKey(eKeyCode::A) && Input::GetKey(eKeyCode::W)
			|| Input::GetKey(eKeyCode::Left) && Input::GetKey(eKeyCode::Up))
		{
			mDirection = eDirection::LB;
			pos.x -= speed * Time::DeltaTime();
			pos.y -= speed * Time::DeltaTime();
		}
		//상
		if (Input::GetKey(eKeyCode::W) || Input::GetKey(eKeyCode::Up))
		{
			mDirection = eDirection::B;
			pos.y -= speed * Time::DeltaTime();
		}
		//우상
		if (Input::GetKey(eKeyCode::W) && Input::GetKey(eKeyCode::D)
			|| Input::GetKey(eKeyCode::Up) && Input::GetKey(eKeyCode::Right))
		{
			mDirection = eDirection::RB;
			pos.x += speed * Time::DeltaTime();
			pos.y -= speed * Time::DeltaTime();
		}
		//우
		if (Input::GetKey(eKeyCode::D) || Input::GetKey(eKeyCode::Right))
		{
			mDirection = eDirection::R;
			pos.x += speed * Time::DeltaTime();
		}
		//우하
		if (Input::GetKey(eKeyCode::D) && Input::GetKey(eKeyCode::S)
			|| Input::GetKey(eKeyCode::Right) && Input::GetKey(eKeyCode::Down))
		{
			mDirection = eDirection::RF;
			pos.x += speed * Time::DeltaTime();
			pos.y += speed * Time::DeltaTime();
		}
		//하
		if (Input::GetKey(eKeyCode::S) || Input::GetKey(eKeyCode::Down))
		{
			mDirection = eDirection::F;
			pos.y += speed * Time::DeltaTime();
		}
		//좌하
		if (Input::GetKey(eKeyCode::A) && Input::GetKey(eKeyCode::S)
			|| Input::GetKey(eKeyCode::Left) && Input::GetKey(eKeyCode::Down))
		{
			mDirection = eDirection::LF;
			pos.y += speed * Time::DeltaTime();
			pos.x -= speed * Time::DeltaTime();
		}

		PlayAnimationBydirectionAndstate();

		tr->SetPosition(pos);

		//뗐을때 Idle로 돌아감
		if (   Input::GetKeyUp(eKeyCode::A) || Input::GetKeyUp(eKeyCode::Left)
			|| Input::GetKeyUp(eKeyCode::D) || Input::GetKeyUp(eKeyCode::Right)
			|| Input::GetKeyUp(eKeyCode::W) || Input::GetKeyUp(eKeyCode::Up)
			|| Input::GetKeyUp(eKeyCode::S) || Input::GetKeyUp(eKeyCode::Down))
		{
			mState = PlayerScript::eState::Idle;
			PlayAnimationBydirectionAndstate();
		}

	}
}