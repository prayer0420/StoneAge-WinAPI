#include "prBeginnerDungeonScene.h"
#include "prGameObject.h"
#include "prPlayer.h"
#include "prTransform.h"
#include "prSpriteRenderer.h"
#include "prUI.h"
#include "prObject.h"
#include "prTexture.h"
#include "prResources.h"
#include "prPlayerScript.h"
#include "prCamera.h"
#include "prRenderer.h"

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
		//플레이어
			GameObject* player = object::Instantiate<Player>(enums::eLayerType::Player, Vector2(1100,200));
			SpriteRenderer* sr = player->AddComponent<SpriteRenderer>();
			sr->SetSize(Vector2::One);

			player->AddComponent<PlayerScript>();

			sr->SetName(L"SR");

		//카메라
			GameObject* camera = object::Instantiate<GameObject>(enums::eLayerType::None, Vector2(800, 450));
			Camera* cameraComp = camera->AddComponent<Camera>();
			renderer::mainCamera = cameraComp;
			cameraComp->SetTarget(player);			//카메라 타겟지정

		//배경
			UI* bg = object::Instantiate<UI>(enums::eLayerType::BackGround, Vector2(0, 0));

			SpriteRenderer* BGsr = bg->AddComponent<SpriteRenderer>();
			BGsr->SetSize(Vector2::One);
			BGsr->SetName(L"SR");

			graphics::Texture* bgTex = Resources::Find<graphics::Texture>(L"Tile");
			BGsr->SetTexture(bgTex);

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
		//Transform* tr = player->GetComponent<Transform>();
		//tr->SetPosition({ 1100, 200 });
	}
}

