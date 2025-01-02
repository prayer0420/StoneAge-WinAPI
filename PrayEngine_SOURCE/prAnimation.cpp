#include "prAnimation.h"
#include "prTime.h"
#include "prTransform.h"
#include "prGameObject.h"
#include "prAnimator.h"
#include "prRenderer.h"

namespace pr
{
	Animation::Animation()
		:Resource(enums::eResourceType::Animation)
		,mAnimator(nullptr)
		,mTexture(nullptr)
		, mAnimationSheet{}
		,mIndex(-1)
		,mTime(0.0f)
		,mbComplete(false)
	{

	}

	Animation::~Animation()
	{
	}

	HRESULT Animation::Load(const std::wstring& path)
	{
		return E_NOTIMPL;
	}

	void Animation::Update()
	{
		if (mbComplete)
			return;
		
		//시간 카운트
		mTime += Time::DeltaTime();

		//카운트한 시간이 현재 재생중인 index의 sprite의 간격시간보다 크다면
		if (mAnimationSheet[mIndex].duration < mTime)
		{
			mTime = 0.0f;
			//아직 진행해야할 sprite가 있을 경우에는 계속 ++해줌
			if (mIndex < mAnimationSheet.size() - 1)
				mIndex++;
			else //다 진행했다면 Complete!
				mbComplete = true;
		}
	}

	void Animation::Render(HDC hdc)
	{
		if (mTexture == nullptr)
			return;
		
		GameObject* gameObj = mAnimator->GetOwner();
		Transform* tr = gameObj->GetComponent<Transform>();
		Vector2 pos = tr->GetPosition();

		//카메라가 있다면 카메라 기준으로 바꿔줘야함
		if (renderer::mainCamera)
			pos =  renderer::mainCamera->CaluatePosition(pos);

		Sprite sprite = mAnimationSheet[mIndex];

		HDC imgHdc = mTexture->GetHdc();
		
		TransparentBlt(hdc
			, pos.x
			, pos.y
			, sprite.size.x * 1.5
			, sprite.size.y * 1.5
			, imgHdc
			, sprite.leftTop.x
			, sprite.leftTop.y
			, sprite.size.x
			, sprite.size.y
			, RGB(255, 0, 255));

		//Alpha값 필요 할 때

		//BLENDFUNCTION func = {};
		//func.BlendOp = AC_SRC_OVER;
		//func.BlendFlags = 0;
		//func.AlphaFormat = AC_SRC_ALPHA;
		//func.SourceConstantAlpha = 255; //0(transparent)~255(Opaque)

		/*AlphaBlend(hdc
			, pos.x
			, pos.y
			, sprite.size.x
			, sprite.size.y
			, imgHdc
			, sprite.leftTop.x
			, sprite.leftTop.y
			, sprite.size.x
			, sprite.size.y
			, func);*/
	}

	void Animation::CreateAnimation(const std::wstring& name
		, graphics::Texture* spriteSheet
		, Vector2 leftTop
		, Vector2 size
		, Vector2 offset
		, UINT spriteLength
		, float duration)
	{
		mTexture = spriteSheet;
		for (size_t i = 0; i < spriteLength; i++)
		{
			Sprite sprite = {};
			sprite.leftTop.x = leftTop.x + (size.x * i); //0,0 -> 100,0 -> 200,0 -> ...
			sprite.leftTop.y = leftTop.y; 
			sprite.size = size;
			sprite.offset = offset;
			sprite.duration = duration;

			mAnimationSheet.push_back(sprite);
		}
	}

	void Animation::Reset()
	{
		mTime = 0.0f;
		mIndex = 0;
		mbComplete = false;
	}
}