#pragma once
#include "..\\PrayEngine_SOURCE\\prGameObject.h"

namespace pr
{
	class UI : public GameObject
	{
	public:
		UI();
		~UI() override;

		void Initialize() override;
		void Update() override;
		void LateUpdate() override;
		void Render(HDC hdc) override;
	};
}
