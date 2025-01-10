#include "prBattleScene.h"
#include "prGameObject.h"
#include "prMyPet.h"
#include "prPlayer.h"
#include "prTransform.h"
#include "prSpriteRenderer.h"
#include "prUI.h"
#include "prObject.h"
#include "prEnemyPet.h"
#include "prTexture.h"
#include "prResources.h"
#include "prCamera.h"
#include "prRenderer.h"
#include "prAnimator.h"
#include "prPlayerScript.h"
#include "prMonsterScript.h"
#include "prLoadAnimation.h"

namespace pr
{

	BattleScene::BattleScene()
		:mCamera(nullptr)
		, enemyPets{}
		, mPlayerAnimator(nullptr)
		, mEnemyPetAnimators{}
		, mMyPetAnimator(nullptr)
	{
	}
	BattleScene::~BattleScene()
	{
	}
	void BattleScene::Initialize()
	{

		pr::LoadAnimation loadAnimation;

		float delY = -150.0f;
		float delX = 120.0f;

		//적 펫
		for (int i = 0; i < 5; i++)
		{	
			//위치 조정
			enemyPets.push_back(object::Instantiate<EnemyPet>(enums::eLayerType::EnemyPet,
			Vector2({ 120 + (delX * i), 650 + (delY * i) })));
			//각 펫 마다 애니메이터 컴퍼넌트 추가
			//enemyPets[i]->AddComponent<Animator>();
			enemyPets[i]->AddComponent<MonsterScript>();
		}

		//1번째 적 펫
		auto iter = loadAnimation.mPetAnimators.find(L"Duri");
		if (iter == loadAnimation.mPetAnimators.end())
			assert(false);
		Animator* duriAnimator = iter->second;
		Animator* enemyPetAnimator1 = enemyPets[0]->AddComponent(duriAnimator);
		enemyPetAnimator1->PlayAnimation(L"DuriAttack_LF");


		//2번째 적 펫
		auto iter2 = loadAnimation.mPetAnimators.find(L"SpottedUri");
		if (iter2 == loadAnimation.mPetAnimators.end())
			assert(false);
		Animator* spottedAnimator = iter2->second;
		Animator* enemyPetAnimator2 = enemyPets[1]->AddComponent(spottedAnimator);
		enemyPetAnimator2->PlayAnimation(L"SpottedUriAttack_RF");


		//3번째 적 펫
		auto iter3 = loadAnimation.mPetAnimators.find(L"Golros");
		if (iter3 == loadAnimation.mPetAnimators.end())
			assert(false);
		Animator* ogarosAnimator = iter3->second;
		Animator* enemyPetAnimator3 = enemyPets[2]->AddComponent(ogarosAnimator);
		enemyPetAnimator3->PlayAnimation(L"GolrosAttack_B");


		//4번째 적 펫
		auto iter4 = loadAnimation.mPetAnimators.find(L"Nornor");
		if (iter4 == loadAnimation.mPetAnimators.end())
			assert(false);
		Animator* golrosAnimator = iter4->second;
		Animator* enemyPetAnimator4 = enemyPets[3]->AddComponent(golrosAnimator);
		enemyPetAnimator4->PlayAnimation(L"NornorStand_RB");


		//5번째 적 펫
		auto iter5 = loadAnimation.mPetAnimators.find(L"Veruru");
		if (iter5 == loadAnimation.mPetAnimators.end())
			assert(false);
		Animator* veruruAnimator = iter5->second;
		Animator* enemyPetAnimator5 = enemyPets[4]->AddComponent(veruruAnimator);
		enemyPetAnimator5->PlayAnimation(L"VeruruAttack_LF");


		//플레이어
		GameObject* player = object::Instantiate<Player>(enums::eLayerType::Player, Vector2(1200, 700));
		player->AddComponent<Animator>();
		auto playerIter = loadAnimation.mPlayerAnimators.find(L"RedClub");
		if (playerIter == loadAnimation.mPlayerAnimators.end())
			assert(false);

		Animator* BlueplayerAnimator = playerIter->second;
		mPlayerAnimator = player->AddComponent(BlueplayerAnimator);
		//재생
		mPlayerAnimator->PlayAnimation(L"RedStandClub", true);

		
		//아군 펫
		GameObject* myPet = object::Instantiate<MyPet>(enums::eLayerType::MyPet, Vector2(900, 500));
		auto myPetIter = loadAnimation.mPetAnimators.find(L"Momonas");
		if (myPetIter == loadAnimation.mPetAnimators.end())
			assert(false);

		Animator* mamonasAnimator = myPetIter->second;
		myPet->AddComponent<Animator>();
		mMyPetAnimator = myPet->AddComponent(mamonasAnimator);
		mMyPetAnimator->PlayAnimation(L"MamonasStand");
		

		//배경
		GameObject* bg = object::Instantiate<UI>(enums::eLayerType::BackGround, Vector2(0, 0));
		SpriteRenderer* bgSr = bg->AddComponent<SpriteRenderer>();
		bgSr->SetName(L"SR");
		graphics::Texture* bgTex = Resources::Find<graphics::Texture>(L"BattleMap1");
		bgSr->SetTexture(bgTex);

		//카메라
		GameObject* camera = object::Instantiate<GameObject>(enums::eLayerType::None);
		Camera* cameraComp = camera->AddComponent<Camera>();
		renderer::mainCamera = cameraComp;
		mCamera = cameraComp;

		Scene::Initialize();
	}

	void BattleScene::Update()
	{
		Scene::Update();
	}
	void BattleScene::LateUpdate()
	{
		Scene::LateUpdate();
	}
	void BattleScene::Render(HDC hdc)
	{
		Scene::Render(hdc);
	}

	void BattleScene::OnEnter()
	{
		renderer::mainCamera = mCamera;
	}
	void BattleScene::OnExit()
	{
		renderer::mainCamera = nullptr;
	}
}
