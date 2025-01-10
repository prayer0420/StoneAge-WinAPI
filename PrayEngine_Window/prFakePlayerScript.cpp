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
	case pr::FakePlayerScript::eState::Walk:
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
	if (mTime > 5.0f)
	{
		mTime = 0.0f;
		nextBehaviour();
	}

}

void pr::FakePlayerScript::walk()
{
	mTime += Time::DeltaTime();
	int direction = rand() % 8;
	mDirection = (eDirection)direction;
	PlayWalkAnimationBydirection(mDirection);

	Transform* tr = GetOwner()->GetComponent<Transform>();
	translate(tr);

	if (mTime >= 0.5f)
	{
		mState = eState::Idle;
		return;
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
	mState = (eState)(rand() % 2);

	if ((UINT)mState == 0)
	{
		mState = eState::Idle;
	}
	else if ((UINT)mState == 1)
	{
		mState = eState::Walk;
	}
}

void pr::FakePlayerScript::PlayWalkAnimationBydirection(eDirection dir)
{

	std::wstring activeAnimationName = mAnimator->GetActiveAnimationName();
	std::wstring name = activeAnimationName.substr(activeAnimationName.find(L"_"));

	switch (dir)
	{
	case pr::FakePlayerScript::eDirection::F:
		GetOwner()->GetComponent<Animator>()->PlayAnimation(name + L"F", true);
		break;
	case pr::FakePlayerScript::eDirection::LF:
		GetOwner()->GetComponent<Animator>()->PlayAnimation(name + L"LF", true);
		break;
	case pr::FakePlayerScript::eDirection::L:
		GetOwner()->GetComponent<Animator>()->PlayAnimation(name + L"L", true);
		break;
	case pr::FakePlayerScript::eDirection::LB:
		GetOwner()->GetComponent<Animator>()->PlayAnimation(name + L"LB", true);
		break;
	case pr::FakePlayerScript::eDirection::B:
		GetOwner()->GetComponent<Animator>()->PlayAnimation(name + L"B", true);
		break;
	case pr::FakePlayerScript::eDirection::RB:
		GetOwner()->GetComponent<Animator>()->PlayAnimation(name + L"RB", true);
		break;
	case pr::FakePlayerScript::eDirection::R:
		GetOwner()->GetComponent<Animator>()->PlayAnimation(name + L"R", true);
		break;
	case pr::FakePlayerScript::eDirection::RF:
		GetOwner()->GetComponent<Animator>()->PlayAnimation(name + L"RF", true);
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
	pos.y += speed * Time::DeltaTime();

	switch (mDirection)
	{
	case pr::FakePlayerScript::eDirection::F:
		pos.y -= speed * Time::DeltaTime();
		break;
	case pr::FakePlayerScript::eDirection::LF:
		pos.y -= speed * Time::DeltaTime();
		pos.x -= speed * Time::DeltaTime();
		break;
	case pr::FakePlayerScript::eDirection::L:
		pos.x -= speed * Time::DeltaTime();
		break;
	case pr::FakePlayerScript::eDirection::LB:
		pos.x -= speed * Time::DeltaTime();
		pos.y += speed * Time::DeltaTime();
		break;
	case pr::FakePlayerScript::eDirection::B:
		pos.y += speed * Time::DeltaTime();
		break;
	case pr::FakePlayerScript::eDirection::RB:
		pos.x += speed * Time::DeltaTime();
		pos.y += speed * Time::DeltaTime();
		break;
	case pr::FakePlayerScript::eDirection::R:
		pos.x += speed * Time::DeltaTime();
		break;
	case pr::FakePlayerScript::eDirection::RF:
		pos.x += speed * Time::DeltaTime();
		pos.y -= speed * Time::DeltaTime();
		break;
	default:
		assert(false);
		break;
	}

	tr->SetPosition({ pos });
}

