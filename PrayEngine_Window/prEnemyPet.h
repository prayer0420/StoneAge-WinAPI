#pragma once
#include "..\\PrayEngine_SOURCE\\prGameObject.h"

namespace pr
{
	class EnemyPet : public GameObject
	{
	public:
		EnemyPet();
		~EnemyPet() override;

		void Initialize() override;
		void Update() override;
		void LateUpdate() override;
		void Render(HDC hdc) override;
	};
}