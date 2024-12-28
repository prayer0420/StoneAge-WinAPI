#include "prBeginnerDungeonScene.h"
#include "prGameObject.h"
#include "prPlayer.h"
#include "prTransform.h"
#include "prSpriteRenderer.h"

namespace pr
{
	BeginnerDungeonScene::BeginnerDungeonScene()
	{
	}
	BeginnerDungeonScene::~BeginnerDungeonScene()
	{
	}
	void BeginnerDungeonScene::Initialize()
	{
		{
			Transform* tr = mPlayer->AddComponent<Transform>();
			tr->SetPos(1100, 200);

			tr->SetName(L"TR");

			SpriteRenderer* sr = mPlayer->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");
		}

		Scene::Initialize();
	}
	void BeginnerDungeonScene::Update()
	{
		Scene::Update();
	}
	void BeginnerDungeonScene::LateUpdate()
	{
		Scene::LateUpdate();
	}
	void BeginnerDungeonScene::Render(HDC hdc)
	{
		Scene::Render(hdc);
	}
}

