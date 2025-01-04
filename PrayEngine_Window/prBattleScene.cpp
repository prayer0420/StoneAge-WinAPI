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
		float delY = -150.0f;
		float delX = 120.0f;

		//적 펫
		for (int i = 0; i < 5; i++)
		{	
			//위치 조정
			enemyPets.push_back(object::Instantiate<EnemyPet>(enums::eLayerType::EnemyPet,
			Vector2({ 120 + (delX * i), 650 + (delY * i) })));
			//각 펫 마다 애니메이터 컴퍼넌트 추가
			Animator* animator = enemyPets[i]->AddComponent<Animator>();
		}

		//1번째 적 펫
		Animator* enemyPetAnimator1 = enemyPets[0]->GetComponent<Animator>();

		graphics::Texture* DuriAttackTex = Resources::Find<graphics::Texture>(L"DuriAttack");
		graphics::Texture* DuriDeadTex = Resources::Find<graphics::Texture>(L"DuriDead");
		graphics::Texture* DuriDefenseTex = Resources::Find<graphics::Texture>(L"DuriDefense");
		graphics::Texture* DuriHurtTex = Resources::Find<graphics::Texture>(L"DuriHurt");
		graphics::Texture* DuriRunTex = Resources::Find<graphics::Texture>(L"DuriRun");
		graphics::Texture* DuriStandTex = Resources::Find<graphics::Texture>(L"DuriStand");

		enemyPetAnimator1->CreateAnimation(L"DuriAttack", DuriAttackTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 9, 0.2f);
		enemyPetAnimator1->CreateAnimation(L"DuriDead", DuriDeadTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		enemyPetAnimator1->CreateAnimation(L"DuriDefense", DuriDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 1, 0.2f);
		enemyPetAnimator1->CreateAnimation(L"DuriHurt", DuriHurtTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);
		enemyPetAnimator1->CreateAnimation(L"DuriRun", DuriRunTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		enemyPetAnimator1->CreateAnimation(L"DuriStand", DuriStandTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		enemyPetAnimator1->PlayAnimation(L"DuriAttack");

		//2번째 적 펫
		Animator* enemyPetAnimator2 = enemyPets[1]->GetComponent<Animator>();

		graphics::Texture* GolrosAttackTex = Resources::Find<graphics::Texture>(L"GolrosAttack");
		graphics::Texture* GolrosDeadTex = Resources::Find<graphics::Texture>(L"GolrosDead");
		graphics::Texture* GolrosDefenseTex = Resources::Find<graphics::Texture>(L"GolrosDefense");
		graphics::Texture* GolrosHurtTex = Resources::Find<graphics::Texture>(L"GolrosHurt");
		graphics::Texture* GolrosRunTex = Resources::Find<graphics::Texture>(L"GolrosRun");
		graphics::Texture* GolrosStandTex = Resources::Find<graphics::Texture>(L"GolrosStand");

		enemyPetAnimator2->CreateAnimation(L"GolrosAttack", GolrosAttackTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 22, 0.2f);
		enemyPetAnimator2->CreateAnimation(L"GolrosDead", GolrosDeadTex
			, Vector2(0.0f, 0.0f), Vector2(150.0f, 152.0f), Vector2::Zero, 9, 0.2f);
		enemyPetAnimator2->CreateAnimation(L"GolrosDefense", GolrosDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(150.0f, 152.0f), Vector2::Zero, 1, 0.2f);
		enemyPetAnimator2->CreateAnimation(L"GolrosHurt", GolrosHurtTex
			, Vector2(0.0f, 0.0f), Vector2(150.0f, 152.0f), Vector2::Zero, 1, 0.2f);
		enemyPetAnimator2->CreateAnimation(L"GolrosRun", GolrosDeadTex
			, Vector2(0.0f, 0.0f), Vector2(150.0f, 152.0f), Vector2::Zero, 6, 0.2f);
		enemyPetAnimator2->CreateAnimation(L"GolrosStand", GolrosStandTex
			, Vector2(0.0f, 0.0f), Vector2(150.0f, 152.0f), Vector2::Zero, 66, 0.2f);

		enemyPetAnimator2->PlayAnimation(L"GolrosStand");

		//3번째 적 펫
		Animator* enemyPetAnimator3 = enemyPets[2]->GetComponent<Animator>();

		graphics::Texture* NornorAttackTex = Resources::Find<graphics::Texture>(L"NornorAttack");
		graphics::Texture* NornorDeadTex = Resources::Find<graphics::Texture>(L"NornorDead");
		graphics::Texture* NornorDefenseTex = Resources::Find<graphics::Texture>(L"NornorDefense");
		graphics::Texture* NornorHurtTex = Resources::Find<graphics::Texture>(L"NornorHurt");
		graphics::Texture* NornorRunTex = Resources::Find<graphics::Texture>(L"NornorRun");
		graphics::Texture* NornorStandTex = Resources::Find<graphics::Texture>(L"NornorStand");

		enemyPetAnimator3->CreateAnimation(L"NornorAttack", NornorAttackTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		enemyPetAnimator3->CreateAnimation(L"NornorDead", NornorDeadTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		enemyPetAnimator3->CreateAnimation(L"NornorDefense", NornorDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		enemyPetAnimator3->CreateAnimation(L"NornorHurt", NornorHurtTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		enemyPetAnimator3->CreateAnimation(L"NornorRun", NornorRunTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		enemyPetAnimator3->CreateAnimation(L"NornorStand", NornorStandTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		enemyPetAnimator3->PlayAnimation(L"NornorStand");

		//4번째 적 펫
		Animator* enemyPetAnimator4 = enemyPets[3]->GetComponent<Animator>();

		graphics::Texture* YangiroAttackTex = Resources::Find<graphics::Texture>(L"YangiroAttack");
		graphics::Texture* YangiroDeadTex = Resources::Find<graphics::Texture>(L"YangiroDead");
		graphics::Texture* YangiroDefenseTex = Resources::Find<graphics::Texture>(L"YangiroDefense");
		graphics::Texture* YangiroHurtTex = Resources::Find<graphics::Texture>(L"YangiroHurt");
		graphics::Texture* YangiroRunTex = Resources::Find<graphics::Texture>(L"YangiroRun");
		graphics::Texture* YangiroStandTex = Resources::Find<graphics::Texture>(L"YangiroStand");

		enemyPetAnimator4->CreateAnimation(L"YangiroAttack", YangiroAttackTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 12, 0.2f);
		enemyPetAnimator4->CreateAnimation(L"YangiroDead", YangiroDeadTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		enemyPetAnimator4->CreateAnimation(L"YangiroDefense", YangiroDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		enemyPetAnimator4->CreateAnimation(L"YangiroHurt", YangiroHurtTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		enemyPetAnimator4->CreateAnimation(L"YangiroRun", YangiroRunTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		enemyPetAnimator4->CreateAnimation(L"YangiroStand", YangiroStandTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 26, 0.2f);

		enemyPetAnimator4->PlayAnimation(L"YangiroStand");

		//5번째 적 펫
		Animator* enemyPetAnimator5 = enemyPets[4]->GetComponent<Animator>();

		graphics::Texture* VergaAttackTex = Resources::Find<graphics::Texture>(L"VergaAttack");
		graphics::Texture* VergaDeadTex = Resources::Find<graphics::Texture>(L"VergaDead");
		graphics::Texture* VergaDefenseTex = Resources::Find<graphics::Texture>(L"VergaDefense");
		graphics::Texture* VergaHurtTex = Resources::Find<graphics::Texture>(L"VergaHurt");
		graphics::Texture* VergaRunTex = Resources::Find<graphics::Texture>(L"VergaRun");
		graphics::Texture* VergaStandTex = Resources::Find<graphics::Texture>(L"VergaStand");
		
		enemyPetAnimator5->CreateAnimation(L"VergaAttack", VergaAttackTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 12, 0.2f);
		enemyPetAnimator5->CreateAnimation(L"VergaDead", VergaDeadTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		enemyPetAnimator5->CreateAnimation(L"VergaDefense", VergaDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		enemyPetAnimator5->CreateAnimation(L"VergaHurt", VergaHurtTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		enemyPetAnimator5->CreateAnimation(L"VergaRun", VergaRunTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		enemyPetAnimator5->CreateAnimation(L"VergaStand", VergaStandTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 26, 0.2f);

		enemyPetAnimator5->PlayAnimation(L"VergaStand");


		//플레이어
		GameObject* player = object::Instantiate<Player>(enums::eLayerType::Player, Vector2(1200, 700));
		Animator* playerAnimator = player->AddComponent<Animator>();

		graphics::Texture* RedAttackClubTex = Resources::Find<graphics::Texture>(L"RedAttackClub");
		graphics::Texture* RedDeadClubTex = Resources::Find<graphics::Texture>(L"RedDeadClub");
		graphics::Texture* RedDefenseClubTex = Resources::Find<graphics::Texture>(L"RedDefenseClub");
		graphics::Texture* RedHurtClubTex = Resources::Find<graphics::Texture>(L"RedHurtClub");
		graphics::Texture* RedRunClubTex = Resources::Find<graphics::Texture>(L"RedRunClub");
		graphics::Texture* RedStandClubTex = Resources::Find<graphics::Texture>(L"RedStandClub");

		//애니메이션 만들기
		playerAnimator->CreateAnimation(L"RedAttackClub", RedAttackClubTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 12, 0.2f);

		playerAnimator->CreateAnimation(L"RedDeadClub", RedDeadClubTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		playerAnimator->CreateAnimation(L"RedDefenseClub", RedDefenseClubTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);

		playerAnimator->CreateAnimation(L"RedHurtClub", RedHurtClubTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);

		playerAnimator->CreateAnimation(L"RedRunClub", RedRunClubTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		playerAnimator->CreateAnimation(L"RedStandClub", RedStandClubTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);

		//재생
		playerAnimator->PlayAnimation(L"RedStandClub", true);

		
		//아군 펫
		GameObject* myPet = object::Instantiate<MyPet>(enums::eLayerType::MyPet, Vector2(900, 500));
		Animator* myPetAnimator = myPet->AddComponent<Animator>();

		graphics::Texture* MamonasAttackTex = Resources::Find<graphics::Texture>(L"MamonasAttack");
		graphics::Texture* MamonasDeadTex = Resources::Find<graphics::Texture>(L"MamonasDead");
		graphics::Texture* MamonasDefenseTex = Resources::Find<graphics::Texture>(L"MamonasDefense");
		graphics::Texture* MamonasHurtTex = Resources::Find<graphics::Texture>(L"MamonasHurt");
		graphics::Texture* MamonasRunTex = Resources::Find<graphics::Texture>(L"MamonasRun");
		graphics::Texture* MamonasStandTex = Resources::Find<graphics::Texture>(L"MamonasStand");

		myPetAnimator->CreateAnimation(L"MamonasAttack", MamonasAttackTex, Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f)
			, Vector2::Zero, 10, 0.2f);
		myPetAnimator->CreateAnimation(L"MamonasDead", MamonasDeadTex, Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f)
			, Vector2::Zero, 6, 0.2f);
		myPetAnimator->CreateAnimation(L"MamonasDefense", MamonasDefenseTex, Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f)
			, Vector2::Zero, 1, 0.2f);
		myPetAnimator->CreateAnimation(L"MamonasHurt", MamonasHurtTex, Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f)
			, Vector2::Zero, 2, 0.2f);
		myPetAnimator->CreateAnimation(L"MamonasRun", MamonasRunTex, Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f)
			, Vector2::Zero, 6, 0.2f);
		myPetAnimator->CreateAnimation(L"MamonasStand", MamonasStandTex, Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f)
			, Vector2::Zero, 47, 0.2f);

		myPetAnimator->PlayAnimation(L"MamonasStand");
		
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
