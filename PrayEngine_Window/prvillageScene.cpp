#include "prvillageScene.h"
#include "prGameObject.h"
#include "prTransform.h"
#include "prSpriteRenderer.h"
#include "prUI.h"
#include "prPlayer.h"

namespace pr
{
	villageScene::villageScene()
	{
	}
	villageScene::~villageScene()
	{
	}
	void villageScene::Initialize()
	{
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
	void villageScene::Update()
	{
		Scene::Update();
	}
	void villageScene::LateUpdate()
	{
		Scene::LateUpdate();
	}
	void villageScene::Render(HDC hdc)
	{
		Scene::Render(hdc);
	}
}

