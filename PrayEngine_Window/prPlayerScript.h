#pragma once
#include "..\\PrayEngine_SOURCE\\prScript.h"


namespace pr
{
	class PlayerScript : public Script
	{
	public:
		PlayerScript();
		~PlayerScript();

		void Initialize() override;
		void Update() override;
		void LateUpdate() override;
		void Render(HDC hdc) override;

	private:
		GameObject* mCamera;
	};
}
