#include "prBattleScene.h"
#include "prGameObject.h"
#include "prMyPet.h"
#include "prPlayer.h"
#include "prTransform.h"
#include "prSpriteRenderer.h"
#include "prUI.h"
#include "prObject.h"
#include "prEnemyPet.h"
#include "prTexture.h"
#include "prResources.h"
#include "prCamera.h"
#include "prRenderer.h"

namespace pr
{
	BattleScene::BattleScene()
		:mCamera(nullptr)
	{
	}
	BattleScene::~BattleScene()
	{
	}
	void BattleScene::Initialize()
	{
		float delY = -150.0f;
		float delX = 120.0f;

		//적 펫
		for (int i = 0; i < 5; i++)
		{
			GameObject* enemyPet = object::Instantiate<EnemyPet>(enums::eLayerType::EnemyPet,
				Vector2({ 120 + (delX * i), 650 + (delY * i) }));
			SpriteRenderer* sr = enemyPet->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");
			sr->SetSize(Vector2::One);
		}

		//카메라
		GameObject* camera = object::Instantiate<GameObject>(enums::eLayerType::None);
		Camera* cameraComp = camera->AddComponent<Camera>();
		renderer::mainCamera = cameraComp;
		mCamera = cameraComp;

		//플레이어
		GameObject* player = object::Instantiate<Player>(enums::eLayerType::Player, Vector2(1200, 700));
		SpriteRenderer* playerSr = player->AddComponent<SpriteRenderer>();
		playerSr->SetName(L"SR");
		playerSr->SetSize(Vector2::One);

		//아군 펫
		GameObject* myPet = object::Instantiate<MyPet>(enums::eLayerType::MyPet, Vector2(1000, 550));

		SpriteRenderer* petSr = myPet->AddComponent<SpriteRenderer>();
		petSr->SetName(L"SR");

		//배경
		GameObject* bg = object::Instantiate<UI>(enums::eLayerType::BackGround, Vector2(0, 0));

		SpriteRenderer* bgSr = bg->AddComponent<SpriteRenderer>();
		bgSr->SetName(L"SR");
		graphics::Texture* bgTex = Resources::Find<graphics::Texture>(L"BattleMap1");
		bgSr->SetTexture(bgTex);

		Scene::Initialize();
	}
	void BattleScene::Update()
	{
		Scene::Update();
	}
	void BattleScene::LateUpdate()
	{
		Scene::LateUpdate();
	}
	void BattleScene::Render(HDC hdc)
	{
		Scene::Render(hdc);
	}

	void BattleScene::OnEnter()
	{
		renderer::mainCamera = mCamera;
	}
	void BattleScene::OnExit()
	{
		renderer::mainCamera = nullptr;
	}
}
