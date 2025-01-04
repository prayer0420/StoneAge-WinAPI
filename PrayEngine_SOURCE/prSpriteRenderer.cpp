#include "prSpriteRenderer.h"
#include "prGameObject.h"
#include "prTransform.h"
#include "prPlayer.h"
#include "prMyPET.h"
#include "prNPC.h"
#include "..\\PrayEngine_Window\\prUI.h"
#include "..\\PrayEngine_Window\\prEnemyPet.h"
#include "prTexture.h"
#include "prRenderer.h"


namespace pr
{
	SpriteRenderer::SpriteRenderer()
		: Component(enums::eComponentType::SpriteRenderer)
		, mTexture(nullptr)
		,mSize(Vector2::One)
	{
	}
	SpriteRenderer::~SpriteRenderer()
	{
	}
	void SpriteRenderer::Initialize()
	{
	}
	void SpriteRenderer::Update()
	{
	}
	void SpriteRenderer::LateUpdate()
	{
	}

	//추후 리팩토링
	void SpriteRenderer::Render(HDC hdc)
	{
		if (dynamic_cast<NPC*>(this->GetOwner()))
		{
			HBRUSH blueBrush = CreateSolidBrush(RGB(0, 0, 255));
			HBRUSH oldBrush = (HBRUSH)SelectObject(hdc, blueBrush);
			Transform* tr = GetOwner()->GetComponent<Transform>();
			Vector2 pos = tr->GetPosition();
			pos = renderer::mainCamera->CaluatePosition(pos);

			Ellipse(hdc, pos.x, pos.y, pos.x + 100, pos.y + 100);
			SelectObject(hdc, oldBrush);
			DeleteObject(blueBrush);
		}

		else if (dynamic_cast<UI*>(this->GetOwner()))
		{
			if (mTexture == nullptr)
				assert(false);

			Transform* tr = GetOwner()->GetComponent<Transform>();
			Vector2 pos = tr->GetPosition();
			pos = renderer::mainCamera->CaluatePosition(pos); //카메라 위치 기준 계산

			if (mTexture->GetTextureType() == graphics::Texture::eTextureType::Bmp)
			{
				TransparentBlt(hdc, pos.x, pos.y
					, mTexture->GetWidth() * mSize.x, mTexture->GetHeight() * mSize.y
					, mTexture->GetHdc(), 0, 0, mTexture->GetWidth(), mTexture->GetHeight()
					, RGB(255, 0, 255));
			}
			else if (mTexture->GetTextureType() == graphics::Texture::eTextureType::Png)
			{
				Gdiplus::Graphics graphcis(hdc);
				
				Gdiplus::ImageAttributes imgAtt = {};
				imgAtt.SetColorKey(Gdiplus::Color(100, 100, 100), Gdiplus::Color(255, 2555, 255));

				graphcis.DrawImage(mTexture->GetImage()
					, Gdiplus::Rect
					(
						pos.x, pos.y
						, mTexture->GetWidth()  * mSize.x
						, mTexture->GetHeight() * mSize.y
					)
					, 0,0 //0,0부터 texture의 넓이, 높이까지
					, mTexture->GetWidth()
					, mTexture->GetHeight()
					, Gdiplus::UnitPixel
					, nullptr);
			}
		}
	}
}