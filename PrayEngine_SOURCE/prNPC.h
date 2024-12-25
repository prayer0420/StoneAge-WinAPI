#pragma once
#include "prGameObject.h"

namespace pr
{
	class NPC : public GameObject
	{
	public:
		NPC();
		~NPC() override;

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
