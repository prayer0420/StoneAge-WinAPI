#include "prMonsterScript.h"
#include "prInput.h"
#include "prTransform.h"
#include "prTime.h"
#include "prGameObject.h"
#include "prAnimator.h"
#include "prLoadAnimation.h"


pr::MonsterScript::MonsterScript()
	:mState(eState::Idle)
	, mAnimator(nullptr)
	, mDirection(eDirection::F)
	, mTime(0.0f)
{
}

pr::MonsterScript::~MonsterScript()
{
}

void pr::MonsterScript::Initialize()
{
}

void pr::MonsterScript::Update()
{
	if (mAnimator == nullptr)
		mAnimator = GetOwner()->GetComponent<Animator>();

	switch (mState)
	{
	case pr::MonsterScript::eState::Idle:
		idle();
		break;
	case pr::MonsterScript::eState::Run:
		walk();
		break;
	case pr::MonsterScript::eState::Attack:
		break;
	case pr::MonsterScript::eState::Dead:
		break;
	case pr::MonsterScript::eState::Hurt:
		break;
	case pr::MonsterScript::eState::Guard:
		break;
	case pr::MonsterScript::eState::Escape:
		break;
	default:
		break;
	}
}

void pr::MonsterScript::LateUpdate()
{
}

void pr::MonsterScript::Render(HDC hdc)
{
}

void pr::MonsterScript::idle()
{
	mTime += Time::DeltaTime();
	if (mTime > 2.0f)
	{
		mTime = 0.0f;
		RandomBehaviour();
	}
}

void pr::MonsterScript::walk()
{
	mTime += Time::DeltaTime();
	int direction = rand() % 8;
	mDirection = (eDirection)direction;
	PlayAnimationByStateAndDirection(mDirection);

	Transform* tr = GetOwner()->GetComponent<Transform>();
	translate(tr);

	if (mTime >= 2.0f)
	{
		mState = eState::Idle;
		return;
	}
}

void pr::MonsterScript::attack()
{
}

void pr::MonsterScript::dead()
{
}

void pr::MonsterScript::hurt()
{
}

void pr::MonsterScript::guard()
{
}

void pr::MonsterScript::escape()
{
}

void pr::MonsterScript::RandomBehaviour()
{
	mState = (eState)(rand() % 2);

	if ((UINT)mState == 0)
	{
		mState = eState::Idle;
	}
	else if ((UINT)mState == 1)
	{
		mState = eState::Run;
	}

	//else
	//{
	//	//mState = eState::Seat;
	//}
}

void pr::MonsterScript::PlayAnimationByStateAndDirection(eDirection dir)
{
	std::wstring activeAnimationName = mAnimator->GetActiveAnimationName();
	std::wstring name = activeAnimationName.substr(activeAnimationName.find(L"_") - 1);

	switch (dir)
	{
	case pr::MonsterScript::eDirection::F:
		GetOwner()->GetComponent<Animator>()->PlayAnimation(name + L"F", true);
		break;
	case pr::MonsterScript::eDirection::LF:
		GetOwner()->GetComponent<Animator>()->PlayAnimation(name + L"LF", true);
		break;
	case pr::MonsterScript::eDirection::L:
		GetOwner()->GetComponent<Animator>()->PlayAnimation(name + L"L", true);
		break;
	case pr::MonsterScript::eDirection::LB:
		GetOwner()->GetComponent<Animator>()->PlayAnimation(name + L"LB", true);
		break;
	case pr::MonsterScript::eDirection::B:
		GetOwner()->GetComponent<Animator>()->PlayAnimation(name + L"B", true);
		break;
	case pr::MonsterScript::eDirection::RB:
		GetOwner()->GetComponent<Animator>()->PlayAnimation(name + L"RB", true);
		break;
	case pr::MonsterScript::eDirection::R:
		GetOwner()->GetComponent<Animator>()->PlayAnimation(name + L"R", true);
		break;
	case pr::MonsterScript::eDirection::RF:
		GetOwner()->GetComponent<Animator>()->PlayAnimation(name + L"RF", true);
		break;
	default:
		assert(false);
		break;
	}
}

void pr::MonsterScript::translate(Transform* tr)
{
	const float speed = 100.0f;

	Vector2 pos = tr->GetPosition();
	pos.y += speed * Time::DeltaTime();

	switch (mDirection)
	{
	case pr::MonsterScript::eDirection::F:
		pos.y -= speed * Time::DeltaTime();
		break;
	case pr::MonsterScript::eDirection::LF:
		pos.y -= speed * Time::DeltaTime();
		pos.x -= speed * Time::DeltaTime();
		break;
	case pr::MonsterScript::eDirection::L:
		pos.x -= speed * Time::DeltaTime();
		break;
	case pr::MonsterScript::eDirection::LB:
		pos.x -= speed * Time::DeltaTime();
		pos.y += speed * Time::DeltaTime();
		break;
	case pr::MonsterScript::eDirection::B:
		pos.y += speed * Time::DeltaTime();
		break;
	case pr::MonsterScript::eDirection::RB:
		pos.x += speed * Time::DeltaTime();
		pos.y += speed * Time::DeltaTime();
		break;
	case pr::MonsterScript::eDirection::R:
		pos.x += speed * Time::DeltaTime();
		break;
	case pr::MonsterScript::eDirection::RF:
		pos.x += speed * Time::DeltaTime();
		pos.y -= speed * Time::DeltaTime();
		break;
	default:
		assert(false);
		break;
	}

	tr->SetPosition({ pos });
}
