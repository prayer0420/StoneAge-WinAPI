#pragma once
#include "prResource.h"
#include "prTexture.h"

namespace pr
{
	struct Sprite
	{
		Vector2 leftTop;
		Vector2 size;
		Vector2 offset;
		float duration;

		Sprite()
			:leftTop(Vector2::Zero)
			,size(Vector2::Zero)
			,offset(Vector2::Zero)
			,duration(0.0f)
		{
		}
	};

	class Animation : public Resource
	{
	public:
		Animation();
		virtual ~Animation();

		HRESULT Load(const std::wstring& path) override;

		void Update();
		void Render(HDC hdc);

		void CreateAnimation(const std::wstring& name
			, graphics::Texture* spriteSheet
			, Vector2 leftTop
			, Vector2 size
			, Vector2 offset
			, UINT spriteLength
			, float duration);

		void Reset();
		bool isComplete() { return mbComplete; }
		void SetAnimator(class Animator* animator) { mAnimator = animator; }


	private:
		class Animator* mAnimator;
		graphics::Texture* mTexture;
		std::vector<Sprite> mAnimationSheet;
		int mIndex;
		float mTime;
		bool mbComplete;
	};
}