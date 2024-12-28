#pragma once
#include "..\\PrayEngine_SOURCE\\prGameObject.h"

namespace pr
{
	class Player : public GameObject
	{
	public:
		Player();
		~Player() override;

		void Initialize() override;
		void Update() override;
		void LateUpdate() override;
		void Render(HDC hdc) override;
	};
}
