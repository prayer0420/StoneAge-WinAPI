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
#include "prAnimator.h"

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
		Animator* playerAnimator = player->AddComponent<Animator>();

		graphics::Texture* RedAttackHatchatTex = Resources::Find<graphics::Texture>(L"RedAttackHatchat");
		graphics::Texture* RedDeadHatchatTex = Resources::Find<graphics::Texture>(L"RedDeadHatchat");
		graphics::Texture* RedDefenseHatchatTex = Resources::Find<graphics::Texture>(L"RedDefenseHatchat");
		graphics::Texture* RedHurtHatchatTex = Resources::Find<graphics::Texture>(L"RedHurtHatchat");
		graphics::Texture* RedRunHatchatTex = Resources::Find<graphics::Texture>(L"RedRunHatchat");
		graphics::Texture* RedStandHatchatTex = Resources::Find<graphics::Texture>(L"RedStandHatchat");

		//애니메이션 만들기
		playerAnimator->CreateAnimation(L"RedAttackHatchat", RedAttackHatchatTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 12, 0.2f);

		playerAnimator->CreateAnimation(L"RedDeadHatchat", RedDeadHatchatTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		playerAnimator->CreateAnimation(L"RedDefenseHatchat", RedDefenseHatchatTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);

		playerAnimator->CreateAnimation(L"RedHurtHatchat", RedHurtHatchatTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);

		playerAnimator->CreateAnimation(L"RedRunHatchat", RedRunHatchatTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		playerAnimator->CreateAnimation(L"RedStandHatchat", RedStandHatchatTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);

		playerAnimator->PlayAnimation(L"RedDefenseHatchat");
			
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

