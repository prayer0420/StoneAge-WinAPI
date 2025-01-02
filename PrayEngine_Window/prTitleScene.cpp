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
		graphics::Texture* characterTex = Resources::Find<graphics::Texture>(L"BlueRunBasic");
		Animator* animator =  player->AddComponent<Animator>();

		//애니메이션 만들기
		animator->CreateAnimation(L"BlueRunBasic", characterTex
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		//재생
		animator->PlayAnimation(L"BlueRunBasic", true);


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