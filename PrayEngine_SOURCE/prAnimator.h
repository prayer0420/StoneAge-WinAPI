#pragma once
#include "prComponent.h"
#include "prAnimation.h"

namespace pr
{
	class Animator : public Component
	{
	public:
		Animator();
		virtual ~Animator();


		void Initialize() override;
		void Update() override;
		void LateUpdate() override;
		void Render(HDC hdc) override;

		void CreateAnimation(const std::wstring& name
							 ,graphics::Texture* spriteSheet 
							 ,Vector2 leftTop
							 ,Vector2 size
							 ,Vector2 offset
							 ,UINT spriteLength
							 ,float duration);

		Animation* FindAnimation(const std::wstring& name);
		void PlayAnimation(const std::wstring& name, bool loop = true);
		std::wstring& GetActiveAnimationName() { return mActiveAnimationName; }

	private:
		std::map<std::wstring, Animation*> mAnimations;
		Animation* mActiveAnimation;
		std::wstring mActiveAnimationName;
		bool mbLoop;
	};
}