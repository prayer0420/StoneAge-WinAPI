#pragma once
#include "prEntity.h"
#include "CommonInclude.h"
#include "prGameObject.h"

namespace pr
{
	class Layer : public Entity
	{
	public:

		Layer();
		virtual ~Layer();

		virtual void Initialize();
		virtual void Update();
		virtual void LateUpdate();
		virtual void Render(HDC hdc);


		void AddNPC(GameObject* gameObject);
		void AddEnemyPet(GameObject* gameObject);
		void AddMyPet(GameObject* gameObject);
		void AddUI(GameObject* gameObject);
		void AddPlayer(GameObject* gameObject);


	public:


	private:
		eLayerType mType;

		std::vector<GameObject*> mNPCs;
		std::vector<GameObject*> mEnemyPets;
		std::vector<GameObject*> mMyPets;
		std::vector<GameObject*> mUIs;
		std::vector<GameObject*> mPlayers;

	};
}

