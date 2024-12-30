#include "prHeadManHouseScene.h"
#include "prGameObject.h"
#include "prNPC.h"
#include "prPlayer.h"
#include "prTransform.h"
#include "prSpriteRenderer.h"
#include "prUI.h"

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
			tr->SetPos({ 800, 50 });

			tr->SetName(L"TR");

			SpriteRenderer* sr
				= npc->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");

			AddNPC(npc,eLayerType::Npc);
		}

		{
			Player* player = new Player();
			Transform* tr = player->AddComponent<Transform>();
			tr->SetPos({ 800, 200 });
			tr->SetName(L"TR");

			SpriteRenderer* sr = player->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");

			AddPlayer(player, eLayerType::Player);
		}

		//¹è°æ
		{
			UI* bg = new UI();
			Transform* tr = bg->AddComponent<Transform>();
			tr->SetPos(Vector2(0, 0));

			tr->SetName(L"TR");

			SpriteRenderer* sr = bg->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");
			sr->ImageLoad(L"C:\\Users\\User\\Desktop\\WinApi\\PrayEngine\\Resources\\tile.bmp");

			AddUI(bg,eLayerType::BackGround);
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