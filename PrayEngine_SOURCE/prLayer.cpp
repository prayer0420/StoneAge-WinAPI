#include "prLayer.h"

namespace pr
{

	Layer::Layer()
		: mNPCs{}
		, mEnemyPets{}
		, mMyPets{}
		, mUIs{}
		,mType()
	{
		mNPCs.reserve(2);
		mEnemyPets.reserve(5);
		mMyPets.reserve(5);
		mUIs.reserve(10);
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