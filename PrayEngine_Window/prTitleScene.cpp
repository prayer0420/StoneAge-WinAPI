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
#include "prEnemyPet.h"
#include "prLoadAnimation.h"


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
		pr::LoadAnimation loadAnimation;


		////pet test
		//GameObject* pet = object::Instantiate<EnemyPet>(enums::eLayerType::EnemyPet,Vector2(100.0f,100.0f));
		//auto iter = loadAnimation->mPetAnimators.find(L"Duri");
		//if (iter == loadAnimation->mPetAnimators.end())
		//	assert(false);
		//Animator* DuriAnimator = iter->second;
		//Animator* enemyPetAnimator2 = pet->AddComponent(DuriAnimator);
		//enemyPetAnimator2->PlayAnimation(L"DuriAttackLF");

		//플레이어 test
		GameObject* player = object::Instantiate<Player>(enums::eLayerType::Player, Vector2(500, 500));
		player->AddComponent<PlayerScript>();
		auto playerIter = loadAnimation.mPlayerAnimators.find(L"RedHatchat");
		if (playerIter == loadAnimation.mPlayerAnimators.end())
			assert(false);

		Animator* BlueplayerAnimator = playerIter->second;
		Animator* mPlayerAnimator = player->AddComponent(BlueplayerAnimator);
		//재생
		mPlayerAnimator->PlayAnimation(L"RedHatchat_Idle_F", true);


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