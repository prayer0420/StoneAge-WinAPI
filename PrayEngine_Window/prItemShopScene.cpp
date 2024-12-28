#include "prItemShopScene.h"
#include "prGameObject.h"
#include "prNPC.h"
#include "prTransform.h"
#include "prSpriteRenderer.h"

namespace pr
{
	ItemShopScene::ItemShopScene()
	{
	}
	ItemShopScene::~ItemShopScene()
	{
	}
	void ItemShopScene::Initialize()
	{
		for (int i = 0; i < 2; i++)
		{
			GameObject* npc = new NPC();
			Transform* tr = npc->AddComponent<Transform>();
			tr->SetPos(800 + (i * 200), 50 + (i * 200));

			tr->SetName(L"TR");

			SpriteRenderer* sr
				= npc->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");

			AddNPC(npc);
		}

		{
			Transform* tr = mPlayer->GetComponent<Transform>();
			tr->SetPos(200, 500);
		}

		Scene::Initialize();
	}
	void ItemShopScene::Update()
	{
		Scene::Update();
	}
	void ItemShopScene::LateUpdate()
	{
		Scene::LateUpdate();
	}
	void ItemShopScene::Render(HDC hdc)
	{
		Scene::Render(hdc);
	}
}