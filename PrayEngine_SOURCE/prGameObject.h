#pragma once
#include "CommonInclude.h"

namespace pr
{
	class GameObject
	{
	public :
		GameObject();
		virtual ~GameObject();

		virtual void Update();
		virtual void LateUpdate();
		virtual void Render(HDC hdc);

		virtual void SetPosition(float x, float y)
		{
			mX = x;
			mY = y;
		}

		virtual float GetPositionX() {return mX;}
		virtual float GetPositionY() {return mY;}

	protected :
		float mX;
		float mY;
	};
}