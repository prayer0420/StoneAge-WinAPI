#include "prAnimator.h"

namespace pr
{

	Animator::Animator()
		: Component(enums::eComponentType::Animator)
		,mAnimations{}
		,mActiveAnimation(nullptr)
		,mbLoop(false)
	{
	}

	Animator::~Animator()
	{
	}
	void Animator::Initialize()
	{
	}

	void Animator::Update()
	{
		//내 현재 애니메이션이 있을때만 재생
		if (mActiveAnimation)
		{
			mActiveAnimation->Update();

			//애니메이션이 끝나고 mbLoop가 true일때 또 재생
			if (mActiveAnimation->isComplete() == true
				&& mbLoop == true)
			{
				mActiveAnimation->Reset();
			}
				
		}
	}

	void Animator::LateUpdate()
	{
	}
	void Animator::Render(HDC hdc)
	{
		if (mActiveAnimation)
			mActiveAnimation->Render(hdc);
	}

	void Animator::CreateAnimation(const std::wstring& name
		, graphics::Texture* spriteSheet
		, Vector2 leftTop
		, Vector2 size
		, Vector2 offset
		, UINT spriteLength
		, float duration)
	{
		Animation* animation = nullptr;
		
		//혹여나 이미 존재할 수 있으니 찾아보기
		animation = FindAnimation(name);
		if (animation != nullptr)
			return;

		animation = new Animation();
		animation->CreateAnimation(name, spriteSheet
			, leftTop, size, offset, spriteLength, duration	);
		
		animation->SetAnimator(this);

		//map에 추가
		mAnimations.insert(std::make_pair(name, animation));
	}

	Animation* Animator::FindAnimation(const std::wstring& name)
	{
		auto iter = mAnimations.find(name);
		if (iter == mAnimations.end())
			return nullptr;

		return iter->second;
	}

	void Animator::PlayAnimation(const std::wstring& name, bool loop)
	{
		Animation* animation = FindAnimation(name);
		if (animation == nullptr)
			return;

		mActiveAnimation = animation;

		//만약 중간에 끊겼을 수도 있으니 재생전에 리셋 해주기
		mActiveAnimation->Reset();
		
		mbLoop = loop; 
	}
}