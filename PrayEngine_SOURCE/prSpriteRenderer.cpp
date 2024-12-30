#include "prSpriteRenderer.h"
#include "prGameObject.h"
#include "prTransform.h"
#include "prPlayer.h"
#include "prPET.h"
#include "prNPC.h"
//#include "prUI.h"


namespace pr
{
	SpriteRenderer::SpriteRenderer()
		: mImgae(nullptr)
		, mWidth(0)
		, mHeight(0)
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
		if (dynamic_cast<Player*>(this->GetOwner()))
		{
			HBRUSH GreenBrush = CreateSolidBrush(RGB(0, 255, 0));
			HBRUSH oldBrush = (HBRUSH)SelectObject(hdc, GreenBrush);
			Transform* tr = GetOwner()->GetComponent<Transform>();
			Ellipse(hdc, tr->GetPosition().x, tr->GetPosition().y, tr->GetPosition().x+100, tr->GetPosition().y +100);
			SelectObject(hdc, oldBrush);
			DeleteObject(GreenBrush);
		}

		else if (dynamic_cast<PET*>(this->GetOwner()))
		{
			HBRUSH redBrush = CreateSolidBrush(RGB(255, 0, 0));
			HBRUSH oldBrush = (HBRUSH)SelectObject(hdc, redBrush);
			Transform* tr = GetOwner()->GetComponent<Transform>();
			Ellipse(hdc, tr->GetPosition().x, tr->GetPosition().y, tr->GetPosition().x + 100, tr->GetPosition().y + 100);
			SelectObject(hdc, oldBrush);
			DeleteObject(redBrush);
		}

		else if (dynamic_cast<NPC*>(this->GetOwner()))
		{
			HBRUSH blueBrush = CreateSolidBrush(RGB(0, 0, 255));
			HBRUSH oldBrush = (HBRUSH)SelectObject(hdc, blueBrush);
			Transform* tr = GetOwner()->GetComponent<Transform>();
			Ellipse(hdc, tr->GetPosition().x, tr->GetPosition().y, tr->GetPosition().x + 100, tr->GetPosition().y + 100);
			SelectObject(hdc, oldBrush);
			DeleteObject(blueBrush);
		}
	
	//if (dynamic_cast<UI*>(this->GetOwner()))
	//{
		Transform* tr = GetOwner()->GetComponent<Transform>();
		Vector2 pos = tr->GetPosition();
		Gdiplus::Graphics graphcis(hdc);
		graphcis.DrawImage(mImgae, Gdiplus::Rect(pos.x, pos.y, mWidth, mHeight));
	//}

	}

	void SpriteRenderer::ImageLoad(const std::wstring& path)
	{
		mImgae = Gdiplus::Image::FromFile(path.c_str());
		mWidth = mImgae->GetWidth();
		mHeight = mImgae->GetHeight();
	}

}
