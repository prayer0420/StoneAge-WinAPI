#pragma once
#include "..\\PrayEngine_SOURCE\\prGameObject.h"


namespace pr
{
	class MyPet : public GameObject
	{
	public:
		MyPet();
		~MyPet() override;

		void Initialize() override;
		void Update() override;
		void LateUpdate() override;
		void Render(HDC hdc) override;
	};
}


