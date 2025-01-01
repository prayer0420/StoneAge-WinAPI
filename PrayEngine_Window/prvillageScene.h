#pragma once
#include "..\\PrayEngine_SOURCE\\prScene.h"

namespace pr
{
	class villageScene : public Scene
	{
	public:
		villageScene();
		~villageScene();

		void Initialize() override;
		void Update() override;
		void LateUpdate() override;
		void Render(HDC hdc) override;
		void OnEnter() override;
		void OnExit() override;
	private:
		class Player* mplayer;

	};
}