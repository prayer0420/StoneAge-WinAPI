#include "prScene.h"

namespace pr
{
	GameObject* Scene::mPlayer = nullptr;

	Scene::Scene()
		: mNPCs{}
		, mEnemyPets{}
		, mMyPets{}
		, mSceneName(nullptr)
	{
		mNPCs.reserve(2);
		mEnemyPets.reserve(5);
		mMyPets.reserve(5);
	}

	Scene::~Scene()
	{

	}

	void Scene::Initialize()
	{
		
	}

	void Scene::Update()
	{
		if(mPlayer)
			mPlayer->Update();

		for (GameObject* npc: mNPCs)
		{
			npc->Update();
		}

		for (GameObject* enemyPet : mEnemyPets)
		{
			enemyPet->Update();
		}

		for (GameObject* myPet : mMyPets)
		{
			myPet->Update();
		}
	}

	void Scene::LateUpdate()
	{
		if (mPlayer)
			mPlayer->LateUpdate();

		for (GameObject* npc : mNPCs)
		{
			npc->LateUpdate();
		}

		for (GameObject* enemyPet : mEnemyPets)
		{
			enemyPet->LateUpdate();
		}

		for (GameObject* myPet : mMyPets)
		{
			myPet->LateUpdate();
		}
	}
	
	void Scene::Render(HDC hdc)
	{
		RenderName(hdc);
		
		if (mPlayer)
			mPlayer->Render(hdc);

		for (GameObject* npc : mNPCs)
		{
			npc->Render(hdc);
		}

		for (GameObject* enemyPet : mEnemyPets)
		{
			enemyPet->Render(hdc);
		}

		for (GameObject* myPet : mMyPets)
		{
			myPet->Render(hdc);
		}
	}

	void Scene::RenderName(HDC hdc)
	{
		const wchar_t* str2 = GetName().c_str();
		TextOut(hdc, 0, 20, str2, wcslen(str2));
	}

	void Scene::AddNPC(GameObject* gameObject)
	{
		mNPCs.push_back(gameObject);
	}

	void Scene::AddEnemyPet(GameObject* gameObject)
	{
		mEnemyPets.push_back(gameObject);
	}

	void Scene::AddMyPet(GameObject* gameObject)
	{
		mMyPets.push_back(gameObject);
	}
}