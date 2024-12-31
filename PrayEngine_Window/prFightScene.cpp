#include "prFightScene.h"
#include "prGameObject.h"
#include "prMyPet.h"
#include "prPlayer.h"
#include "prTransform.h"
#include "prSpriteRenderer.h"
#include "prUI.h"
#include "prObject.h"
#include "prEnemyPet.h"


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
			GameObject* enemyPet = object::Instantiate<EnemyPet>(enums::eLayerType::EnemyPet, 
									Vector2({ 120 + (delX * i), 650 + (delY * i) }));

			SpriteRenderer* sr = enemyPet->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");

			AddEnemyPet(enemyPet, enums::eLayerType::EnemyPet);
		}
		
		//플레이어 위치
		{
			GameObject* player = object::Instantiate<Player>(enums::eLayerType::Player,Vector2(1200, 700));

			SpriteRenderer* sr = player->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");

			AddPlayer(player, enums::eLayerType::Player);
		}

		//아군 펫 위치
		{
			GameObject* myPet = object::Instantiate<MyPet>(enums::eLayerType::MyPet, Vector2(1000, 550));

			SpriteRenderer* sr = myPet->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");

			AddMyPet(myPet, enums::eLayerType::MyPet);
		}

		//배경
		{
			GameObject* bg = object::Instantiate<UI>(enums::eLayerType::BackGround, Vector2(0, 0));

			SpriteRenderer* sr = bg->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");
			sr->ImageLoad(L"C:\\Users\\User\\Desktop\\WinApi\\PrayEngine\\Resources\\battleMap1.bmp");

			AddUI(bg, enums::eLayerType::BackGround);
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

	void FightScene::OnEnter()
	{
	}
	void FightScene::OnExit()
	{

	}
}
