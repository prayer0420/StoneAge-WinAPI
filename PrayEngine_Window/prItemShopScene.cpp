#include "prItemShopScene.h"
#include "prGameObject.h"
#include "prNPC.h"
#include "prTransform.h"
#include "prSpriteRenderer.h"
#include "prUI.h"
#include "prPlayer.h"
#include "prObject.h"
#include "prTexture.h"
#include "prResources.h"
#include "prPlayerScript.h"
#include "prCamera.h"
#include "prRenderer.h"
#include "prAnimator.h"


namespace pr
{
	ItemShopScene::ItemShopScene()
		:mCamera(nullptr)
	{
	}
	ItemShopScene::~ItemShopScene()
	{
	}
	void ItemShopScene::Initialize()
	{
		//NPC
		for (int i = 0; i < 2; i++)
		{
			GameObject* npc = object::Instantiate<NPC>(enums::eLayerType::Npc,
				Vector2({ 800 + (i * 200), 50 + (i * 200) }));
			SpriteRenderer* sr = npc->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");
		}

		//플레이어
		GameObject* player = object::Instantiate<Player>(enums::eLayerType::Player, Vector2(200, 500));
		player->AddComponent<PlayerScript>();
		Animator* playerAnimator = player->AddComponent<Animator>();

		graphics::Texture* RedAttackBasicTex = Resources::Find<graphics::Texture>(L"RedAttackBasic");
		graphics::Texture* RedDeadBasicTex = Resources::Find<graphics::Texture>(L"RedDeadBasic");
		graphics::Texture* RedDefenseBasicTex = Resources::Find<graphics::Texture>(L"RedDefenseBasic");
		graphics::Texture* RedHurtBasicTex = Resources::Find<graphics::Texture>(L"RedHurtBasic");
		graphics::Texture* RedRunBasicTex = Resources::Find<graphics::Texture>(L"RedRunBasic");
		graphics::Texture* RedStandBasicTex = Resources::Find<graphics::Texture>(L"RedStandBasic");

		//애니메이션 만들기
		playerAnimator->CreateAnimation(L"RedAttackBasic", RedAttackBasicTex
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 12, 0.2f);

		playerAnimator->CreateAnimation(L"RedDeadBasic", RedDeadBasicTex
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 6, 0.2f);

		playerAnimator->CreateAnimation(L"RedDefenseBasic", RedDefenseBasicTex
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 2, 0.2f);

		playerAnimator->CreateAnimation(L"RedHurtBasic", RedHurtBasicTex
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 2, 0.2f);

		playerAnimator->CreateAnimation(L"RedRunBasic", RedRunBasicTex
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 6, 0.2f);

		playerAnimator->CreateAnimation(L"RedStandBasic", RedStandBasicTex
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 4, 0.2f);

		playerAnimator->PlayAnimation(L"RedRunBasic");

		//카메라
		GameObject* camera = object::Instantiate<GameObject>(enums::eLayerType::None);
		Camera* cameraComp = camera->AddComponent<Camera>();
		renderer::mainCamera = cameraComp;
		mCamera = cameraComp;
		cameraComp->SetTarget(player);			

		//배경
		GameObject* bg = object::Instantiate<UI>(enums::eLayerType::BackGround, Vector2(0, 0));
		SpriteRenderer* bgSr = bg->AddComponent<SpriteRenderer>();
		bgSr->SetName(L"SR");
		graphics::Texture* bgTex = Resources::Find<graphics::Texture>(L"Tile");
		bgSr->SetTexture(bgTex);

		Scene::Initialize();
	}

	void ItemShopScene::Update()
	{
		Scene::Update();
	}

	void ItemShopScene::LateUpdate()
	{
		Scene::LateUpdate();
	}

	void ItemShopScene::Render(HDC hdc)
	{
		Scene::Render(hdc);
	}

	void ItemShopScene::OnEnter()
	{
		renderer::mainCamera = mCamera;
	}

	void ItemShopScene::OnExit()
	{
		renderer::mainCamera = nullptr;
	}
}