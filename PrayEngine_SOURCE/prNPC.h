#pragma once
#include "..\\PrayEngine_SOURCE\\prGameObject.h"

namespace pr
{
	class NPC : public GameObject
	{
	public:
		NPC();
		~NPC() override;

		void Initialize() override;
		void Update() override;
		void LateUpdate() override;
		void Render(HDC hdc) override;
	};
}
