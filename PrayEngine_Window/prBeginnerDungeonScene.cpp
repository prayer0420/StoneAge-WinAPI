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
		:mCamera(nullptr)
	{
	}

	BeginnerDungeonScene::~BeginnerDungeonScene()
	{
	}
	void BeginnerDungeonScene::Initialize()
	{
		//플레이어
		GameObject* player = object::Instantiate<Player>(enums::eLayerType::Player, Vector2(1100, 200));
		player->AddComponent<PlayerScript>();
		SpriteRenderer* playerSr = player->AddComponent<SpriteRenderer>();
		playerSr->SetSize(Vector2::One);
		playerSr->SetName(L"SR");

		//카메라
		GameObject* camera = object::Instantiate<GameObject>(enums::eLayerType::None);
		Camera* cameraComp = camera->AddComponent<Camera>();
		renderer::mainCamera = cameraComp;
		mCamera = cameraComp;

		cameraComp->SetTarget(player);			

		//배경
		UI* bg = object::Instantiate<UI>(enums::eLayerType::BackGround, Vector2(0, 0));

		SpriteRenderer* bgSr = bg->AddComponent<SpriteRenderer>();
		bgSr->SetSize(Vector2::One);
		bgSr->SetName(L"SR");

		graphics::Texture* bgTex = Resources::Find<graphics::Texture>(L"Tile");
		bgSr->SetTexture(bgTex);

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
		renderer::mainCamera = mCamera;

	}
	void BeginnerDungeonScene::OnExit()
	{
		renderer::mainCamera = nullptr;
	}
}

