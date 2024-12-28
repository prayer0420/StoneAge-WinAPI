#pragma once
#include "..\\PrayEngine_SOURCE\\prGameObject.h"


namespace pr
{
	class PET : public GameObject
	{
	public:
		PET();
		~PET() override;

		void Initialize() override;
		void Update() override;
		void LateUpdate() override;
		void Render(HDC hdc) override;
	};
}


