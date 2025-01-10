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
#include "prFakePlayerScript.h"
#include "prLoadAnimation.h"


namespace pr
{
	villageScene::villageScene()
		:mCamera(nullptr)
		, mFakePlayers{}
		, mPlayer(nullptr)
	{
		mFakePlayers.reserve(6);
	}

	villageScene::~villageScene()
	{
	}

	void villageScene::Initialize()
	{
		LoadAnimation* loadAnimation;

		//플레이어
		mPlayer = object::Instantiate<Player>(enums::eLayerType::Player, Vector2(0.0f, 0.0f));

		mPlayer->AddComponent<PlayerScript>();

		auto PlayerIter = loadAnimation->mPlayerAnimators.find(L"RedBasic");
		if (PlayerIter == loadAnimation->mPlayerAnimators.end())
			assert(false);

		Animator* redBasicPlayerAnimator = PlayerIter->second;
		Animator* playerAnimator = mPlayer->AddComponent(redBasicPlayerAnimator);
		playerAnimator->PlayAnimation(L"RedBasic_Idle_F", true);


		//가짜 플레이어 6명
		for (int i = 0; i < 6; i++)
		{
			float randX = rand() % 1600;
			float randY = rand() % 900;
			GameObject* player = object::Instantiate<Player>(enums::eLayerType::Player, Vector2(randX, randY));
			player->AddComponent<FakePlayerScript>();
			//player->AddComponent<Animator>();
			mFakePlayers.push_back(player);
		}

		//가짜 플레이어 1번
		auto iter = loadAnimation->mPlayerAnimators.find(L"RedClub");
		if (iter == loadAnimation->mPlayerAnimators.end())
			assert(false);

		Animator* redBasicAnimator = iter->second;
		Animator* fakePlayer1 = mFakePlayers[0]->AddComponent(redBasicAnimator);
		fakePlayer1->PlayAnimation(L"RedClub_Idle_F");

		//가짜 플레이어 2번
		iter = loadAnimation->mPlayerAnimators.find(L"RedClub");
		if (iter == loadAnimation->mPlayerAnimators.end())
			assert(false);

		Animator* redClubAnimator = iter->second;
		Animator* fakePlayer2 = mFakePlayers[1]->AddComponent(redClubAnimator);
		fakePlayer2->PlayAnimation(L"RedClub_Idle_F");

		//가짜 플레이어 3번
		iter = loadAnimation->mPlayerAnimators.find(L"RedClub");
		if (iter == loadAnimation->mPlayerAnimators.end())
			assert(false);

		Animator* redHatchatAnimator = iter->second;
		Animator* fakePlayer3 = mFakePlayers[2]->AddComponent(redHatchatAnimator);
		fakePlayer3->PlayAnimation(L"RedClub_Idle_F");

		//가짜 플레이어 4번
		iter = loadAnimation->mPlayerAnimators.find(L"BlueBasic");
		if (iter == loadAnimation->mPlayerAnimators.end())
			assert(false);

		Animator* blueBasicAnimator = iter->second;
		Animator* fakePlayer4 = mFakePlayers[3]->AddComponent(blueBasicAnimator);
		fakePlayer4->PlayAnimation(L"BlueBasic_Idle_F");

		//가짜 플레이어 5번
		iter = loadAnimation->mPlayerAnimators.find(L"BlueClub");
		if (iter == loadAnimation->mPlayerAnimators.end())
			assert(false);

		Animator* blueClubAnimator = iter->second;
		Animator* fakePlayer5 = mFakePlayers[4]->AddComponent(blueClubAnimator);
		fakePlayer5->PlayAnimation(L"BlueClub_Idle_F");

		//가짜 플레이어 6번
		iter = loadAnimation->mPlayerAnimators.find(L"BlueHatchat");
		if (iter == loadAnimation->mPlayerAnimators.end())
			assert(false);

		Animator* blueHatchatAnimator = iter->second;
		Animator* fakePlayer6 = mFakePlayers[5]->AddComponent(blueHatchatAnimator);
		fakePlayer6->PlayAnimation(L"BlueHatchat_Idle_F");


		//카메라
		GameObject* camera = object::Instantiate<GameObject>(enums::eLayerType::None);
		Camera* cameraComp = camera->AddComponent<Camera>();
		renderer::mainCamera = cameraComp;
		mCamera = cameraComp;

		cameraComp->SetTarget(mPlayer);

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