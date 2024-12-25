#pragma once
#include "prGameObject.h"

namespace pr
{
	class PET : public GameObject
	{
	public:
		PET();
		~PET() override;

		void Update() override;
		void LateUpdate() override;
		void Render(HDC hdc) override;

		void SetPosition(float x, float y) override
		{
			mX = x;
			mY = y;
		}

		float GetPositionX() override { return mX; }
		float GetPositionY() override { return mY; }
	};
}


