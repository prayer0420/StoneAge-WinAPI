#pragma once
#include "prEntity.h"
#include "prGameObject.h"

namespace pr
{
	class Scene : public Entity
	{
	public:
		Scene();
		virtual ~Scene();

		virtual void Initialize();
		virtual void Update();
		virtual void LateUpdate();
		virtual void Render(HDC hdc);
		virtual void RenderName(HDC hdc);

		void AddNPC(GameObject* gameObject);
		void AddEnemyPet(GameObject* gameObject);
		void AddMyPet(GameObject* gameObject);
		void AddUI(GameObject* gameObject);
	
	public:
		static GameObject* mPlayer;

	protected:
		//std::vector<GameObject*> mGameObjects;
		std::vector<GameObject*> mNPCs;
		std::vector<GameObject*> mEnemyPets;
		std::vector<GameObject*> mMyPets;
		std::vector<GameObject*> mUIs;

		std::wstring* mSceneName;
	};
}
