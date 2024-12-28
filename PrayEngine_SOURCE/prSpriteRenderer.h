#pragma once
#include "prEntity.h"
#include "prComponent.h"

namespace pr
{
	class SpriteRenderer : public Component
	{
	public:
		SpriteRenderer();
		~SpriteRenderer();

		void Initialize() override;
		void Update()  override;
		void LateUpdate()  override;
		void Render(HDC hdc)  override;
		void ImageLoad(const std::wstring& path); //ImageLoad먼저하고 Render에 그림

	private:
		Gdiplus::Image* mImgae;
		UINT mWidth;
		UINT mHeight;

	};
}