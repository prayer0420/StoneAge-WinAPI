#pragma once
#include "..\\PrayEngine_SOURCE\\prScene.h"

namespace pr
{
	class FightScene : public Scene
	{
	public:
		FightScene();
		~FightScene();

		void Initialize() override;
		void Update() override;
		void LateUpdate() override;
		void Render(HDC hdc) override;
		void OnEnter() override;
		void OnExit() override;
	private:
	};
}