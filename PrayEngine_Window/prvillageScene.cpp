#include "prvillageScene.h"
#include "prGameObject.h"
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
	villageScene::villageScene()
		:mCamera(nullptr)
	{
	}

	villageScene::~villageScene()
	{
	}

	void villageScene::Initialize()
	{
		//플레이어
		GameObject* player = object::Instantiate<Player>(enums::eLayerType::Player, Vector2(800, 200));
		player->AddComponent<PlayerScript>();
		Animator* playerAnimator = player->AddComponent<Animator>();

		graphics::Texture* BlueAttackHatchatTex = Resources::Find<graphics::Texture>(L"BlueAttackHatchat");
		graphics::Texture* BlueDeadHatchatTex = Resources::Find<graphics::Texture>(L"BlueDeadHatchat");
		graphics::Texture* BlueDefenseHatchatTex = Resources::Find<graphics::Texture>(L"BlueDefenseHatchat");
		graphics::Texture* BlueHurtHatchatTex = Resources::Find<graphics::Texture>(L"BlueHurtHatchat");
		graphics::Texture* BlueRunHatchatTex = Resources::Find<graphics::Texture>(L"BlueRunHatchat");
		graphics::Texture* BlueStandHatchatTex = Resources::Find<graphics::Texture>(L"BlueStandHatchat");

		playerAnimator->CreateAnimation(L"BlueAttackHatchat", BlueAttackHatchatTex
			, Vector2(0.0f, 0.0f), Vector2(348.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDeadHatchat", BlueDeadHatchatTex
			, Vector2(0.0f, 0.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDefenseHatchat", BlueDefenseHatchatTex
			, Vector2(0.0f, 0.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueHurtHatchat", BlueHurtHatchatTex
			, Vector2(0.0f, 0.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueRunHatchat", BlueRunHatchatTex
			, Vector2(0.0f, 0.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueStandHatchat", BlueStandHatchatTex
			, Vector2(0.0f, 0.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 4, 0.2f);
		
		playerAnimator->PlayAnimation(L"BlueRunHatchat");
		

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

	void villageScene::OnEnter()
	{
		renderer::mainCamera = mCamera;
	}

	void villageScene::OnExit()
	{
		renderer::mainCamera = nullptr;
	}
}

