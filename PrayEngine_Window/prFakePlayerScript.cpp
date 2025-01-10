#include "prFakePlayerScript.h"
#include "prInput.h"
#include "prTransform.h"
#include "prTime.h"
#include "prGameObject.h"
#include "prAnimator.h"


pr::FakePlayerScript::FakePlayerScript()
	:mState(eState::Idle)
	, mAnimator(nullptr)
	, mTime(0.0f)
{
}

pr::FakePlayerScript::~FakePlayerScript()
{
}

void pr::FakePlayerScript::Initialize()
{
}

void pr::FakePlayerScript::Update()
{
	if (mAnimator == nullptr)
		mAnimator = GetOwner()->GetComponent<Animator>();

	switch (mState)
	{
	case pr::FakePlayerScript::eState::Idle:
		idle();
		break;
	case pr::FakePlayerScript::eState::Run:
		walk();
		break;
	case pr::FakePlayerScript::eState::Cry:
		break;
	case pr::FakePlayerScript::eState::Angry:
		break;
	case pr::FakePlayerScript::eState::Happy:
		break;
	case pr::FakePlayerScript::eState::Hello:
		break;
	case pr::FakePlayerScript::eState::Seat:
		break;
	case pr::FakePlayerScript::eState::End:
		break;
	default:
		break;
	}
}

void pr::FakePlayerScript::LateUpdate()
{
}

void pr::FakePlayerScript::Render(HDC hdc)
{
}

void pr::FakePlayerScript::idle()
{
	mTime += Time::DeltaTime();
	

	if (mTime > 2.0f)
	{
		nextBehaviour();
		PlayWalkAnimationBydirection(mDirection);
		mTime = 0.0f;
	}

}

void pr::FakePlayerScript::walk()
{
	mTime += Time::DeltaTime();

	Transform* tr = GetOwner()->GetComponent<Transform>();
	translate(tr);
	if (mTime >= 2.0f)
	{
		nextBehaviour();
		PlayWalkAnimationBydirection(mDirection);
		mTime = 0.0f;
	}
}

void pr::FakePlayerScript::cry()
{
	mAnimator->PlayAnimation(L"", true);

}

void pr::FakePlayerScript::angry()
{
	mAnimator->PlayAnimation(L"", true);

}

void pr::FakePlayerScript::happy()
{
	mAnimator->PlayAnimation(L"", true);

}

void pr::FakePlayerScript::hello()
{
	mAnimator->PlayAnimation(L"", true);

}

void pr::FakePlayerScript::seat()
{
	mAnimator->PlayAnimation(L"", true);

}


void pr::FakePlayerScript::nextBehaviour()
{
	int direction = rand() % 7;
	mDirection = (eDirection)direction;

	mState = (eState)(rand() % 2);

	if ((UINT)mState == 0)
	{
		mState = eState::Idle;
	}
	else if ((UINT)mState == 1)
	{
		mState = eState::Run;
	}
}

std::wstring pr::FakePlayerScript::StateToWstring(eState state)
{
	switch (state)
	{
	case pr::FakePlayerScript::eState::Idle:
		return L"_Idle";
		break;
	case pr::FakePlayerScript::eState::Run:
		return L"_Run";
		break;
	case pr::FakePlayerScript::eState::Cry:
		return L"_Cry";
		break;
	case pr::FakePlayerScript::eState::Angry:
		return L"_Angry";
		break;
	case pr::FakePlayerScript::eState::Happy:
		return L"_Happy";
		break;
	case pr::FakePlayerScript::eState::Hello:
		return L"_Hello";
		break;
	case pr::FakePlayerScript::eState::Seat:
		return L"_Seat";
		break;
	default:
		assert(false);
		break;
	}
}

std::wstring pr::FakePlayerScript::DirToWstring(eDirection dir)
{
	switch (dir)
	{
	case pr::FakePlayerScript::eDirection::F:
		return L"_F";
		break;
	case pr::FakePlayerScript::eDirection::LF:
		return L"_LF";
		break;
	case pr::FakePlayerScript::eDirection::L:
		return L"_L";
		break;
	case pr::FakePlayerScript::eDirection::LB:
		return L"_LB";
		break;
	case pr::FakePlayerScript::eDirection::B:
		return L"_B";
		break;
	case pr::FakePlayerScript::eDirection::RB:
		return L"_RB";
		break;
	case pr::FakePlayerScript::eDirection::R:
		return L"_R";
		break;
	case pr::FakePlayerScript::eDirection::RF:
		return L"_RF";
		break;
	default:
		assert(false);
		break;
	}
}

void pr::FakePlayerScript::PlayWalkAnimationBydirection(eDirection dir)
{

	std::wstring activeAnimationName = mAnimator->GetActiveAnimationName();
	std::wstring PlayerName = activeAnimationName.substr(0,activeAnimationName.find(L"_"));

	std::wstring addStateName = StateToWstring(mState);
	std::wstring addDirName = DirToWstring(mDirection);

	switch (dir)
	{
	case pr::FakePlayerScript::eDirection::F:
		mAnimator->PlayAnimation(PlayerName + addStateName + addDirName, true);
		break;

	case pr::FakePlayerScript::eDirection::LF:
		mAnimator->PlayAnimation(PlayerName + addStateName + addDirName, true);
		break;

	case pr::FakePlayerScript::eDirection::L:
		mAnimator->PlayAnimation(PlayerName + addStateName + addDirName, true);
		break;

	case pr::FakePlayerScript::eDirection::LB:
		mAnimator->PlayAnimation(PlayerName + addStateName + addDirName, true);
		break;

	case pr::FakePlayerScript::eDirection::B:
		mAnimator->PlayAnimation(PlayerName + addStateName + addDirName, true);
		break;

	case pr::FakePlayerScript::eDirection::RB:
		mAnimator->PlayAnimation(PlayerName + addStateName + addDirName, true);
		break;
	case pr::FakePlayerScript::eDirection::R:
		mAnimator->PlayAnimation(PlayerName + addStateName + addDirName, true);
		break;

	case pr::FakePlayerScript::eDirection::RF:
		mAnimator->PlayAnimation(PlayerName + addStateName + addDirName, true);
		break;
	default:
		assert(false);
		break;
	}
}

void pr::FakePlayerScript::translate(Transform* tr)
{
	const float speed = 100.0f;

	Vector2 pos = tr->GetPosition();

	switch (mDirection)
	{
	case pr::FakePlayerScript::eDirection::F:
		pos.y += speed * Time::DeltaTime();
		break;
	case pr::FakePlayerScript::eDirection::LF:
		pos.y += speed * Time::DeltaTime();
		pos.x -= speed * Time::DeltaTime();
		break;
	case pr::FakePlayerScript::eDirection::L:
		pos.x -= speed * Time::DeltaTime();
		break;
	case pr::FakePlayerScript::eDirection::LB:
		pos.x -= speed * Time::DeltaTime();
		pos.y -= speed * Time::DeltaTime();
		break;
	case pr::FakePlayerScript::eDirection::B:
		pos.y -= speed * Time::DeltaTime();
		break;
	case pr::FakePlayerScript::eDirection::RB:
		pos.x += speed * Time::DeltaTime();
		pos.y -= speed * Time::DeltaTime();
		break;
	case pr::FakePlayerScript::eDirection::R:
		pos.x += speed * Time::DeltaTime();
		break;
	case pr::FakePlayerScript::eDirection::RF:
		pos.x += speed * Time::DeltaTime();
		pos.y += speed * Time::DeltaTime();
		break;
	default:
		assert(false);
		break;
	}

	tr->SetPosition({ pos });
}

