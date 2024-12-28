#include "prHeadManHouseScene.h"
#include "prGameObject.h"
#include "prNPC.h"
#include "prPlayer.h"
#include "prTransform.h"
#include "prSpriteRenderer.h"
namespace pr
{
	HeadManHouseScene::HeadManHouseScene()
	{
	}
	HeadManHouseScene::~HeadManHouseScene()
	{
	}

	void HeadManHouseScene::Initialize()
	{
		{
			GameObject* npc = new NPC();
			Transform* tr
				= npc->AddComponent<Transform>();
			tr->SetPos(800, 50);

			tr->SetName(L"TR");

			SpriteRenderer* sr
				= npc->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");

			AddNPC(npc);
		}

		{
			Transform* tr = mPlayer->GetComponent<Transform>();
			tr->SetPos(800, 200);
		}

		Scene::Initialize();
	}

	void HeadManHouseScene::Update()
	{
		Scene::Update();
	}
	void HeadManHouseScene::LateUpdate()
	{
		Scene::LateUpdate();
	}
	void HeadManHouseScene::Render(HDC hdc)
	{
		Scene::Render(hdc);
	}
}