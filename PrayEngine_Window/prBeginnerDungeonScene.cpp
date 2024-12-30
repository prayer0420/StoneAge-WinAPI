#include "prBeginnerDungeonScene.h"
#include "prGameObject.h"
#include "prPlayer.h"
#include "prTransform.h"
#include "prSpriteRenderer.h"
#include "prUI.h"

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
			player = new Player();
			Transform* tr = player->AddComponent<Transform>();
			tr->SetPos({ 1100, 200 });
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
	void BeginnerDungeonScene::OnEnter()
	{
	}
	void BeginnerDungeonScene::OnExit()
	{
		Transform* tr = player->GetComponent<Transform>();
		tr->SetPos({ 1100, 200 });
	}
}

