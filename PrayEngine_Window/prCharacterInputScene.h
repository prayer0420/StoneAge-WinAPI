#pragma once
#pragma once
#include "..\\PrayEngine_SOURCE\\prScene.h"

namespace pr
{
	class CharacterInputScene : public Scene
	{
	public:
		CharacterInputScene();
		~CharacterInputScene();

		void Initialize() override;
		void Update() override;
		void LateUpdate() override;
		void Render(HDC hdc) override;

		void OnEnter() override;
		void OnExit() override;

	private:
		class Camera* mCamera;
	};
}