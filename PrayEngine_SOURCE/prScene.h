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

		void AddNPC(GameObject* gameObject, eLayerType type);
		void AddEnemyPet(GameObject* gameObject, eLayerType type);
		void AddMyPet(GameObject* gameObject, eLayerType type);
		void AddUI(GameObject* gameObject, eLayerType type);
		void AddPlayer(GameObject* gameObject, eLayerType type);

	private:
		void CreateLayers();

	private:
		std::vector<Layer*> mLayers;
	};
}
