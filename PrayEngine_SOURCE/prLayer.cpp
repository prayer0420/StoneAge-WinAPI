#include "prLayer.h"
#include "prScene.h"
#include "prSceneManager.h"
#include "prPlayer.h"
#include "prMyPET.h"
#include "prNPC.h"
#include "..\\PrayEngine_Window\\prUI.h"
#include "..\\PrayEngine_Window\\prEnemyPet.h"


namespace pr
{

	Layer::Layer()
		: mNPCs{}
		, mEnemyPets{}
		, mMyPets{}
		, mUIs{}
		, mType()
		, mPlayers{}
		, mGameObjects{}
	{
		mNPCs.reserve(2);
		mEnemyPets.reserve(5);
		mMyPets.reserve(5);
		mUIs.reserve(10);
		mPlayers.reserve(5);
		mGameObjects.reserve(5);
	}
	Layer:: ~Layer()
	{

	}

	void Layer::Initialize()
	{
			
	}

	void Layer::Update()
	{
		for (GameObject* player : mPlayers)
		{
			if (player == nullptr)
				continue;
			player->Update();
		}

		for (GameObject* npc : mNPCs)
		{
			if (npc == nullptr)
				continue;
			npc->Update();
		}

		for (GameObject* enemyPet : mEnemyPets)
		{
			if (enemyPet == nullptr)
				continue;
			enemyPet->Update();
		}

		for (GameObject* myPet : mMyPets)
		{
			if (myPet == nullptr)
				continue;
			myPet->Update();
		}

		for (GameObject* UI : mUIs)
		{
			if (UI == nullptr)
				continue;
			UI->Update();
		}

		for (GameObject* go : mGameObjects)
		{
			if (go == nullptr)
				continue;
			go->Update();
		}
	}
	void Layer::LateUpdate()
	{
		for (GameObject* npc : mNPCs)
		{
			if (npc == nullptr)
				continue;
			npc->LateUpdate();
		}

		for (GameObject* enemyPet : mEnemyPets)
		{
			if (enemyPet == nullptr)
				continue;
			enemyPet->LateUpdate();
		}

		for (GameObject* myPet : mMyPets)
		{
			if (myPet == nullptr)
				continue;
			myPet->LateUpdate();
		}

		for (GameObject* UI : mUIs)
		{
			if (UI == nullptr)
				continue;
			UI->LateUpdate();
		}

		for (GameObject* player : mPlayers)
		{
			if (player == nullptr)
				continue;
			player->LateUpdate();
		}

		for (GameObject* go : mGameObjects)
		{
			if (go == nullptr)
				continue;
			go->LateUpdate();
		}
	}

	void Layer::Render(HDC hdc)
	{
		for (GameObject* UI : mUIs)
		{
			if (UI == nullptr)
				continue;
			UI->Render(hdc);
		}

		for (GameObject* npc : mNPCs)
		{
			if (npc == nullptr)
				continue;
			npc->Render(hdc);
		}

		for (GameObject* enemyPet : mEnemyPets)
		{
			if (enemyPet == nullptr)
				continue;
			enemyPet->Render(hdc);
		}

		for (GameObject* myPet : mMyPets)
		{
			if (myPet == nullptr)
				continue;
			myPet->Render(hdc);
		}

		for (GameObject* player : mPlayers)
		{
			if (player == nullptr)
				continue;
			player->Render(hdc);
		}

		for (GameObject* go : mGameObjects)
		{
			if (go == nullptr)
				continue;
			go->Render(hdc);
		}
	}

	void Layer::AddGameObject(GameObject* gameObject, enums::eLayerType type)
	{
		Scene* activeScene = SceneManager::GetActiveScene();
		Layer* layer = activeScene->GetLayer(type);

		if (dynamic_cast<Player*>(gameObject))
		{
			Player* player = dynamic_cast<Player*>(gameObject);
			layer->AddPlayer(gameObject);
		}

		else if (dynamic_cast<MyPet*>(gameObject))
		{
			MyPet* pet = (dynamic_cast<MyPet*>(gameObject));
			layer->AddMyPet(gameObject);
		}
		else if (dynamic_cast<EnemyPet*>(gameObject))
		{
			MyPet* pet = (dynamic_cast<MyPet*>(gameObject));
			layer->AddEnemyPet(gameObject);
		}
		else if (dynamic_cast<NPC*>(gameObject))
		{
			NPC* npc = (dynamic_cast<NPC*>(gameObject));
			layer->AddNPC(gameObject);
		}
		else if (dynamic_cast<UI*>(gameObject))
		{
			UI* ui = (dynamic_cast<UI*>(gameObject));
			layer->AddUI(gameObject);
		}
		else if (dynamic_cast<GameObject*>(gameObject))
		{
			GameObject* gameobject = (dynamic_cast<GameObject*>(gameObject));
			layer->AddGameObject(gameobject);
		}
	}

	void Layer::AddGameObject(GameObject* gameObject)
	{
		mGameObjects.push_back(gameObject);
	}

	void Layer::AddNPC(GameObject* gameObject)
	{
		mNPCs.push_back(gameObject);
	}

	void Layer::AddEnemyPet(GameObject* gameObject)
	{
		mEnemyPets.push_back(gameObject);
	}

	void Layer::AddMyPet(GameObject* gameObject)
	{
		mMyPets.push_back(gameObject);
	}
	void Layer::AddUI(GameObject* gameObject)
	{
		mUIs.push_back(gameObject);
	}

	void Layer::AddPlayer(GameObject* gameObject)
	{
		mPlayers.push_back(gameObject);
	}

}