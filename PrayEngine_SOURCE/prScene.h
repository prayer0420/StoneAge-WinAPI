#pragma once
#include "prEntity.h"
#include "prGameObject.h"
#include "prLayer.h"


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
		
		virtual void OnEnter();
		virtual void OnExit();

		//void AddGameObject(GameObject* gameObject, enums::eLayerType type);

		void AddNPC(GameObject* gameObject, enums::eLayerType type);
		void AddEnemyPet(GameObject* gameObject, enums::eLayerType type);
		void AddMyPet(GameObject* gameObject, enums::eLayerType type);
		void AddUI(GameObject* gameObject, enums::eLayerType type);
		void AddPlayer(GameObject* gameObject, enums::eLayerType type);

		Layer* GetLayer(enums::eLayerType type) { return mLayers[(UINT)type]; }

	private:
		void CreateLayers();

	private:
		//std::map<enums::eLayerType, std::vector<GameObject*>> mLayerGameObjects; ??
		std::vector<Layer*> mLayers;
	};
}
