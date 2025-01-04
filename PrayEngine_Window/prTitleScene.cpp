#include "prTitleScene.h"
#include "prGameObject.h"
#include "prPlayer.h"
#include "prTransform.h"
#include "prSpriteRenderer.h"
#include "prUI.h"
#include "prObject.h"
#include "prTexture.h"
#include "prResources.h"
#include "prCamera.h"
#include "prRenderer.h"
#include "prPlayerScript.h"
#include "prAnimator.h"

namespace pr
{
	TitleScene::TitleScene()
		:mCamera(nullptr)
	{
	}

	TitleScene::~TitleScene()
	{
	}

	void TitleScene::Initialize()
	{

		//플레이어
		GameObject* player = object::Instantiate<Player>(enums::eLayerType::Player, Vector2(0.0f, 0.0f));
		//SpriteRenderer* playerSr = player->AddComponent<SpriteRenderer>();
		//playerSr->SetName(L"SR");
		player->AddComponent<PlayerScript>();
		
		
		graphics::Texture* characterTex1 = Resources::Find<graphics::Texture>(L"BlueAngryBasic");
		graphics::Texture* characterTex2 = Resources::Find<graphics::Texture>(L"BlueAttackBasic");
		graphics::Texture* characterTex3 = Resources::Find<graphics::Texture>(L"BlueCryBasic");
		graphics::Texture* characterTex4 = Resources::Find<graphics::Texture>(L"BlueDeadBasic");
		graphics::Texture* characterTex5 = Resources::Find<graphics::Texture>(L"BlueDefenseBasic");
		graphics::Texture* characterTex6 = Resources::Find<graphics::Texture>(L"BlueHappyBasic");
		graphics::Texture* characterTex7 = Resources::Find<graphics::Texture>(L"BlueHelloBasic");
		graphics::Texture* characterTex8 = Resources::Find<graphics::Texture>(L"BlueHurtBasic");
		graphics::Texture* characterTex9 = Resources::Find<graphics::Texture>(L"BlueRunBasic");
		graphics::Texture* characterTex10 = Resources::Find<graphics::Texture>(L"BlueSeatBasic");
		graphics::Texture* characterTex11 = Resources::Find<graphics::Texture>(L"BlueStandBasic");

		Animator* animator =  player->AddComponent<Animator>();

		//애니메이션 만들기
		animator->CreateAnimation(L"BlueAngryBasic", characterTex1
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		animator->CreateAnimation(L"BlueAttackBasic", characterTex2
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		animator->CreateAnimation(L"BlueCryBasic", characterTex3
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		animator->CreateAnimation(L"BlueDeadBasic", characterTex4
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		animator->CreateAnimation(L"BlueDefenseBasic", characterTex5
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 2, 0.2f);

		animator->CreateAnimation(L"BlueHappyBasic", characterTex6
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 12, 0.2f);

		animator->CreateAnimation(L"BlueHelloBasic", characterTex7
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 2, 0.2f);

		animator->CreateAnimation(L"BlueHurtBasic", characterTex8
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 2, 0.2f);

		animator->CreateAnimation(L"BlueRunBasic", characterTex9
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		animator->CreateAnimation(L"BlueSeatBasic", characterTex10
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 2, 0.2f);

		animator->CreateAnimation(L"BlueStandBasic", characterTex11
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 4, 0.2f);
		
		//재생
		animator->PlayAnimation(L"BlueHelloBasic", true);


		//카메라
		GameObject* camera = object::Instantiate<GameObject>(enums::eLayerType::None, Vector2::Zero);
		Camera* cameraComp = camera->AddComponent<Camera>();
		renderer::mainCamera = cameraComp;
		mCamera = cameraComp;

		cameraComp->SetTarget(player);


		//배경
		GameObject* bg = object::Instantiate<UI>(enums::eLayerType::BackGround, Vector2(0, 0));

		SpriteRenderer* bgSr = bg->AddComponent<SpriteRenderer>();
		bgSr->SetName(L"SR");

		graphics::Texture* bgTex = Resources::Find<graphics::Texture>(L"Main");
		bgSr->SetTexture(bgTex);

		Scene::Initialize();
	}

	void TitleScene::Update()
	{
		Scene::Update();
	}
	void TitleScene::LateUpdate()
	{
		Scene::LateUpdate();
	}
	void TitleScene::Render(HDC hdc)
	{
		Scene::Render(hdc);
	}

	void TitleScene::OnEnter()
	{
		renderer::mainCamera = mCamera;
	}

	void TitleScene::OnExit()
	{
		renderer::mainCamera = nullptr;
	}
}