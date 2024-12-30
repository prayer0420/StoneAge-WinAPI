#include "prFightScene.h"
#include "prGameObject.h"
#include "prPet.h"
#include "prPlayer.h"
#include "prTransform.h"
#include "prSpriteRenderer.h"
#include "prUI.h"

namespace pr
{
	FightScene::FightScene()
	{
	}
	FightScene::~FightScene()
	{
	}
	void FightScene::Initialize()
	{
		float delY = -150.0f;
		float delX = 120.0f;

		//적 펫 위치
		for (int i = 0; i < 5; i++)
		{
			GameObject* EnemyPet = new PET();

			Transform* tr = EnemyPet->AddComponent<Transform>();
			tr->SetPos({ 120 + (delX * i), 650 + (delY * i) });
			tr->SetName(L"TR");

			SpriteRenderer* sr = EnemyPet->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");

			AddEnemyPet(EnemyPet,eLayerType::EnemyPet);
		}
		
		//플레이어 위치
		{
			Player* player = new Player();

			Transform* tr = player->AddComponent<Transform>();
			tr->SetPos({ 1200, 700 });
			tr->SetName(L"TR");

			SpriteRenderer* sr = player->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");

			AddPlayer(player, eLayerType::Player);
		}

		//아군 펫 위치
		{
			GameObject* myPet = new PET();

			Transform* tr = myPet->AddComponent<Transform>();
			tr->SetPos({ 1000, 550 });
			tr->SetName(L"TR");

			SpriteRenderer* sr = myPet->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");

			AddMyPet(myPet, eLayerType::MyPet);
		}

		//배경
		{
			UI* bg = new UI();

			Transform* tr = bg->AddComponent<Transform>();
			tr->SetPos(Vector2(0, 0));
			tr->SetName(L"TR");

			SpriteRenderer* sr = bg->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");
			sr->ImageLoad(L"C:\\Users\\User\\Desktop\\WinApi\\PrayEngine\\Resources\\battleMap1.bmp");

			AddUI(bg, eLayerType::BackGround);
		}

		Scene::Initialize();
	}
	void FightScene::Update()
	{
		Scene::Update();
	}
	void FightScene::LateUpdate()
	{
		Scene::LateUpdate();
	}
	void FightScene::Render(HDC hdc)
	{
		Scene::Render(hdc);
	}
}
