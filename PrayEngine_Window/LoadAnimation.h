#include "..\\PrayEngine_SOURCE\\prScript.h"
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
	void LoadAnimation()
	{
		Animator* petAnimator = new Animator();

		//DruiType
		
		//duri
		graphics::Texture* DuriAttackTex = Resources::Find<graphics::Texture>(L"DuriAttack");
		graphics::Texture* DuriDeadTex = Resources::Find<graphics::Texture>(L"DuriDead");
		graphics::Texture* DuriDefenseTex = Resources::Find<graphics::Texture>(L"DuriDefense");
		graphics::Texture* DuriHurtTex = Resources::Find<graphics::Texture>(L"DuriHurt");
		graphics::Texture* DuriRunTex = Resources::Find<graphics::Texture>(L"DuriRun");
		graphics::Texture* DuriStandTex = Resources::Find<graphics::Texture>(L"DuriStand");


		petAnimator->CreateAnimation(L"DuriAttack", DuriAttackTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"DuriDead", DuriDeadTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"DuriDefense", DuriDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"DuriHurt", DuriHurtTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);
		petAnimator->CreateAnimation(L"DuriRun", DuriRunTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"DuriStand", DuriStandTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		//spottedUri
		graphics::Texture* SpottedUriAttackTex = Resources::Find<graphics::Texture>(L"SpottedUriAttack");
		graphics::Texture* SpottedUriDeadTex = Resources::Find<graphics::Texture>(L"SpottedUriDead");
		graphics::Texture* SpottedUriDefenseTex = Resources::Find<graphics::Texture>(L"SpottedUriDefense");
		graphics::Texture* SpottedUriHurtTex = Resources::Find<graphics::Texture>(L"SpottedUriHurt");
		graphics::Texture* SpottedUriRunTex = Resources::Find<graphics::Texture>(L"SpottedUriRun");
		graphics::Texture* SpottedUriStandTex = Resources::Find<graphics::Texture>(L"SpottedUriStand");

		petAnimator->CreateAnimation(L"SpottedUriAttack", SpottedUriAttackTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriDead", SpottedUriDeadTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriDefense", SpottedUriDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriHurt", SpottedUriHurtTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriRun", SpottedUriRunTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriStand", SpottedUriStandTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		//uri
		graphics::Texture* UriAttackTex = Resources::Find<graphics::Texture>(L"UriAttack");
		graphics::Texture* UriDeadTex = Resources::Find<graphics::Texture>(L"UriDead");
		graphics::Texture* UriDefenseTex = Resources::Find<graphics::Texture>(L"UriDefense");
		graphics::Texture* UriHurtTex = Resources::Find<graphics::Texture>(L"UriHurt");
		graphics::Texture* UriRunTex = Resources::Find<graphics::Texture>(L"UriRun");
		graphics::Texture* UriStandTex = Resources::Find<graphics::Texture>(L"UriStand");

		petAnimator->CreateAnimation(L"UriAttack", UriAttackTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"UriDead", UriDeadTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"UriDefense", UriDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"UriHurt", UriHurtTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);
		petAnimator->CreateAnimation(L"UriRun", UriRunTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"UriStand", UriStandTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);


		//ogaros Type
		//Ograos
		graphics::Texture* OgarosAttackTex = Resources::Find<graphics::Texture>(L"OgarosAttack");
		graphics::Texture* OgarosDeadTex = Resources::Find<graphics::Texture>(L"OgarosDead");
		graphics::Texture* OgarosDefenseTex = Resources::Find<graphics::Texture>(L"OgarosDefense");
		graphics::Texture* OgarosHurtTex = Resources::Find<graphics::Texture>(L"OgarosHurt");
		graphics::Texture* OgarosRunTex = Resources::Find<graphics::Texture>(L"OgarosRun");
		graphics::Texture* OgarosStandTex = Resources::Find<graphics::Texture>(L"OgarosStand");

		petAnimator->CreateAnimation(L"OgarosAttack", OgarosAttackTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 150.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"OgarosDead", OgarosDeadTex
			, Vector2(0.0f, 0.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"OgarosDefense", OgarosDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"OgarosHurt", OgarosHurtTex
			, Vector2(0.0f, 0.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"OgarosRun", OgarosRunTex
			, Vector2(0.0f, 0.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"OgarosStand", OgarosStandTex
			, Vector2(0.0f, 0.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 66, 0.2f);

		//Mogaros
		graphics::Texture* MogarosAttackTex = Resources::Find<graphics::Texture>(L"MogarosAttack");
		graphics::Texture* MogarosDeadTex = Resources::Find<graphics::Texture>(L"MogarosDead");
		graphics::Texture* MogarosDefenseTex = Resources::Find<graphics::Texture>(L"MogarosDefense");
		graphics::Texture* MogarosHurtTex = Resources::Find<graphics::Texture>(L"MogarosHurt");
		graphics::Texture* MogarosRunTex = Resources::Find<graphics::Texture>(L"MogarosRun");
		graphics::Texture* MogarosStandTex = Resources::Find<graphics::Texture>(L"MogarosStand");

		petAnimator->CreateAnimation(L"MogarosAttack", MogarosAttackTex
			, Vector2(0.0f, 0.0f), Vector2(139.0f, 180.0f), Vector2::Zero, 22, 0.2f);
		petAnimator->CreateAnimation(L"MogarosDead", MogarosDeadTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"MogarosDefense", MogarosDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MogarosHurt", MogarosHurtTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MogarosRun", MogarosRunTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MogarosStand", MogarosStandTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 66, 0.2f);

		//Golros
		graphics::Texture* GolrosAttackTex = Resources::Find<graphics::Texture>(L"GolrosAttack");
		graphics::Texture* GolrosDeadTex = Resources::Find<graphics::Texture>(L"GolrosDead");
		graphics::Texture* GolrosDefenseTex = Resources::Find<graphics::Texture>(L"GolrosDefense");
		graphics::Texture* GolrosHurtTex = Resources::Find<graphics::Texture>(L"GolrosHurt");
		graphics::Texture* GolrosRunTex = Resources::Find<graphics::Texture>(L"GolrosRun");
		graphics::Texture* GolrosStandTex = Resources::Find<graphics::Texture>(L"GolrosStand");

		petAnimator->CreateAnimation(L"GolrosAttack", GolrosAttackTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 22, 0.2f);
		petAnimator->CreateAnimation(L"GolrosDead", GolrosDeadTex
			, Vector2(0.0f, 0.0f), Vector2(150.0f, 152.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"GolrosDefense", GolrosDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(150.0f, 152.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"GolrosHurt", GolrosHurtTex
			, Vector2(0.0f, 0.0f), Vector2(150.0f, 152.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"GolrosRun", GolrosDeadTex
			, Vector2(0.0f, 0.0f), Vector2(150.0f, 152.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"GolrosStand", GolrosStandTex
			, Vector2(0.0f, 0.0f), Vector2(150.0f, 152.0f), Vector2::Zero, 66, 0.2f);


		//Verga Type
		//Gorgor
		graphics::Texture* GorgorAttackTex = Resources::Find<graphics::Texture>(L"GorgorAttack");
		graphics::Texture* GorgorDeadTex = Resources::Find<graphics::Texture>(L"GorgorDead");
		graphics::Texture* GorgorDefenseTex = Resources::Find<graphics::Texture>(L"GorgorDefense");
		graphics::Texture* GorgorHurtTex = Resources::Find<graphics::Texture>(L"GorgorHurt");
		graphics::Texture* GorgorRunTex = Resources::Find<graphics::Texture>(L"GorgorRun");
		graphics::Texture* GorgorStandTex = Resources::Find<graphics::Texture>(L"GorgorStand");

		petAnimator->CreateAnimation(L"GorgorAttack", GorgorAttackTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"GorgorDead", GorgorDeadTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"GorgorDefense", GorgorDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"GorgorHurt", GorgorHurtTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"GorgorRun", GorgorRunTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"GorgorStand", GorgorStandTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		//Nornor
		graphics::Texture* NornorAttackTex = Resources::Find<graphics::Texture>(L"NornorAttack");
		graphics::Texture* NornorDeadTex = Resources::Find<graphics::Texture>(L"NornorDead");
		graphics::Texture* NornorDefenseTex = Resources::Find<graphics::Texture>(L"NornorDefense");
		graphics::Texture* NornorHurtTex = Resources::Find<graphics::Texture>(L"NornorHurt");
		graphics::Texture* NornorRunTex = Resources::Find<graphics::Texture>(L"NornorRun");
		graphics::Texture* NornorStandTex = Resources::Find<graphics::Texture>(L"NornorStand");

		petAnimator->CreateAnimation(L"NornorAttack", NornorAttackTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"NornorDead", NornorDeadTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"NornorDefense", NornorDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"NornorHurt", NornorHurtTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"NornorRun", NornorRunTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"NornorStand", NornorStandTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		//Verga
		graphics::Texture* VergaAttackTex = Resources::Find<graphics::Texture>(L"VergaAttack");
		graphics::Texture* VergaDeadTex = Resources::Find<graphics::Texture>(L"VergaDead");
		graphics::Texture* VergaDefenseTex = Resources::Find<graphics::Texture>(L"VergaDefense");
		graphics::Texture* VergaHurtTex = Resources::Find<graphics::Texture>(L"VergaHurt");
		graphics::Texture* VergaRunTex = Resources::Find<graphics::Texture>(L"VergaRun");
		graphics::Texture* VergaStandTex = Resources::Find<graphics::Texture>(L"VergaStand");

		petAnimator->CreateAnimation(L"VergaAttack", VergaAttackTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"VergaDead", VergaDeadTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"VergaDefense", VergaDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"VergaHurt", VergaHurtTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"VergaRun", VergaRunTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"VergaStand", VergaStandTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		//Veruru
		graphics::Texture* VeruruAttackTex = Resources::Find<graphics::Texture>(L"VeruruAttack");
		graphics::Texture* VeruruDeadTex = Resources::Find<graphics::Texture>(L"VeruruDead");
		graphics::Texture* VeruruDefenseTex = Resources::Find<graphics::Texture>(L"VeruruDefense");
		graphics::Texture* VeruruHurtTex = Resources::Find<graphics::Texture>(L"VeruruHurt");
		graphics::Texture* VeruruRunTex = Resources::Find<graphics::Texture>(L"VeruruRun");
		graphics::Texture* VeruruStandTex = Resources::Find<graphics::Texture>(L"VeruruStand");

		petAnimator->CreateAnimation(L"VeruruAttack", VeruruAttackTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"VeruruDead", VeruruDeadTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"VeruruDefense", VeruruDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"VeruruHurt", VeruruHurtTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"VeruruRun", VeruruRunTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"VeruruStand", VeruruStandTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);


		//Yangiro Type
		//Banboro
		graphics::Texture* BanboroAttackTex = Resources::Find<graphics::Texture>(L"BanboroAttack");
		graphics::Texture* BanboroDeadTex = Resources::Find<graphics::Texture>(L"BanboroDead");
		graphics::Texture* BanboroDefenseTex = Resources::Find<graphics::Texture>(L"BanboroDefense");
		graphics::Texture* BanboroHurtTex = Resources::Find<graphics::Texture>(L"BanboroHurt");
		graphics::Texture* BanboroRunTex = Resources::Find<graphics::Texture>(L"BanboroRun");
		graphics::Texture* BanboroStandTex = Resources::Find<graphics::Texture>(L"BanboroStand");


		petAnimator->CreateAnimation(L"BanboroAttack", BanboroAttackTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 12, 0.2f);
		petAnimator->CreateAnimation(L"BanboroDead", BanboroDeadTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"BanboroDefense", BanboroDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"BanboroHurt", BanboroHurtTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"BanboroRun", BanboroRunTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"BanboroStand", BanboroStandTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 26, 0.2f);

		//Bangiro
		graphics::Texture* BangiroAttackTex = Resources::Find<graphics::Texture>(L"BangiroAttack");
		graphics::Texture* BangiroDeadTex = Resources::Find<graphics::Texture>(L"BangiroDead");
		graphics::Texture* BangiroDefenseTex = Resources::Find<graphics::Texture>(L"BangiroDefense");
		graphics::Texture* BangiroHurtTex = Resources::Find<graphics::Texture>(L"BangiroHurt");
		graphics::Texture* BangiroRunTex = Resources::Find<graphics::Texture>(L"BangiroRun");
		graphics::Texture* BangiroStandTex = Resources::Find<graphics::Texture>(L"BangiroStand");

		petAnimator->CreateAnimation(L"BangiroAttack", BangiroAttackTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"BangiroDead", BangiroDeadTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"BangiroDefense", BangiroDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"BangiroHurt", BangiroHurtTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"BangiroRun", BangiroRunTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"BangiroStand", BangiroStandTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 30, 0.2f);

		//Burdon
		graphics::Texture* BurdonAttackTex = Resources::Find<graphics::Texture>(L"BurdonAttack");
		graphics::Texture* BurdonDeadTex = Resources::Find<graphics::Texture>(L"BurdonDead");
		graphics::Texture* BurdonDefenseTex = Resources::Find<graphics::Texture>(L"BurdonDefense");
		graphics::Texture* BurdonHurtTex = Resources::Find<graphics::Texture>(L"BurdonHurt");
		graphics::Texture* BurdonRunTex = Resources::Find<graphics::Texture>(L"BurdonRun");
		graphics::Texture* BurdonStandTex = Resources::Find<graphics::Texture>(L"BurdonStand");

		petAnimator->CreateAnimation(L"BurdonAttack", BurdonAttackTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"BurdonDead", BurdonDeadTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"BurdonDefense", BurdonDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"BurdonHurt", BurdonHurtTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"BurdonRun", BurdonRunTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"BurdonStand", BurdonStandTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 30, 0.2f);

		//Ribino
		graphics::Texture* RibinoAttackTex = Resources::Find<graphics::Texture>(L"RibinoAttack");
		graphics::Texture* RibinoDeadTex = Resources::Find<graphics::Texture>(L"RibinoDead");
		graphics::Texture* RibinoDefenseTex = Resources::Find<graphics::Texture>(L"RibinoDefense");
		graphics::Texture* RibinoHurtTex = Resources::Find<graphics::Texture>(L"RibinoHurt");
		graphics::Texture* RibinoRunTex = Resources::Find<graphics::Texture>(L"RibinoRun");
		graphics::Texture* RibinoStandTex = Resources::Find<graphics::Texture>(L"RibinoStand");

		petAnimator->CreateAnimation(L"RibinoAttack", RibinoAttackTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"RibinoDead", RibinoDeadTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"RibinoDefense", RibinoDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"RibinoHurt", RibinoHurtTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"RibinoRun", RibinoRunTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"RibinoStand", RibinoStandTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 30, 0.2f);


		//Yangiro
		graphics::Texture* YangiroAttackTex = Resources::Find<graphics::Texture>(L"YangiroAttack");
		graphics::Texture* YangiroDeadTex = Resources::Find<graphics::Texture>(L"YangiroDead");
		graphics::Texture* YangiroDefenseTex = Resources::Find<graphics::Texture>(L"YangiroDefense");
		graphics::Texture* YangiroHurtTex = Resources::Find<graphics::Texture>(L"YangiroHurt");
		graphics::Texture* YangiroRunTex = Resources::Find<graphics::Texture>(L"YangiroRun");
		graphics::Texture* YangiroStandTex = Resources::Find<graphics::Texture>(L"YangiroStand");


		petAnimator->CreateAnimation(L"YangiroAttack", YangiroAttackTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 12, 0.2f);
		petAnimator->CreateAnimation(L"YangiroDead", YangiroDeadTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"YangiroDefense", YangiroDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"YangiroHurt", YangiroHurtTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"YangiroRun", YangiroRunTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"YangiroStand", YangiroStandTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 26, 0.2f);

		//manmor Type
		//Mamonas
		graphics::Texture* MamonasAttackTex = Resources::Find<graphics::Texture>(L"MamonasAttack");
		graphics::Texture* MamonasDeadTex = Resources::Find<graphics::Texture>(L"MamonasDead");
		graphics::Texture* MamonasDefenseTex = Resources::Find<graphics::Texture>(L"MamonasDefense");
		graphics::Texture* MamonasHurtTex = Resources::Find<graphics::Texture>(L"MamonasHurt");
		graphics::Texture* MamonasRunTex = Resources::Find<graphics::Texture>(L"MamonasRun");
		graphics::Texture* MamonasStandTex = Resources::Find<graphics::Texture>(L"MamonasStand");

		petAnimator->CreateAnimation(L"MamonasAttack", MamonasAttackTex, Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f)
			, Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"MamonasDead", MamonasDeadTex, Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f)
			, Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MamonasDefense", MamonasDefenseTex, Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f)
			, Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MamonasHurt", MamonasHurtTex, Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f)
			, Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"MamonasRun", MamonasRunTex, Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f)
			, Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MamonasStand", MamonasStandTex, Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f)
			, Vector2::Zero, 47, 0.2f);

		//Mammo
		graphics::Texture* MammoAttackTex = Resources::Find<graphics::Texture>(L"MammoAttack");
		graphics::Texture* MammoDeadTex = Resources::Find<graphics::Texture>(L"MammoDead");
		graphics::Texture* MammoDefenseTex = Resources::Find<graphics::Texture>(L"MammoDefense");
		graphics::Texture* MammoHurtTex = Resources::Find<graphics::Texture>(L"MammoHurt");
		graphics::Texture* MammoRunTex = Resources::Find<graphics::Texture>(L"MammoRun");
		graphics::Texture* MammoStandTex = Resources::Find<graphics::Texture>(L"MammoStand");

		petAnimator->CreateAnimation(L"MammoAttack", MammoAttackTex, Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f)
			, Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"MammoDead", MammoDeadTex, Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f)
			, Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammoDefense", MammoDefenseTex, Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f)
			, Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MammoHurt", MammoHurtTex, Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f)
			, Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"MammoRun", MammoRunTex, Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f)
			, Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammoStand", MammoStandTex, Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f)
			, Vector2::Zero, 47, 0.2f);

		//Mammon
		graphics::Texture* MammonAttackTex = Resources::Find<graphics::Texture>(L"MammonAttack");
		graphics::Texture* MammonDeadTex = Resources::Find<graphics::Texture>(L"MammonDead");
		graphics::Texture* MammonDefenseTex = Resources::Find<graphics::Texture>(L"MammonDefens");
		graphics::Texture* MammonHurtTex = Resources::Find<graphics::Texture>(L"MammonHurt");
		graphics::Texture* MammonRunTex = Resources::Find<graphics::Texture>(L"MammonRun");
		graphics::Texture* MammonStandTex = Resources::Find<graphics::Texture>(L"MammonStand");

		petAnimator->CreateAnimation(L"MammonAttack", MammonAttackTex, Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f)
			, Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"MammonDead", MammonDeadTex, Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f)
			, Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammonDefens", MammonDefenseTex, Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f)
			, Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MammonHurt", MammonHurtTex, Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f)
			, Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"MammonRun", MammonRunTex, Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f)
			, Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammonStand", MammonStandTex, Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f)
			, Vector2::Zero, 47, 0.2f);


		//플레이어
		Animator* playerAnimator = new Animator();

		//BlueType
		//BlueBasic
		graphics::Texture* BlueAttackBasicTex = Resources::Find<graphics::Texture>(L"BlueAttackBasic");
		graphics::Texture* BlueDeadBasicTex = Resources::Find<graphics::Texture>(L"BlueDeadBasic");
		graphics::Texture* BlueDefenseBasicTex = Resources::Find<graphics::Texture>(L"BlueDefenseBasic");
		graphics::Texture* BlueHurtBasicTex = Resources::Find<graphics::Texture>(L"BlueHurtBasic");
		graphics::Texture* BlueRunBasicTex = Resources::Find<graphics::Texture>(L"BlueRunBasic");
		graphics::Texture* BlueStandBasicTex = Resources::Find<graphics::Texture>(L"BlueStandBasic");

		playerAnimator->CreateAnimation(L"BlueAttackBasic", BlueAttackBasicTex
			, Vector2(0.0f, 0.0f), Vector2(203.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDeadBasic", BlueDeadBasicTex
			, Vector2(0.0f, 0.0f), Vector2(174.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDefenseBasic", BlueDefenseBasicTex
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueHurtBasic", BlueHurtBasicTex
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueRunBasic", BlueRunBasicTex
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueStandBasic", BlueStandBasicTex
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 4, 0.2f);

		//BlueClub
		graphics::Texture* BlueAttackClubTex = Resources::Find<graphics::Texture>(L"BlueAttackClub");
		graphics::Texture* BlueDeadClubTex = Resources::Find<graphics::Texture>(L"BlueDeadClub");
		graphics::Texture* BlueDefenseClubTex = Resources::Find<graphics::Texture>(L"BlueDefenseClub");
		graphics::Texture* BlueHurtClubTex = Resources::Find<graphics::Texture>(L"BlueHurtClub");
		graphics::Texture* BlueRunClubTex = Resources::Find<graphics::Texture>(L"BlueRunClub");
		graphics::Texture* BlueStandClubTex = Resources::Find<graphics::Texture>(L"BlueStandClub");

		playerAnimator->CreateAnimation(L"BlueAttackClub", BlueAttackClubTex
			, Vector2(0.0f, 0.0f), Vector2(348.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDeadClub", BlueDeadClubTex
			, Vector2(0.0f, 0.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDefenseClub", BlueDefenseClubTex
			, Vector2(0.0f, 0.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueHurtClub", BlueHurtClubTex
			, Vector2(0.0f, 0.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueRunClub", BlueRunClubTex
			, Vector2(0.0f, 0.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueStandClub", BlueStandClubTex
			, Vector2(0.0f, 0.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 4, 0.2f);

		//BlueHatchat
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

		//RedType
		//RedBasic
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

		//RedClub
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

		//RedHatchat
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
	}

}