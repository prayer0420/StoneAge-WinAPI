#pragma once
#include "..\\PrayEngine_SOURCE\\prScene.h"

namespace pr
{
	class ItemShop : public Scene
	{
	public:
		ItemShop();
		~ItemShop();

		void Initialize() override;
		void Update() override;
		void LateUpdate() override;
		void Render(HDC hdc) override;

	private:
	};
}
