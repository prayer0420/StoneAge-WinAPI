#pragma once
#include "prComponent.h"
#include "prGameObject.h"
#include "prLayer.h"
#include "prScene.h"
#include "prSceneManager.h"

namespace pr::object
{
	template<typename T>
	static T* Instantiate(pr::enums::eLayerType type)
	{
		T* gameobject = new T();
		Scene* activeScene = SceneManager::GetActiveScene();
		Layer* layer = activeScene->GetLayer(type);

		layer->AddGameObject(gameobject, type);
		return gameobject;
	}

	template<typename T>
	static T* Instantiate(pr::enums::eLayerType type, math::Vector2 position)
	{
		T* gameobject = new T();
		Scene* activeScene = SceneManager::GetActiveScene();
		Layer* layer = activeScene->GetLayer(type);

		layer->AddGameObject(gameobject, type);
		Transform* tr = gameobject->GetComponent<Transform>();
		tr->SetPosition(position);
		tr->SetName(L"TR");

		return gameobject;
	}

}