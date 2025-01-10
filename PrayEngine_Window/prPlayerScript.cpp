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
		if (Input::GetKey(eKeyCode::A) || Input::GetKey(eKeyCode::Left))
		{
			pos.x -= speed * Time::DeltaTime();
		}
		if (Input::GetKey(eKeyCode::D) || Input::GetKey(eKeyCode::Right))
		{
			pos.x += speed * Time::DeltaTime();
		}

		if (Input::GetKey(eKeyCode::W) || Input::GetKey(eKeyCode::Up))
		{
			pos.y -= speed * Time::DeltaTime();
		}

		if (Input::GetKey(eKeyCode::S) || Input::GetKey(eKeyCode::Down))
		{
			pos.y += speed * Time::DeltaTime();
		}

		tr->SetPosition({ pos });

		//뗐을때 Idle로 돌아감
		if (   Input::GetKeyUp(eKeyCode::A) || Input::GetKeyUp(eKeyCode::Left)
			|| Input::GetKeyUp(eKeyCode::D) || Input::GetKeyUp(eKeyCode::Right)
			|| Input::GetKeyUp(eKeyCode::W) || Input::GetKeyUp(eKeyCode::Up)
			|| Input::GetKeyUp(eKeyCode::S) || Input::GetKeyUp(eKeyCode::Down))
		{
			mState = PlayerScript::eState::Idle;
			//mAnimator->PlayAnimation(L"s", falsekjlkjl);
		}

	}
}