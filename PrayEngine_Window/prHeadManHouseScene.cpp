#include "prHeadManHouseScene.h"
#include "prGameObject.h"
#include "prNPC.h"
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
	HeadManHouseScene::HeadManHouseScene()
		:mCamera(nullptr)
	{
	}
	HeadManHouseScene::~HeadManHouseScene()
	{
	}

	void HeadManHouseScene::Initialize()
	{
		GameObject* player = object::Instantiate<Player>(enums::eLayerType::Player, Vector2(800, 200));
		SpriteRenderer* playerSr = player->AddComponent<SpriteRenderer>();
		playerSr->SetName(L"SR");
		player->AddComponent<PlayerScript>();

		//카메라
		GameObject* camera = object::Instantiate<GameObject>(enums::eLayerType::None);
		Camera* cameraComp = camera->AddComponent<Camera>();
		renderer::mainCamera = cameraComp;
		mCamera = cameraComp;

		cameraComp->SetTarget(player);			

		GameObject* npc = object::Instantiate<NPC>(enums::eLayerType::Npc, Vector2(800, 50));
		SpriteRenderer* npcSr = npc->AddComponent<SpriteRenderer>();
		npcSr->SetName(L"SR");

		//배경
		GameObject* bg = object::Instantiate<UI>(enums::eLayerType::BackGround, Vector2(0, 0));
		SpriteRenderer* bgSr = bg->AddComponent<SpriteRenderer>();
		bgSr->SetName(L"SR");
		graphics::Texture* bgTex = Resources::Find<graphics::Texture>(L"Tile");
		bgSr->SetTexture(bgTex);

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

	void HeadManHouseScene::OnEnter()
	{
		renderer::mainCamera = mCamera;
	}

	void HeadManHouseScene::OnExit()
	{
		renderer::mainCamera = nullptr;
	}
}