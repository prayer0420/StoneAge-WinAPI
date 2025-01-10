#include "prLoadAnimation.h"
#include "prResources.h"
#include "prAnimator.h"

namespace pr
{
	std::map<std::wstring, Animator*> LoadAnimation::mPlayerAnimators = {};
	std::map<std::wstring, Animator*> LoadAnimation::mPetAnimators = {};

	void pr::LoadAnimation::LoadAnimations()
	{

		Animator* petAnimator = new Animator();
		mPetAnimators.insert(std::make_pair(L"Duri", petAnimator));
		//DruiType
		//duri
		graphics::Texture* DuriAttackTex = Resources::Find<graphics::Texture>(L"DuriAttack");
		graphics::Texture* DuriDeadTex = Resources::Find<graphics::Texture>(L"DuriDead");
		graphics::Texture* DuriDefenseTex = Resources::Find<graphics::Texture>(L"DuriDefense");
		graphics::Texture* DuriHurtTex = Resources::Find<graphics::Texture>(L"DuriHurt");
		graphics::Texture* DuriRunTex = Resources::Find<graphics::Texture>(L"DuriRun");
		graphics::Texture* DuriStandTex = Resources::Find<graphics::Texture>(L"DuriIdle");
		
		//菊
		petAnimator->CreateAnimation(L"DuriAttack_F", DuriAttackTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"DuriDead_F", DuriDeadTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"DuriDefense_F", DuriDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"DuriHurt_F", DuriHurtTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);
		petAnimator->CreateAnimation(L"DuriRun_F", DuriRunTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"DuriStand_F", DuriStandTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		//谅菊
		petAnimator->CreateAnimation(L"DuriAttack_LF", DuriAttackTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"DuriDead_LF", DuriDeadTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"DuriDefense_LF", DuriDefenseTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"DuriHurt_LF", DuriHurtTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);
		petAnimator->CreateAnimation(L"DuriRun_LF", DuriRunTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"DuriStand_LF", DuriStandTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		//谅
		petAnimator->CreateAnimation(L"DuriAttack_L", DuriAttackTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"DuriDead_L", DuriDeadTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"DuriDefense_L", DuriDefenseTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"DuriHurt_L", DuriHurtTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);
		petAnimator->CreateAnimation(L"DuriRun_L", DuriRunTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"DuriStand_L", DuriStandTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		//谅第
		petAnimator->CreateAnimation(L"DuriAttack_LB", DuriAttackTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"DuriDead_LB", DuriDeadTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"DuriDefense_LB", DuriDefenseTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"DuriHurt_LB", DuriHurtTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);
		petAnimator->CreateAnimation(L"DuriRun_LB", DuriRunTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"DuriStand_LB", DuriStandTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		//第
		petAnimator->CreateAnimation(L"DuriAttack_B", DuriAttackTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"DuriDead_B", DuriDeadTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"DuriDefense_B", DuriDefenseTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"DuriHurt_B", DuriHurtTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);
		petAnimator->CreateAnimation(L"DuriRun_B", DuriRunTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"DuriStand_B", DuriStandTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		//快第
		petAnimator->CreateAnimation(L"DuriAttack_RB", DuriAttackTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"DuriDead_RB", DuriDeadTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"DuriDefense_RB", DuriDefenseTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"DuriHur_tRB", DuriHurtTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);
		petAnimator->CreateAnimation(L"DuriRun_RB", DuriRunTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"DuriStand_RB", DuriStandTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		//快
		petAnimator->CreateAnimation(L"DuriAttack_R", DuriAttackTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"DuriDead_R", DuriDeadTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"DuriDefense_R", DuriDefenseTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"DuriHurt_R", DuriHurtTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);
		petAnimator->CreateAnimation(L"DuriRun_R", DuriRunTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"DuriStand_R", DuriStandTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		//快菊
		petAnimator->CreateAnimation(L"DuriAttack_RF", DuriAttackTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"DuriDead_RF", DuriDeadTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"DuriDefense_RF", DuriDefenseTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"DuriHurt_RF", DuriHurtTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);
		petAnimator->CreateAnimation(L"DuriRun_RF", DuriRunTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"DuriStand_RF", DuriStandTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);



		//spottedUri
		petAnimator = new Animator();
		mPetAnimators.insert(std::make_pair(L"SpottedUri", petAnimator));
		graphics::Texture* SpottedUriAttackTex = Resources::Find<graphics::Texture>(L"SpottedUriAttack");
		graphics::Texture* SpottedUriDeadTex = Resources::Find<graphics::Texture>(L"SpottedUriDead");
		graphics::Texture* SpottedUriDefenseTex = Resources::Find<graphics::Texture>(L"SpottedUriDefense");
		graphics::Texture* SpottedUriHurtTex = Resources::Find<graphics::Texture>(L"SpottedUriHurt");
		graphics::Texture* SpottedUriRunTex = Resources::Find<graphics::Texture>(L"SpottedUriRun");
		graphics::Texture* SpottedUriStandTex = Resources::Find<graphics::Texture>(L"SpottedUriStand");

		// 菊
		petAnimator->CreateAnimation(L"SpottedUriAttack_F", SpottedUriAttackTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriDead_F", SpottedUriDeadTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriDefense_F", SpottedUriDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriHurt_F", SpottedUriHurtTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriRun_F", SpottedUriRunTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriStand_F", SpottedUriStandTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		// 谅菊
		petAnimator->CreateAnimation(L"SpottedUriAttack_LF", SpottedUriAttackTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriDead_LF", SpottedUriDeadTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriDefense_LF", SpottedUriDefenseTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriHurt_LF", SpottedUriHurtTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriRun_LF", SpottedUriRunTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriStand_LF", SpottedUriStandTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		// 谅
		petAnimator->CreateAnimation(L"SpottedUriAttack_L", SpottedUriAttackTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriDead_L", SpottedUriDeadTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriDefense_L", SpottedUriDefenseTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriHurt_L", SpottedUriHurtTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriRun_L", SpottedUriRunTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriStand_L", SpottedUriStandTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		// 谅第
		petAnimator->CreateAnimation(L"SpottedUriAttack_LB", SpottedUriAttackTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriDead_LB", SpottedUriDeadTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriDefense_LB", SpottedUriDefenseTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriHurt_LB", SpottedUriHurtTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriRun_LB", SpottedUriRunTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriStand_LB", SpottedUriStandTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		// 第
		petAnimator->CreateAnimation(L"SpottedUriAttack_B", SpottedUriAttackTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriDead_B", SpottedUriDeadTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriDefense_B", SpottedUriDefenseTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriHurt_B", SpottedUriHurtTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriRun_B", SpottedUriRunTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriStand_B", SpottedUriStandTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		// 快第
		petAnimator->CreateAnimation(L"SpottedUriAttack_RB", SpottedUriAttackTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriDead_RB", SpottedUriDeadTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriDefense_RB", SpottedUriDefenseTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriHurt_RB", SpottedUriHurtTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriRun_RB", SpottedUriRunTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriStand_RB", SpottedUriStandTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		// 快
		petAnimator->CreateAnimation(L"SpottedUriAttack_R", SpottedUriAttackTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriDead_R", SpottedUriDeadTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriDefense_R", SpottedUriDefenseTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriHurt_R", SpottedUriHurtTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriRun_R", SpottedUriRunTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriStand_R", SpottedUriStandTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		// 快菊
		petAnimator->CreateAnimation(L"SpottedUriAttack_RF", SpottedUriAttackTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriDead_RF", SpottedUriDeadTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriDefense_RF", SpottedUriDefenseTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriHurt_RF", SpottedUriHurtTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriRun_RF", SpottedUriRunTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"SpottedUriStand_RF", SpottedUriStandTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		// Uri
		petAnimator = new Animator();
		mPetAnimators.insert(std::make_pair(L"Uri", petAnimator));
		graphics::Texture* UriAttackTex = Resources::Find<graphics::Texture>(L"UriAttack");
		graphics::Texture* UriDeadTex = Resources::Find<graphics::Texture>(L"UriDead");
		graphics::Texture* UriDefenseTex = Resources::Find<graphics::Texture>(L"UriDefense");
		graphics::Texture* UriHurtTex = Resources::Find<graphics::Texture>(L"UriHurt");
		graphics::Texture* UriRunTex = Resources::Find<graphics::Texture>(L"UriRun");
		graphics::Texture* UriStandTex = Resources::Find<graphics::Texture>(L"UriStand");

		// 菊
		petAnimator->CreateAnimation(L"UriAttack_F", UriAttackTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"UriDead_F", UriDeadTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"UriDefense_F", UriDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"UriHurt_F", UriHurtTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);
		petAnimator->CreateAnimation(L"UriRun_F", UriRunTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"UriStand_F", UriStandTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		// 谅菊
		petAnimator->CreateAnimation(L"UriAttack_LF", UriAttackTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"UriDead_LF", UriDeadTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"UriDefense_LF", UriDefenseTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"UriHurt_LF", UriHurtTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);
		petAnimator->CreateAnimation(L"UriRun_LF", UriRunTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"UriStand_LF", UriStandTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		// 谅
		petAnimator->CreateAnimation(L"UriAttack_L", UriAttackTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"UriDead_L", UriDeadTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"UriDefense_L", UriDefenseTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"UriHurt_L", UriHurtTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);
		petAnimator->CreateAnimation(L"UriRun_L", UriRunTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"UriStand_L", UriStandTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		// 谅第
		petAnimator->CreateAnimation(L"UriAttack_LB", UriAttackTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"UriDead_LB", UriDeadTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"UriDefense_LB", UriDefenseTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"UriHurt_LB", UriHurtTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);
		petAnimator->CreateAnimation(L"UriRun_LB", UriRunTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"UriStand_LB", UriStandTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		// 第
		petAnimator->CreateAnimation(L"UriAttack_B", UriAttackTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"UriDead_B", UriDeadTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"UriDefense_B", UriDefenseTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"UriHurt_B", UriHurtTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);
		petAnimator->CreateAnimation(L"UriRun_B", UriRunTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"UriStand_B", UriStandTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		// 快第
		petAnimator->CreateAnimation(L"UriAttack_RB", UriAttackTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"UriDead_RB", UriDeadTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"UriDefense_RB", UriDefenseTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"UriHurt_RB", UriHurtTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);
		petAnimator->CreateAnimation(L"UriRun_RB", UriRunTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"UriStand_RB", UriStandTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		// 快
		petAnimator->CreateAnimation(L"UriAttack_R", UriAttackTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"UriDead_R", UriDeadTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"UriDefense_R", UriDefenseTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"UriHurt_R", UriHurtTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);
		petAnimator->CreateAnimation(L"UriRun_R", UriRunTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"UriStand_R", UriStandTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);

		// 快菊
		petAnimator->CreateAnimation(L"UriAttack_RF", UriAttackTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"UriDead_RF", UriDeadTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"UriDefense_RF", UriDefenseTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"UriHurt_RF", UriHurtTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);
		petAnimator->CreateAnimation(L"UriRun_RF", UriRunTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"UriStand_RF", UriStandTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);



		//ogaros Type
		//Ogaros
		petAnimator = new Animator();
		mPetAnimators.insert(std::make_pair(L"Ogaros", petAnimator));

		graphics::Texture* OgarosAttackTex = Resources::Find<graphics::Texture>(L"OgarosAttack");
		graphics::Texture* OgarosDeadTex = Resources::Find<graphics::Texture>(L"OgarosDead");
		graphics::Texture* OgarosDefenseTex = Resources::Find<graphics::Texture>(L"OgarosDefense");
		graphics::Texture* OgarosHurtTex = Resources::Find<graphics::Texture>(L"OgarosHurt");
		graphics::Texture* OgarosRunTex = Resources::Find<graphics::Texture>(L"OgarosRun");
		graphics::Texture* OgarosStandTex = Resources::Find<graphics::Texture>(L"OgarosStand");

		// 菊
		petAnimator->CreateAnimation(L"OgarosAttack_F", OgarosAttackTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 150.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"OgarosDead_F", OgarosDeadTex
			, Vector2(0.0f, 0.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"OgarosDefense_F", OgarosDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"OgarosHurt_F", OgarosHurtTex
			, Vector2(0.0f, 0.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"OgarosRun_F", OgarosRunTex
			, Vector2(0.0f, 0.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"OgarosStand_F", OgarosStandTex
			, Vector2(0.0f, 0.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 66, 0.2f);

		// 谅菊
		petAnimator->CreateAnimation(L"OgarosAttack_LF", OgarosAttackTex
			, Vector2(0.0f, 150.0f), Vector2(100.0f, 150.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"OgarosDead_LF", OgarosDeadTex
			, Vector2(0.0f, 150.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"OgarosDefense_LF", OgarosDefenseTex
			, Vector2(0.0f, 150.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"OgarosHurt_LF", OgarosHurtTex
			, Vector2(0.0f, 150.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"OgarosRun_LF", OgarosRunTex
			, Vector2(0.0f, 150.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"OgarosStand_LF", OgarosStandTex
			, Vector2(0.0f, 150.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 66, 0.2f);

		// 谅
		petAnimator->CreateAnimation(L"OgarosAttack_L", OgarosAttackTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 150.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"OgarosDead_L", OgarosDeadTex
			, Vector2(0.0f, 300.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"OgarosDefense_L", OgarosDefenseTex
			, Vector2(0.0f, 300.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"OgarosHurt_L", OgarosHurtTex
			, Vector2(0.0f, 300.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"OgarosRun_L", OgarosRunTex
			, Vector2(0.0f, 300.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"OgarosStand_L", OgarosStandTex
			, Vector2(0.0f, 300.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 66, 0.2f);

		// 谅第
		petAnimator->CreateAnimation(L"OgarosAttack_LB", OgarosAttackTex
			, Vector2(0.0f, 450.0f), Vector2(100.0f, 150.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"OgarosDead_LB", OgarosDeadTex
			, Vector2(0.0f, 450.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"OgarosDefense_LB", OgarosDefenseTex
			, Vector2(0.0f, 450.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"OgarosHurt_LB", OgarosHurtTex
			, Vector2(0.0f, 450.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"OgarosRun_LB", OgarosRunTex
			, Vector2(0.0f, 450.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"OgarosStand_LB", OgarosStandTex
			, Vector2(0.0f, 450.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 66, 0.2f);

		// 第
		petAnimator->CreateAnimation(L"OgarosAttack_B", OgarosAttackTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 150.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"OgarosDead_B", OgarosDeadTex
			, Vector2(0.0f, 600.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"OgarosDefense_B", OgarosDefenseTex
			, Vector2(0.0f, 600.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"OgarosHurt_B", OgarosHurtTex
			, Vector2(0.0f, 600.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"OgarosRun_B", OgarosRunTex
			, Vector2(0.0f, 600.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"OgarosStand_B", OgarosStandTex
			, Vector2(0.0f, 600.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 66, 0.2f);

		// 快第
		petAnimator->CreateAnimation(L"OgarosAttack_RB", OgarosAttackTex
			, Vector2(0.0f, 750.0f), Vector2(100.0f, 150.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"OgarosDead_RB", OgarosDeadTex
			, Vector2(0.0f, 750.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"OgarosDefense_RB", OgarosDefenseTex
			, Vector2(0.0f, 750.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"OgarosHurt_RB", OgarosHurtTex
			, Vector2(0.0f, 750.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"OgarosRun_RB", OgarosRunTex
			, Vector2(0.0f, 750.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"OgarosStand_RB", OgarosStandTex
			, Vector2(0.0f, 750.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 66, 0.2f);

		// 快
		petAnimator->CreateAnimation(L"OgarosAttack_R", OgarosAttackTex
			, Vector2(0.0f, 900.0f), Vector2(100.0f, 150.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"OgarosDead_R", OgarosDeadTex
			, Vector2(0.0f, 900.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"OgarosDefense_R", OgarosDefenseTex
			, Vector2(0.0f, 900.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"OgarosHurt_R", OgarosHurtTex
			, Vector2(0.0f, 900.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"OgarosRun_R", OgarosRunTex
			, Vector2(0.0f, 900.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"OgarosStand_R", OgarosStandTex
			, Vector2(0.0f, 900.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 66, 0.2f);

		// 菊快
		petAnimator->CreateAnimation(L"OgarosAttack_RF", OgarosAttackTex
			, Vector2(0.0f, 1050.0f), Vector2(100.0f, 150.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"OgarosDead_RF", OgarosDeadTex
			, Vector2(0.0f, 1050.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"OgarosDefense_RF", OgarosDefenseTex
			, Vector2(0.0f, 1050.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"OgarosHurt_RF", OgarosHurtTex
			, Vector2(0.0f, 1050.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"OgarosRun_RF", OgarosRunTex
			, Vector2(0.0f, 1050.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"OgarosStand_RF", OgarosStandTex
			, Vector2(0.0f, 1050.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 66, 0.2f);


		//Mogaros
		// Mogaros
		petAnimator = new Animator();
		mPetAnimators.insert(std::make_pair(L"Mgaros", petAnimator));

		graphics::Texture* MogarosAttackTex = Resources::Find<graphics::Texture>(L"MogarosAttack");
		graphics::Texture* MogarosDeadTex = Resources::Find<graphics::Texture>(L"MogarosDead");
		graphics::Texture* MogarosDefenseTex = Resources::Find<graphics::Texture>(L"MogarosDefense");
		graphics::Texture* MogarosHurtTex = Resources::Find<graphics::Texture>(L"MogarosHurt");
		graphics::Texture* MogarosRunTex = Resources::Find<graphics::Texture>(L"MogarosRun");
		graphics::Texture* MogarosStandTex = Resources::Find<graphics::Texture>(L"MogarosStand");

		// 菊
		petAnimator->CreateAnimation(L"MogarosAttack_F", MogarosAttackTex
			, Vector2(0.0f, 0.0f), Vector2(139.0f, 180.0f), Vector2::Zero, 22, 0.2f);
		petAnimator->CreateAnimation(L"MogarosDead_F", MogarosDeadTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"MogarosDefense_F", MogarosDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MogarosHurt_F", MogarosHurtTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MogarosRun_F", MogarosRunTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MogarosStand_F", MogarosStandTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 66, 0.2f);

		// 谅菊
		petAnimator->CreateAnimation(L"MogarosAttack_LF", MogarosAttackTex
			, Vector2(0.0f, 180.0f), Vector2(139.0f, 180.0f), Vector2::Zero, 22, 0.2f);
		petAnimator->CreateAnimation(L"MogarosDead_LF", MogarosDeadTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"MogarosDefense_LF", MogarosDefenseTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MogarosHurt_LF", MogarosHurtTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MogarosRun_LF", MogarosRunTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MogarosStand_LF", MogarosStandTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 66, 0.2f);

		// 谅
		petAnimator->CreateAnimation(L"MogarosAttack_L", MogarosAttackTex
			, Vector2(0.0f, 360.0f), Vector2(139.0f, 180.0f), Vector2::Zero, 22, 0.2f);
		petAnimator->CreateAnimation(L"MogarosDead_L", MogarosDeadTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"MogarosDefense_L", MogarosDefenseTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MogarosHurt_L", MogarosHurtTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MogarosRun_L", MogarosRunTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MogarosStand_L", MogarosStandTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 66, 0.2f);

		// 谅第
		petAnimator->CreateAnimation(L"MogarosAttack_LB", MogarosAttackTex
			, Vector2(0.0f, 540.0f), Vector2(139.0f, 180.0f), Vector2::Zero, 22, 0.2f);
		petAnimator->CreateAnimation(L"MogarosDead_LB", MogarosDeadTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"MogarosDefense_LB", MogarosDefenseTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MogarosHurt_LB", MogarosHurtTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MogarosRun_LB", MogarosRunTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MogarosStand_LB", MogarosStandTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 66, 0.2f);

		// 第
		petAnimator->CreateAnimation(L"MogarosAttack_B", MogarosAttackTex
			, Vector2(0.0f, 720.0f), Vector2(139.0f, 180.0f), Vector2::Zero, 22, 0.2f);
		petAnimator->CreateAnimation(L"MogarosDead_B", MogarosDeadTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"MogarosDefense_B", MogarosDefenseTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MogarosHurt_B", MogarosHurtTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MogarosRun_B", MogarosRunTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MogarosStand_B", MogarosStandTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 66, 0.2f);

		// 快第
		petAnimator->CreateAnimation(L"MogarosAttack_RB", MogarosAttackTex
			, Vector2(0.0f, 900.0f), Vector2(139.0f, 180.0f), Vector2::Zero, 22, 0.2f);
		petAnimator->CreateAnimation(L"MogarosDead_RB", MogarosDeadTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"MogarosDefense_RB", MogarosDefenseTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MogarosHurt_RB", MogarosHurtTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MogarosRun_RB", MogarosRunTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MogarosStand_RB", MogarosStandTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 66, 0.2f);

		// 快
		petAnimator->CreateAnimation(L"MogarosAttack_R", MogarosAttackTex
			, Vector2(0.0f, 1080.0f), Vector2(139.0f, 180.0f), Vector2::Zero, 22, 0.2f);
		petAnimator->CreateAnimation(L"MogarosDead_R", MogarosDeadTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"MogarosDefense_R", MogarosDefenseTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MogarosHurt_R", MogarosHurtTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MogarosRun_R", MogarosRunTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MogarosStand_R", MogarosStandTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 66, 0.2f);

		// 快菊
		petAnimator->CreateAnimation(L"MogarosAttack_RF", MogarosAttackTex
			, Vector2(0.0f, 1260.0f), Vector2(139.0f, 180.0f), Vector2::Zero, 22, 0.2f);
		petAnimator->CreateAnimation(L"MogarosDead_RF", MogarosDeadTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"MogarosDefense_RF", MogarosDefenseTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MogarosHurt_RF", MogarosHurtTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MogarosRun_RF", MogarosRunTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MogarosStand_RF", MogarosStandTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 66, 0.2f);


		//Golros
		petAnimator = new Animator();
		mPetAnimators.insert(std::make_pair(L"Golros", petAnimator));
		graphics::Texture* GolrosAttackTex = Resources::Find<graphics::Texture>(L"GolrosAttack");
		graphics::Texture* GolrosDeadTex = Resources::Find<graphics::Texture>(L"GolrosDead");
		graphics::Texture* GolrosDefenseTex = Resources::Find<graphics::Texture>(L"GolrosDefense");
		graphics::Texture* GolrosHurtTex = Resources::Find<graphics::Texture>(L"GolrosHurt");
		graphics::Texture* GolrosRunTex = Resources::Find<graphics::Texture>(L"GolrosRun");
		graphics::Texture* GolrosStandTex = Resources::Find<graphics::Texture>(L"GolrosStand");

		// 菊
		petAnimator->CreateAnimation(L"GolrosAttack_F", GolrosAttackTex
			, Vector2(0.0f, 0.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 22, 0.2f);
		petAnimator->CreateAnimation(L"GolrosDead_F", GolrosDeadTex
			, Vector2(0.0f, 0.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"GolrosDefense_F", GolrosDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"GolrosHurt_F", GolrosHurtTex
			, Vector2(0.0f, 0.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"GolrosRun_F", GolrosDeadTex
			, Vector2(0.0f, 0.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"GolrosStand_F", GolrosStandTex
			, Vector2(0.0f, 0.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 66, 0.2f);

		// 谅菊
		petAnimator->CreateAnimation(L"GolrosAttack_LF", GolrosAttackTex
			, Vector2(0.0f, 150.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 22, 0.2f);
		petAnimator->CreateAnimation(L"GolrosDead_LF", GolrosDeadTex
			, Vector2(0.0f, 150.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"GolrosDefense_LF", GolrosDefenseTex
			, Vector2(0.0f, 150.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"GolrosHurt_LF", GolrosHurtTex
			, Vector2(0.0f, 150.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"GolrosRun_LF", GolrosDeadTex
			, Vector2(0.0f, 150.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"GolrosStand_LF", GolrosStandTex
			, Vector2(0.0f, 150.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 66, 0.2f);

		// 谅
		petAnimator->CreateAnimation(L"GolrosAttack_L", GolrosAttackTex
			, Vector2(0.0f, 300.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 22, 0.2f);
		petAnimator->CreateAnimation(L"GolrosDead_L", GolrosDeadTex
			, Vector2(0.0f, 300.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"GolrosDefense_L", GolrosDefenseTex
			, Vector2(0.0f, 300.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"GolrosHurt_L", GolrosHurtTex
			, Vector2(0.0f, 300.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"GolrosRun_L", GolrosDeadTex
			, Vector2(0.0f, 300.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"GolrosStand_L", GolrosStandTex
			, Vector2(0.0f, 300.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 66, 0.2f);

		// 谅第
		petAnimator->CreateAnimation(L"GolrosAttack_LB", GolrosAttackTex
			, Vector2(0.0f, 450.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 22, 0.2f);
		petAnimator->CreateAnimation(L"GolrosDead_LB", GolrosDeadTex
			, Vector2(0.0f, 450.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"GolrosDefense_LB", GolrosDefenseTex
			, Vector2(0.0f, 450.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"GolrosHurt_LB", GolrosHurtTex
			, Vector2(0.0f, 450.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"GolrosRun_LB", GolrosDeadTex
			, Vector2(0.0f, 450.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"GolrosStand_LB", GolrosStandTex
			, Vector2(0.0f, 450.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 66, 0.2f);

		// 第
		petAnimator->CreateAnimation(L"GolrosAttack_B", GolrosAttackTex
			, Vector2(0.0f, 600.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 22, 0.2f);
		petAnimator->CreateAnimation(L"GolrosDead_B", GolrosDeadTex
			, Vector2(0.0f, 600.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"GolrosDefense_B", GolrosDefenseTex
			, Vector2(0.0f, 600.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"GolrosHurt_B", GolrosHurtTex
			, Vector2(0.0f, 600.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"GolrosRun_B", GolrosDeadTex
			, Vector2(0.0f, 600.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"GolrosStand_B", GolrosStandTex
			, Vector2(0.0f, 600.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 66, 0.2f);

		// 快第
		petAnimator->CreateAnimation(L"GolrosAttack_RB", GolrosAttackTex
			, Vector2(0.0f, 750.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 22, 0.2f);
		petAnimator->CreateAnimation(L"GolrosDead_RB", GolrosDeadTex
			, Vector2(0.0f, 750.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"GolrosDefense_RB", GolrosDefenseTex
			, Vector2(0.0f, 750.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"GolrosHurt_RB", GolrosHurtTex
			, Vector2(0.0f, 750.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"GolrosRun_RB", GolrosDeadTex
			, Vector2(0.0f, 750.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"GolrosStand_RB", GolrosStandTex
			, Vector2(0.0f, 750.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 66, 0.2f);

		// 快
		petAnimator->CreateAnimation(L"GolrosAttack_R", GolrosAttackTex
			, Vector2(0.0f, 900.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 22, 0.2f);
		petAnimator->CreateAnimation(L"GolrosDead_R", GolrosDeadTex
			, Vector2(0.0f, 900.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"GolrosDefense_R", GolrosDefenseTex
			, Vector2(0.0f, 900.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"GolrosHurt_R", GolrosHurtTex
			, Vector2(0.0f, 900.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"GolrosRun_R", GolrosDeadTex
			, Vector2(0.0f, 900.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"GolrosStand_R", GolrosStandTex
			, Vector2(0.0f, 900.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 66, 0.2f);

		// 快菊
		petAnimator->CreateAnimation(L"GolrosAttack_RF", GolrosAttackTex
			, Vector2(0.0f, 1050.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 22, 0.2f);
		petAnimator->CreateAnimation(L"GolrosDead_RF", GolrosDeadTex
			, Vector2(0.0f, 1050.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"GolrosDefense_RF", GolrosDefenseTex
			, Vector2(0.0f, 1050.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"GolrosHurt_RF", GolrosHurtTex
			, Vector2(0.0f, 1050.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"GolrosRun_RF", GolrosDeadTex
			, Vector2(0.0f, 1050.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"GolrosStand_RF", GolrosStandTex
			, Vector2(0.0f, 1050.0f), Vector2(150.0f, 150.0f), Vector2::Zero, 66, 0.2f);



		//Verga Type
		//Gorgor
		petAnimator = new Animator();
		mPetAnimators.insert(std::make_pair(L"Gorgor", petAnimator));
		graphics::Texture* GorgorAttackTex = Resources::Find<graphics::Texture>(L"GorgorAttack");
		graphics::Texture* GorgorDeadTex = Resources::Find<graphics::Texture>(L"GorgorDead");
		graphics::Texture* GorgorDefenseTex = Resources::Find<graphics::Texture>(L"GorgorDefense");
		graphics::Texture* GorgorHurtTex = Resources::Find<graphics::Texture>(L"GorgorHurt");
		graphics::Texture* GorgorRunTex = Resources::Find<graphics::Texture>(L"GorgorRun");
		graphics::Texture* GorgorStandTex = Resources::Find<graphics::Texture>(L"GorgorStand");

		// 菊
		petAnimator->CreateAnimation(L"GorgorAttack_F", GorgorAttackTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"GorgorDead_F", GorgorDeadTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"GorgorDefense_F", GorgorDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"GorgorHurt_F", GorgorHurtTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"GorgorRun_F", GorgorRunTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"GorgorStand_F", GorgorStandTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		// 谅菊
		petAnimator->CreateAnimation(L"GorgorAttack_LF", GorgorAttackTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"GorgorDead_LF", GorgorDeadTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"GorgorDefense_LF", GorgorDefenseTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"GorgorHurt_LF", GorgorHurtTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"GorgorRun_LF", GorgorRunTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"GorgorStand_LF", GorgorStandTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		// 谅
		petAnimator->CreateAnimation(L"GorgorAttack_L", GorgorAttackTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"GorgorDead_L", GorgorDeadTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"GorgorDefense_L", GorgorDefenseTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"GorgorHurt_L", GorgorHurtTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"GorgorRun_L", GorgorRunTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"GorgorStand_L", GorgorStandTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		// 谅第
		petAnimator->CreateAnimation(L"GorgorAttack_LB", GorgorAttackTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"GorgorDead_LB", GorgorDeadTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"GorgorDefense_LB", GorgorDefenseTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"GorgorHurt_LB", GorgorHurtTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"GorgorRun_LB", GorgorRunTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"GorgorStand_LB", GorgorStandTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		// 第
		petAnimator->CreateAnimation(L"GorgorAttack_B", GorgorAttackTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"GorgorDead_B", GorgorDeadTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"GorgorDefense_B", GorgorDefenseTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"GorgorHurt_B", GorgorHurtTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"GorgorRun_B", GorgorRunTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"GorgorStand_B", GorgorStandTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		// 快第
		petAnimator->CreateAnimation(L"GorgorAttack_RB", GorgorAttackTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"GorgorDead_RB", GorgorDeadTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"GorgorDefense_RB", GorgorDefenseTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"GorgorHurt_RB", GorgorHurtTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"GorgorRun_RB", GorgorRunTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"GorgorStand_RB", GorgorStandTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		// 快
		petAnimator->CreateAnimation(L"GorgorAttack_R", GorgorAttackTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"GorgorDead_R", GorgorDeadTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"GorgorDefense_R", GorgorDefenseTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"GorgorHurt_R", GorgorHurtTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"GorgorRun_R", GorgorRunTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"GorgorStand_R", GorgorStandTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		// 快菊
		petAnimator->CreateAnimation(L"GorgorAttack_RF", GorgorAttackTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"GorgorDead_RF", GorgorDeadTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"GorgorDefense_RF", GorgorDefenseTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"GorgorHurt_RF", GorgorHurtTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"GorgorRun_RF", GorgorRunTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"GorgorStand_RF", GorgorStandTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);


		//Nornor
		petAnimator = new Animator();
		mPetAnimators.insert(std::make_pair(L"Nornor", petAnimator));
		graphics::Texture* NornorAttackTex = Resources::Find<graphics::Texture>(L"NornorAttack");
		graphics::Texture* NornorDeadTex = Resources::Find<graphics::Texture>(L"NornorDead");
		graphics::Texture* NornorDefenseTex = Resources::Find<graphics::Texture>(L"NornorDefense");
		graphics::Texture* NornorHurtTex = Resources::Find<graphics::Texture>(L"NornorHurt");
		graphics::Texture* NornorRunTex = Resources::Find<graphics::Texture>(L"NornorRun");
		graphics::Texture* NornorStandTex = Resources::Find<graphics::Texture>(L"NornorStand");

		//菊
//菊
		petAnimator->CreateAnimation(L"NornorAttack_F", NornorAttackTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"NornorDead_F", NornorDeadTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"NornorDefense_F", NornorDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"NornorHurt_F", NornorHurtTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"NornorRun_F", NornorRunTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"NornorStand_F", NornorStandTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		//谅菊
		petAnimator->CreateAnimation(L"NornorAttack_LF", NornorAttackTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"NornorDead_LF", NornorDeadTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"NornorDefense_LF", NornorDefenseTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"NornorHurt_LF", NornorHurtTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"NornorRun_LF", NornorRunTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"NornorStand_LF", NornorStandTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		//谅
		petAnimator->CreateAnimation(L"NornorAttack_L", NornorAttackTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"NornorDead_L", NornorDeadTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"NornorDefense_L", NornorDefenseTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"NornorHurt_L", NornorHurtTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"NornorRun_L", NornorRunTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"NornorStand_L", NornorStandTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		//谅第
		petAnimator->CreateAnimation(L"NornorAttack_LB", NornorAttackTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"NornorDead_LB", NornorDeadTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"NornorDefense_LB", NornorDefenseTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"NornorHurt_LB", NornorHurtTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"NornorRun_LB", NornorRunTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"NornorStand_LB", NornorStandTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		//第
		petAnimator->CreateAnimation(L"NornorAttack_B", NornorAttackTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"NornorDead_B", NornorDeadTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"NornorDefense_B", NornorDefenseTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"NornorHurt_B", NornorHurtTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"NornorRun_B", NornorRunTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"NornorStand_B", NornorStandTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		//快第
		petAnimator->CreateAnimation(L"NornorAttack_RB", NornorAttackTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"NornorDead_RB", NornorDeadTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"NornorDefense_RB", NornorDefenseTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"NornorHurt_RB", NornorHurtTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"NornorRun_RB", NornorRunTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"NornorStand_RB", NornorStandTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		//快
		petAnimator->CreateAnimation(L"NornorAttack_R", NornorAttackTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"NornorDead_R", NornorDeadTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"NornorDefense_R", NornorDefenseTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"NornorHurt_R", NornorHurtTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"NornorRun_R", NornorRunTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"NornorStand_R", NornorStandTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		//快菊
		petAnimator->CreateAnimation(L"NornorAttack_RF", NornorAttackTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"NornorDead_RF", NornorDeadTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"NornorDefense_RF", NornorDefenseTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"NornorHurt_RF", NornorHurtTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"NornorRun_RF", NornorRunTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"NornorStand_RF", NornorStandTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);


		//Verga
		petAnimator = new Animator();
		mPetAnimators.insert(std::make_pair(L"Verga", petAnimator));
		graphics::Texture* VergaAttackTex = Resources::Find<graphics::Texture>(L"VergaAttack");
		graphics::Texture* VergaDeadTex = Resources::Find<graphics::Texture>(L"VergaDead");
		graphics::Texture* VergaDefenseTex = Resources::Find<graphics::Texture>(L"VergaDefense");
		graphics::Texture* VergaHurtTex = Resources::Find<graphics::Texture>(L"VergaHurt");
		graphics::Texture* VergaRunTex = Resources::Find<graphics::Texture>(L"VergaRun");
		graphics::Texture* VergaStandTex = Resources::Find<graphics::Texture>(L"VergaStand");

		//菊
		petAnimator->CreateAnimation(L"VergaAttack_F", VergaAttackTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"VergaDead_F", VergaDeadTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"VergaDefense_F", VergaDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"VergaHurt_F", VergaHurtTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"VergaRun_F", VergaRunTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"VergaStand_F", VergaStandTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		//谅菊
		petAnimator->CreateAnimation(L"VergaAttack_LF", VergaAttackTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"VergaDead_LF", VergaDeadTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"VergaDefense_LF", VergaDefenseTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"VergaHurt_LF", VergaHurtTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"VergaRun_LF", VergaRunTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"VergaStand_LF", VergaStandTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		//谅
		petAnimator->CreateAnimation(L"VergaAttack_L", VergaAttackTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"VergaDead_L", VergaDeadTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"VergaDefense_L", VergaDefenseTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"VergaHurt_L", VergaHurtTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"VergaRun_L", VergaRunTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"VergaStand_L", VergaStandTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		//谅第
		petAnimator->CreateAnimation(L"VergaAttack_LB", VergaAttackTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"VergaDead_LB", VergaDeadTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"VergaDefense_LB", VergaDefenseTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"VergaHurt_LB", VergaHurtTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"VergaRun_LB", VergaRunTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"VergaStand_LB", VergaStandTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		//第
		petAnimator->CreateAnimation(L"VergaAttack_B", VergaAttackTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"VergaDead_B", VergaDeadTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"VergaDefense_B", VergaDefenseTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"VergaHurt_B", VergaHurtTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"VergaRun_B", VergaRunTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"VergaStand_B", VergaStandTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		//快第
		petAnimator->CreateAnimation(L"VergaAttack_RB", VergaAttackTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"VergaDead_RB", VergaDeadTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"VergaDefense_RB", VergaDefenseTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"VergaHurt_RB", VergaHurtTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"VergaRun_RB", VergaRunTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"VergaStand_RB", VergaStandTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		//快
		petAnimator->CreateAnimation(L"VergaAttack_R", VergaAttackTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"VergaDead_R", VergaDeadTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"VergaDefense_R", VergaDefenseTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"VergaHurt_R", VergaHurtTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"VergaRun_R", VergaRunTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"VergaStand_R", VergaStandTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		//快菊
		petAnimator->CreateAnimation(L"VergaAttack_RF", VergaAttackTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"VergaDead_RF", VergaDeadTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"VergaDefense_RF", VergaDefenseTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"VergaHurt_RF", VergaHurtTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"VergaRun_RF", VergaRunTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"VergaStand_RF", VergaStandTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);


		//Veruru
		petAnimator = new Animator();
		mPetAnimators.insert(std::make_pair(L"Veruru", petAnimator));
		graphics::Texture* VeruruAttackTex = Resources::Find<graphics::Texture>(L"VeruruAttack");
		graphics::Texture* VeruruDeadTex = Resources::Find<graphics::Texture>(L"VeruruDead");
		graphics::Texture* VeruruDefenseTex = Resources::Find<graphics::Texture>(L"VeruruDefense");
		graphics::Texture* VeruruHurtTex = Resources::Find<graphics::Texture>(L"VeruruHurt");
		graphics::Texture* VeruruRunTex = Resources::Find<graphics::Texture>(L"VeruruRun");
		graphics::Texture* VeruruStandTex = Resources::Find<graphics::Texture>(L"VeruruStand");

		//菊
		petAnimator->CreateAnimation(L"VeruruAttack_F", VeruruAttackTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"VeruruDead_F", VeruruDeadTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"VeruruDefense_F", VeruruDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"VeruruHurt_F", VeruruHurtTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"VeruruRun_F", VeruruRunTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"VeruruStand_F", VeruruStandTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		//谅菊
		petAnimator->CreateAnimation(L"VeruruAttack_LF", VeruruAttackTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"VeruruDead_LF", VeruruDeadTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"VeruruDefense_LF", VeruruDefenseTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"VeruruHurt_LF", VeruruHurtTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"VeruruRun_LF", VeruruRunTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"VeruruStand_LF", VeruruStandTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		//谅
		petAnimator->CreateAnimation(L"VeruruAttack_L", VeruruAttackTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"VeruruDead_L", VeruruDeadTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"VeruruDefense_L", VeruruDefenseTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"VeruruHurt_L", VeruruHurtTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"VeruruRun_L", VeruruRunTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"VeruruStand_L", VeruruStandTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		//谅第
		petAnimator->CreateAnimation(L"VeruruAttack_LB", VeruruAttackTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"VeruruDead_LB", VeruruDeadTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"VeruruDefense_LB", VeruruDefenseTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"VeruruHurt_LB", VeruruHurtTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"VeruruRun_LB", VeruruRunTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"VeruruStand_LB", VeruruStandTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		//第
		petAnimator->CreateAnimation(L"VeruruAttack_B", VeruruAttackTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"VeruruDead_B", VeruruDeadTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"VeruruDefense_B", VeruruDefenseTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"VeruruHurt_B", VeruruHurtTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"VeruruRun_B", VeruruRunTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"VeruruStand_B", VeruruStandTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		//快第
		petAnimator->CreateAnimation(L"VeruruAttack_RB", VeruruAttackTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"VeruruDead_RB", VeruruDeadTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"VeruruDefense_RB", VeruruDefenseTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"VeruruHurt_RB", VeruruHurtTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"VeruruRun_RB", VeruruRunTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"VeruruStand_RB", VeruruStandTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		//快
		petAnimator->CreateAnimation(L"VeruruAttack_R", VeruruAttackTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"VeruruDead_R", VeruruDeadTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"VeruruDefense_R", VeruruDefenseTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"VeruruHurt_R", VeruruHurtTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"VeruruRun_R", VeruruRunTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 9, 0.2f);
		petAnimator->CreateAnimation(L"VeruruStand_R", VeruruStandTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);

		//快菊
		petAnimator->CreateAnimation(L"VeruruAttack_RF", VeruruAttackTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"VeruruDead_RF", VeruruDeadTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"VeruruDefense_RF", VeruruDefenseTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"VeruruHurt_RF", VeruruHurtTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"VeruruRun_RF", VeruruRunTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"VeruruStand_RF", VeruruStandTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 33, 0.2f);



		//Yangiro Type
		//Banboro
		petAnimator = new Animator();
		mPetAnimators.insert(std::make_pair(L"Banboro", petAnimator));
		graphics::Texture* BanboroAttackTex = Resources::Find<graphics::Texture>(L"BanboroAttack");
		graphics::Texture* BanboroDeadTex = Resources::Find<graphics::Texture>(L"BanboroDead");
		graphics::Texture* BanboroDefenseTex = Resources::Find<graphics::Texture>(L"BanboroDefense");
		graphics::Texture* BanboroHurtTex = Resources::Find<graphics::Texture>(L"BanboroHurt");
		graphics::Texture* BanboroRunTex = Resources::Find<graphics::Texture>(L"BanboroRun");
		graphics::Texture* BanboroStandTex = Resources::Find<graphics::Texture>(L"BanboroStand");

		//菊
		petAnimator->CreateAnimation(L"BanboroAttack_F", BanboroAttackTex,
			Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 12, 0.2f);
		petAnimator->CreateAnimation(L"BanboroDead_F", BanboroDeadTex,
			Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"BanboroDefense_F", BanboroDefenseTex,
			Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"BanboroHurt_F", BanboroHurtTex,
			Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"BanboroRun_F", BanboroRunTex,
			Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"BanboroStand_F", BanboroStandTex,
			Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 26, 0.2f);

		//谅菊
		petAnimator->CreateAnimation(L"BanboroAttack_LF", BanboroAttackTex,
			Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 12, 0.2f);
		petAnimator->CreateAnimation(L"BanboroDead_LF", BanboroDeadTex,
			Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"BanboroDefense_LF", BanboroDefenseTex,
			Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"BanboroHurt_LF", BanboroHurtTex,
			Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"BanboroRun_LF", BanboroRunTex,
			Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"BanboroStand_LF", BanboroStandTex,
			Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 26, 0.2f);

		//谅
		petAnimator->CreateAnimation(L"BanboroAttack_L", BanboroAttackTex,
			Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 12, 0.2f);
		petAnimator->CreateAnimation(L"BanboroDead_L", BanboroDeadTex,
			Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"BanboroDefense_L", BanboroDefenseTex,
			Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"BanboroHurt_L", BanboroHurtTex,
			Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"BanboroRun_L", BanboroRunTex,
			Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"BanboroStand_L", BanboroStandTex,
			Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 26, 0.2f);

		//谅第
		petAnimator->CreateAnimation(L"BanboroAttack_LB", BanboroAttackTex,
			Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 12, 0.2f);
		petAnimator->CreateAnimation(L"BanboroDead_LB", BanboroDeadTex,
			Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"BanboroDefense_LB", BanboroDefenseTex,
			Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"BanboroHurt_LB", BanboroHurtTex,
			Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"BanboroRun_LB", BanboroRunTex,
			Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"BanboroStand_LB", BanboroStandTex,
			Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 26, 0.2f);

		//第
		petAnimator->CreateAnimation(L"BanboroAttack_B", BanboroAttackTex,
			Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 12, 0.2f);
		petAnimator->CreateAnimation(L"BanboroDead_B", BanboroDeadTex,
			Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"BanboroDefense_B", BanboroDefenseTex,
			Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"BanboroHurt_B", BanboroHurtTex,
			Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"BanboroRun_B", BanboroRunTex,
			Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"BanboroStand_B", BanboroStandTex,
			Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 26, 0.2f);

		//快第
		petAnimator->CreateAnimation(L"BanboroAttack_RB", BanboroAttackTex,
			Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 12, 0.2f);
		petAnimator->CreateAnimation(L"BanboroDead_RB", BanboroDeadTex,
			Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"BanboroDefense_RB", BanboroDefenseTex,
			Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"BanboroHurt_RB", BanboroHurtTex,
			Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"BanboroRun_RB", BanboroRunTex,
			Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"BanboroStand_RB", BanboroStandTex,
			Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 26, 0.2f);

		//快
		petAnimator->CreateAnimation(L"BanboroAttack_R", BanboroAttackTex,
			Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 12, 0.2f);
		petAnimator->CreateAnimation(L"BanboroDead_R", BanboroDeadTex,
			Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"BanboroDefense_R", BanboroDefenseTex,
			Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"BanboroHurt_R", BanboroHurtTex,
			Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"BanboroRun_R", BanboroRunTex,
			Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"BanboroStand_R", BanboroStandTex,
			Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 26, 0.2f);

		//快菊
		petAnimator->CreateAnimation(L"BanboroAttack_RF", BanboroAttackTex,
			Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 12, 0.2f);
		petAnimator->CreateAnimation(L"BanboroDead_RF", BanboroDeadTex,
			Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"BanboroDefense_RF", BanboroDefenseTex,
			Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"BanboroHurt_RF", BanboroHurtTex,
			Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"BanboroRun_RF", BanboroRunTex,
			Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"BanboroStand_RF", BanboroStandTex,
			Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 26, 0.2f);


		//Bangiro
		petAnimator = new Animator();
		mPetAnimators.insert(std::make_pair(L"Bangiro", petAnimator));
		graphics::Texture* BangiroAttackTex = Resources::Find<graphics::Texture>(L"BangiroAttack");
		graphics::Texture* BangiroDeadTex = Resources::Find<graphics::Texture>(L"BangiroDead");
		graphics::Texture* BangiroDefenseTex = Resources::Find<graphics::Texture>(L"BangiroDefense");
		graphics::Texture* BangiroHurtTex = Resources::Find<graphics::Texture>(L"BangiroHurt");
		graphics::Texture* BangiroRunTex = Resources::Find<graphics::Texture>(L"BangiroRun");
		graphics::Texture* BangiroStandTex = Resources::Find<graphics::Texture>(L"BangiroStand");

		//菊
		petAnimator->CreateAnimation(L"BangiroAttack_F", BangiroAttackTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"BangiroDead_F", BangiroDeadTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"BangiroDefense_F", BangiroDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"BangiroHurt_F", BangiroHurtTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"BangiroRun_F", BangiroRunTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"BangiroStand_F", BangiroStandTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 30, 0.2f);

		//谅菊
		petAnimator->CreateAnimation(L"BangiroAttack_LF", BangiroAttackTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"BangiroDead_LF", BangiroDeadTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"BangiroDefense_LF", BangiroDefenseTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"BangiroHurt_LF", BangiroHurtTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"BangiroRun_LF", BangiroRunTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"BangiroStand_LF", BangiroStandTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 30, 0.2f);

		//谅
		petAnimator->CreateAnimation(L"BangiroAttack_L", BangiroAttackTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"BangiroDead_L", BangiroDeadTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"BangiroDefense_L", BangiroDefenseTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"BangiroHurt_L", BangiroHurtTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"BangiroRun_L", BangiroRunTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"BangiroStand_L", BangiroStandTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 30, 0.2f);

		//谅第
		petAnimator->CreateAnimation(L"BangiroAttack_LB", BangiroAttackTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"BangiroDead_LB", BangiroDeadTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"BangiroDefense_LB", BangiroDefenseTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"BangiroHurt_LB", BangiroHurtTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"BangiroRun_LB", BangiroRunTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"BangiroStand_LB", BangiroStandTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 30, 0.2f);

		//第
		petAnimator->CreateAnimation(L"BangiroAttack_B", BangiroAttackTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"BangiroDead_B", BangiroDeadTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"BangiroDefense_B", BangiroDefenseTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"BangiroHurt_B", BangiroHurtTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"BangiroRun_B", BangiroRunTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"BangiroStand_B", BangiroStandTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 30, 0.2f);

		//快第
		petAnimator->CreateAnimation(L"BangiroAttack_RB", BangiroAttackTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"BangiroDead_RB", BangiroDeadTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"BangiroDefense_RB", BangiroDefenseTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"BangiroHurt_RB", BangiroHurtTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"BangiroRun_RB", BangiroRunTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"BangiroStand_RB", BangiroStandTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 30, 0.2f);

		//快
		petAnimator->CreateAnimation(L"BangiroAttack_R", BangiroAttackTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"BangiroDead_R", BangiroDeadTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"BangiroDefense_R", BangiroDefenseTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"BangiroHurt_R", BangiroHurtTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"BangiroRun_R", BangiroRunTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"BangiroStand_R", BangiroStandTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 30, 0.2f);

		//快菊
		petAnimator->CreateAnimation(L"BangiroAttack_RF", BangiroAttackTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"BangiroDead_RF", BangiroDeadTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"BangiroDefense_RF", BangiroDefenseTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"BangiroHurt_RF", BangiroHurtTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"BangiroRun_RF", BangiroRunTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"BangiroStand_RF", BangiroStandTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 30, 0.2f);


		//Burdon
		petAnimator = new Animator();
		mPetAnimators.insert(std::make_pair(L"Burdon", petAnimator));
		graphics::Texture* BurdonAttackTex = Resources::Find<graphics::Texture>(L"BurdonAttack");
		graphics::Texture* BurdonDeadTex = Resources::Find<graphics::Texture>(L"BurdonDead");
		graphics::Texture* BurdonDefenseTex = Resources::Find<graphics::Texture>(L"BurdonDefense");
		graphics::Texture* BurdonHurtTex = Resources::Find<graphics::Texture>(L"BurdonHurt");
		graphics::Texture* BurdonRunTex = Resources::Find<graphics::Texture>(L"BurdonRun");
		graphics::Texture* BurdonStandTex = Resources::Find<graphics::Texture>(L"BurdonStand");

		//菊
		petAnimator->CreateAnimation(L"BurdonAttack_F", BurdonAttackTex,
			Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"BurdonDead_F", BurdonDeadTex,
			Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"BurdonDefense_F", BurdonDefenseTex,
			Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"BurdonHurt_F", BurdonHurtTex,
			Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"BurdonRun_F", BurdonRunTex,
			Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"BurdonStand_F", BurdonStandTex,
			Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 30, 0.2f);

		//谅菊
		petAnimator->CreateAnimation(L"BurdonAttack_LF", BurdonAttackTex,
			Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"BurdonDead_LF", BurdonDeadTex,
			Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"BurdonDefense_LF", BurdonDefenseTex,
			Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"BurdonHurt_LF", BurdonHurtTex,
			Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"BurdonRun_LF", BurdonRunTex,
			Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"BurdonStand_LF", BurdonStandTex,
			Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 30, 0.2f);

		//谅
		petAnimator->CreateAnimation(L"BurdonAttack_L", BurdonAttackTex,
			Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"BurdonDead_L", BurdonDeadTex,
			Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"BurdonDefense_L", BurdonDefenseTex,
			Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"BurdonHurt_L", BurdonHurtTex,
			Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"BurdonRun_L", BurdonRunTex,
			Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"BurdonStand_L", BurdonStandTex,
			Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 30, 0.2f);

		//谅第
		petAnimator->CreateAnimation(L"BurdonAttack_LB", BurdonAttackTex,
			Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"BurdonDead_LB", BurdonDeadTex,
			Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"BurdonDefense_LB", BurdonDefenseTex,
			Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"BurdonHurt_LB", BurdonHurtTex,
			Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"BurdonRun_LB", BurdonRunTex,
			Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"BurdonStand_LB", BurdonStandTex,
			Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 30, 0.2f);

		//第
		petAnimator->CreateAnimation(L"BurdonAttack_B", BurdonAttackTex,
			Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"BurdonDead_B", BurdonDeadTex,
			Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"BurdonDefense_B", BurdonDefenseTex,
			Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"BurdonHurt_B", BurdonHurtTex,
			Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"BurdonRun_B", BurdonRunTex,
			Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"BurdonStand_B", BurdonStandTex,
			Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 30, 0.2f);

		//快第
		petAnimator->CreateAnimation(L"BurdonAttack_RB", BurdonAttackTex,
			Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"BurdonDead_RB", BurdonDeadTex,
			Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"BurdonDefense_RB", BurdonDefenseTex,
			Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"BurdonHurt_RB", BurdonHurtTex,
			Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"BurdonRun_RB", BurdonRunTex,
			Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"BurdonStand_RB", BurdonStandTex,
			Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 30, 0.2f);

		//快
		petAnimator->CreateAnimation(L"BurdonAttack_R", BurdonAttackTex,
			Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"BurdonDead_R", BurdonDeadTex,
			Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"BurdonDefense_R", BurdonDefenseTex,
			Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"BurdonHurt_R", BurdonHurtTex,
			Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"BurdonRun_R", BurdonRunTex,
			Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"BurdonStand_R", BurdonStandTex,
			Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 30, 0.2f);

		//快菊
		petAnimator->CreateAnimation(L"BurdonAttack_RF", BurdonAttackTex,
			Vector2(0.0f, 1160.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"BurdonDead_RF", BurdonDeadTex,
			Vector2(0.0f, 1160.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"BurdonDefense_RF", BurdonDefenseTex,
			Vector2(0.0f, 1160.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"BurdonHurt_RF", BurdonHurtTex,
			Vector2(0.0f, 1160.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"BurdonRun_RF", BurdonRunTex,
			Vector2(0.0f, 1160.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"BurdonStand_RF", BurdonStandTex,
			Vector2(0.0f, 1160.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 30, 0.2f);


		//Ribino
		petAnimator = new Animator();
		mPetAnimators.insert(std::make_pair(L"Ribino", petAnimator));
		graphics::Texture* RibinoAttackTex = Resources::Find<graphics::Texture>(L"RibinoAttack");
		graphics::Texture* RibinoDeadTex = Resources::Find<graphics::Texture>(L"RibinoDead");
		graphics::Texture* RibinoDefenseTex = Resources::Find<graphics::Texture>(L"RibinoDefense");
		graphics::Texture* RibinoHurtTex = Resources::Find<graphics::Texture>(L"RibinoHurt");
		graphics::Texture* RibinoRunTex = Resources::Find<graphics::Texture>(L"RibinoRun");
		graphics::Texture* RibinoStandTex = Resources::Find<graphics::Texture>(L"RibinoStand");

		petAnimator->CreateAnimation(L"RibinoAttack_F", RibinoAttackTex,
			Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"RibinoDead_F", RibinoDeadTex,
			Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"RibinoDefense_F", RibinoDefenseTex,
			Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"RibinoHurt_F", RibinoHurtTex,
			Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"RibinoRun_F", RibinoRunTex,
			Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"RibinoStand_F", RibinoStandTex,
			Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 30, 0.2f);

		petAnimator->CreateAnimation(L"RibinoAttack_LF", RibinoAttackTex,
			Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"RibinoDead_LF", RibinoDeadTex,
			Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"RibinoDefense_LF", RibinoDefenseTex,
			Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"RibinoHurt_LF", RibinoHurtTex,
			Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"RibinoRun_LF", RibinoRunTex,
			Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"RibinoStand_LF", RibinoStandTex,
			Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 30, 0.2f);

		petAnimator->CreateAnimation(L"RibinoAttack_L", RibinoAttackTex,
			Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"RibinoDead_L", RibinoDeadTex,
			Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"RibinoDefense_L", RibinoDefenseTex,
			Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"RibinoHurt_L", RibinoHurtTex,
			Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"RibinoRun_L", RibinoRunTex,
			Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"RibinoStand_L", RibinoStandTex,
			Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 30, 0.2f);

		petAnimator->CreateAnimation(L"RibinoAttack_LB", RibinoAttackTex,
			Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 8, 0.2f);
		petAnimator->CreateAnimation(L"RibinoDead_LB", RibinoDeadTex,
			Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"RibinoDefense_LB", RibinoDefenseTex,
			Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"RibinoHurt_LB", RibinoHurtTex,
			Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"RibinoRun_LB", RibinoRunTex,
			Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"RibinoStand_LB", RibinoStandTex,
			Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 30, 0.2f);



		//Yangiro
		petAnimator = new Animator();
		mPetAnimators.insert(std::make_pair(L"Yangiro", petAnimator));
		graphics::Texture* YangiroAttackTex = Resources::Find<graphics::Texture>(L"YangiroAttack");
		graphics::Texture* YangiroDeadTex = Resources::Find<graphics::Texture>(L"YangiroDead");
		graphics::Texture* YangiroDefenseTex = Resources::Find<graphics::Texture>(L"YangiroDefense");
		graphics::Texture* YangiroHurtTex = Resources::Find<graphics::Texture>(L"YangiroHurt");
		graphics::Texture* YangiroRunTex = Resources::Find<graphics::Texture>(L"YangiroRun");
		graphics::Texture* YangiroStandTex = Resources::Find<graphics::Texture>(L"YangiroStand");


		petAnimator->CreateAnimation(L"YangiroAttack_F", YangiroAttackTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 12, 0.2f);
		petAnimator->CreateAnimation(L"YangiroDead_F", YangiroDeadTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"YangiroDefense_F", YangiroDefenseTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"YangiroHurt_F", YangiroHurtTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"YangiroRun_F", YangiroRunTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"YangiroStand_F", YangiroStandTex
			, Vector2(0.0f, 0.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 26, 0.2f);

		petAnimator->CreateAnimation(L"YangiroAttack_LF", YangiroAttackTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 12, 0.2f);
		petAnimator->CreateAnimation(L"YangiroDead_LF", YangiroDeadTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"YangiroDefense_LF", YangiroDefenseTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"YangiroHurt_LF", YangiroHurtTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"YangiroRun_LF", YangiroRunTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"YangiroStand_LF", YangiroStandTex
			, Vector2(0.0f, 180.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 26, 0.2f);

		petAnimator->CreateAnimation(L"YangiroAttack_L", YangiroAttackTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 12, 0.2f);
		petAnimator->CreateAnimation(L"YangiroDead_L", YangiroDeadTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"YangiroDefense_L", YangiroDefenseTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"YangiroHurt_L", YangiroHurtTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"YangiroRun_L", YangiroRunTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"YangiroStand_L", YangiroStandTex
			, Vector2(0.0f, 360.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 26, 0.2f);

		petAnimator->CreateAnimation(L"YangiroAttack_LB", YangiroAttackTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 12, 0.2f);
		petAnimator->CreateAnimation(L"YangiroDead_LB", YangiroDeadTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"YangiroDefense_LB", YangiroDefenseTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"YangiroHurt_LB", YangiroHurtTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"YangiroRun_LB", YangiroRunTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"YangiroStand_LB", YangiroStandTex
			, Vector2(0.0f, 540.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 26, 0.2f);

		petAnimator->CreateAnimation(L"YangiroAttack_B", YangiroAttackTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 12, 0.2f);
		petAnimator->CreateAnimation(L"YangiroDead_B", YangiroDeadTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"YangiroDefense_B", YangiroDefenseTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"YangiroHurt_B", YangiroHurtTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"YangiroRun_B", YangiroRunTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"YangiroStand_B", YangiroStandTex
			, Vector2(0.0f, 720.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 26, 0.2f);

		petAnimator->CreateAnimation(L"YangiroAttack_RB", YangiroAttackTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 12, 0.2f);
		petAnimator->CreateAnimation(L"YangiroDead_RB", YangiroDeadTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"YangiroDefense_RB", YangiroDefenseTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"YangiroHurt_RB", YangiroHurtTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"YangiroRun_RB", YangiroRunTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"YangiroStand_RB", YangiroStandTex
			, Vector2(0.0f, 900.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 26, 0.2f);

		petAnimator->CreateAnimation(L"YangiroAttack_R", YangiroAttackTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 12, 0.2f);
		petAnimator->CreateAnimation(L"YangiroDead_R", YangiroDeadTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"YangiroDefense_R", YangiroDefenseTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"YangiroHurt_R", YangiroHurtTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"YangiroRun_R", YangiroRunTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"YangiroStand_R", YangiroStandTex
			, Vector2(0.0f, 1080.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 26, 0.2f);

		petAnimator->CreateAnimation(L"YangiroAttack_RF", YangiroAttackTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 12, 0.2f);
		petAnimator->CreateAnimation(L"YangiroDead_RF", YangiroDeadTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 13, 0.2f);
		petAnimator->CreateAnimation(L"YangiroDefense_RF", YangiroDefenseTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"YangiroHurt_RF", YangiroHurtTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"YangiroRun_RF", YangiroRunTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"YangiroStand_RF", YangiroStandTex
			, Vector2(0.0f, 1260.0f), Vector2(180.0f, 180.0f), Vector2::Zero, 26, 0.2f);


		//manmor Type
		//Mamonas
		petAnimator = new Animator();
		mPetAnimators.insert(std::make_pair(L"Momonas", petAnimator));
		graphics::Texture* MamonasAttackTex = Resources::Find<graphics::Texture>(L"MamonasAttack");
		graphics::Texture* MamonasDeadTex = Resources::Find<graphics::Texture>(L"MamonasDead");
		graphics::Texture* MamonasDefenseTex = Resources::Find<graphics::Texture>(L"MamonasDefense");
		graphics::Texture* MamonasHurtTex = Resources::Find<graphics::Texture>(L"MamonasHurt");
		graphics::Texture* MamonasRunTex = Resources::Find<graphics::Texture>(L"MamonasRun");
		graphics::Texture* MamonasStandTex = Resources::Find<graphics::Texture>(L"MamonasStand");

		petAnimator->CreateAnimation(L"MamonasAttack_F", MamonasAttackTex,
			Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"MamonasDead_F", MamonasDeadTex,
			Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MamonasDefense_F", MamonasDefenseTex,
			Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MamonasHurt_F", MamonasHurtTex,
			Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"MamonasRun_F", MamonasRunTex,
			Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MamonasStand_F", MamonasStandTex,
			Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 47, 0.2f);

		petAnimator->CreateAnimation(L"MamonasAttack_LF", MamonasAttackTex,
			Vector2(0.0f, 220.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"MamonasDead_LF", MamonasDeadTex,
			Vector2(0.0f, 220.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MamonasDefense_LF", MamonasDefenseTex,
			Vector2(0.0f, 220.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MamonasHurt_LF", MamonasHurtTex,
			Vector2(0.0f, 220.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"MamonasRun_LF", MamonasRunTex,
			Vector2(0.0f, 220.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MamonasStand_LF", MamonasStandTex,
			Vector2(0.0f, 220.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 47, 0.2f);

		petAnimator->CreateAnimation(L"MamonasAttack_L", MamonasAttackTex,
			Vector2(0.0f, 440.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"MamonasDead_L", MamonasDeadTex,
			Vector2(0.0f, 440.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MamonasDefense_L", MamonasDefenseTex,
			Vector2(0.0f, 440.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MamonasHurt_L", MamonasHurtTex,
			Vector2(0.0f, 440.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"MamonasRun_L", MamonasRunTex,
			Vector2(0.0f, 440.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MamonasStand_L", MamonasStandTex,
			Vector2(0.0f, 440.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 47, 0.2f);

		petAnimator->CreateAnimation(L"MamonasAttack_LB", MamonasAttackTex,
			Vector2(0.0f, 660.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"MamonasDead_LB", MamonasDeadTex,
			Vector2(0.0f, 660.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MamonasDefense_LB", MamonasDefenseTex,
			Vector2(0.0f, 660.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MamonasHurt_LB", MamonasHurtTex,
			Vector2(0.0f, 660.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"MamonasRun_LB", MamonasRunTex,
			Vector2(0.0f, 660.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MamonasStand_LB", MamonasStandTex,
			Vector2(0.0f, 660.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 47, 0.2f);

		petAnimator->CreateAnimation(L"MamonasAttack_B", MamonasAttackTex,
			Vector2(0.0f, 880.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"MamonasDead_B", MamonasDeadTex,
			Vector2(0.0f, 880.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MamonasDefense_B", MamonasDefenseTex,
			Vector2(0.0f, 880.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MamonasHurt_B", MamonasHurtTex,
			Vector2(0.0f, 880.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"MamonasRun_B", MamonasRunTex,
			Vector2(0.0f, 880.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MamonasStand_B", MamonasStandTex,
			Vector2(0.0f, 880.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 47, 0.2f);

		petAnimator->CreateAnimation(L"MamonasAttack_RB", MamonasAttackTex,
			Vector2(0.0f, 1100.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"MamonasDead_RB", MamonasDeadTex,
			Vector2(0.0f, 1100.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MamonasDefense_RB", MamonasDefenseTex,
			Vector2(0.0f, 1100.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MamonasHurt_RB", MamonasHurtTex,
			Vector2(0.0f, 1100.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"MamonasRun_RB", MamonasRunTex,
			Vector2(0.0f, 1100.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MamonasStand_RB", MamonasStandTex,
			Vector2(0.0f, 1100.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 47, 0.2f);

		petAnimator->CreateAnimation(L"MamonasAttack_R", MamonasAttackTex,
			Vector2(0.0f, 1320.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"MamonasDead_R", MamonasDeadTex,
			Vector2(0.0f, 1320.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MamonasDefense_R", MamonasDefenseTex,
			Vector2(0.0f, 1320.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MamonasHurt_R", MamonasHurtTex,
			Vector2(0.0f, 1320.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"MamonasRun_R", MamonasRunTex,
			Vector2(0.0f, 1320.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MamonasStand_R", MamonasStandTex,
			Vector2(0.0f, 1320.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 47, 0.2f);

		petAnimator->CreateAnimation(L"MamonasAttack_RF", MamonasAttackTex,
			Vector2(0.0f, 1540.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"MamonasDead_RF", MamonasDeadTex,
			Vector2(0.0f, 1540.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MamonasDefense_RF", MamonasDefenseTex,
			Vector2(0.0f, 1540.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MamonasHurt_RF", MamonasHurtTex,
			Vector2(0.0f, 1540.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"MamonasRun_RF", MamonasRunTex,
			Vector2(0.0f, 1540.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MamonasStand_RF", MamonasStandTex,
			Vector2(0.0f, 1540.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 47, 0.2f);


		//Mammo
		petAnimator = new Animator();
		mPetAnimators.insert(std::make_pair(L"Mammo", petAnimator));
		graphics::Texture* MammoAttackTex = Resources::Find<graphics::Texture>(L"MammoAttack");
		graphics::Texture* MammoDeadTex = Resources::Find<graphics::Texture>(L"MammoDead");
		graphics::Texture* MammoDefenseTex = Resources::Find<graphics::Texture>(L"MammoDefense");
		graphics::Texture* MammoHurtTex = Resources::Find<graphics::Texture>(L"MammoHurt");
		graphics::Texture* MammoRunTex = Resources::Find<graphics::Texture>(L"MammoRun");
		graphics::Texture* MammoStandTex = Resources::Find<graphics::Texture>(L"MammoStand");

		petAnimator->CreateAnimation(L"MammoAttack_F", MammoAttackTex,
			Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"MammoDead_F", MammoDeadTex,
			Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammoDefense_F", MammoDefenseTex,
			Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MammoHurt_F", MammoHurtTex,
			Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"MammoRun_F", MammoRunTex,
			Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammoStand_F", MammoStandTex,
			Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 47, 0.2f);

		petAnimator->CreateAnimation(L"MammoAttack_LF", MammoAttackTex,
			Vector2(0.0f, 220.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"MammoDead_LF", MammoDeadTex,
			Vector2(0.0f, 220.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammoDefense_LF", MammoDefenseTex,
			Vector2(0.0f, 220.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MammoHurt_LF", MammoHurtTex,
			Vector2(0.0f, 220.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"MammoRun_LF", MammoRunTex,
			Vector2(0.0f, 220.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammoStand_LF", MammoStandTex,
			Vector2(0.0f, 220.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 47, 0.2f);

		petAnimator->CreateAnimation(L"MammoAttack_L", MammoAttackTex,
			Vector2(0.0f, 440.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"MammoDead_L", MammoDeadTex,
			Vector2(0.0f, 440.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammoDefense_L", MammoDefenseTex,
			Vector2(0.0f, 440.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MammoHurt_L", MammoHurtTex,
			Vector2(0.0f, 440.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"MammoRun_L", MammoRunTex,
			Vector2(0.0f, 440.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammoStand_L", MammoStandTex,
			Vector2(0.0f, 440.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 47, 0.2f);

		petAnimator->CreateAnimation(L"MammoAttack_LB", MammoAttackTex,
			Vector2(0.0f, 660.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"MammoDead_LB", MammoDeadTex,
			Vector2(0.0f, 660.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammoDefense_LB", MammoDefenseTex,
			Vector2(0.0f, 660.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MammoHurt_LB", MammoHurtTex,
			Vector2(0.0f, 660.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"MammoRun_LB", MammoRunTex,
			Vector2(0.0f, 660.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammoStand_LB", MammoStandTex,
			Vector2(0.0f, 660.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 47, 0.2f);

		petAnimator->CreateAnimation(L"MammoAttack_B", MammoAttackTex,
			Vector2(0.0f, 880.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"MammoDead_B", MammoDeadTex,
			Vector2(0.0f, 880.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammoDefense_B", MammoDefenseTex,
			Vector2(0.0f, 880.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MammoHurt_B", MammoHurtTex,
			Vector2(0.0f, 880.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"MammoRun_B", MammoRunTex,
			Vector2(0.0f, 880.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammoStand_B", MammoStandTex,
			Vector2(0.0f, 880.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 47, 0.2f);

		petAnimator->CreateAnimation(L"MammoAttack_RB", MammoAttackTex,
			Vector2(0.0f, 1100.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"MammoDead_RB", MammoDeadTex,
			Vector2(0.0f, 1100.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammoDefense_RB", MammoDefenseTex,
			Vector2(0.0f, 1100.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MammoHurt_RB", MammoHurtTex,
			Vector2(0.0f, 1100.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"MammoRun_RB", MammoRunTex,
			Vector2(0.0f, 1100.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammoStand_RB", MammoStandTex,
			Vector2(0.0f, 1100.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 47, 0.2f);

		petAnimator->CreateAnimation(L"MammoAttack_R", MammoAttackTex,
			Vector2(0.0f, 1320.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"MammoDead_R", MammoDeadTex,
			Vector2(0.0f, 1320.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammoDefense_R", MammoDefenseTex,
			Vector2(0.0f, 1320.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MammoHurt_R", MammoHurtTex,
			Vector2(0.0f, 1320.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"MammoRun_R", MammoRunTex,
			Vector2(0.0f, 1320.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammoStand_R", MammoStandTex,
			Vector2(0.0f, 1320.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 47, 0.2f);

		petAnimator->CreateAnimation(L"MammoAttack_RF", MammoAttackTex,
			Vector2(0.0f, 1540.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"MammoDead_RF", MammoDeadTex,
			Vector2(0.0f, 1540.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammoDefense_RF", MammoDefenseTex,
			Vector2(0.0f, 1540.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MammoHurt_RF", MammoHurtTex,
			Vector2(0.0f, 1540.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"MammoRun_RF", MammoRunTex,
			Vector2(0.0f, 1540.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammoStand_RF", MammoStandTex,
			Vector2(0.0f, 1540.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 47, 0.2f);


		//Mammon
		petAnimator = new Animator();
		mPetAnimators.insert(std::make_pair(L"Mammon", petAnimator));
		graphics::Texture* MammonAttackTex = Resources::Find<graphics::Texture>(L"MammonAttack");
		graphics::Texture* MammonDeadTex = Resources::Find<graphics::Texture>(L"MammonDead");
		graphics::Texture* MammonDefenseTex = Resources::Find<graphics::Texture>(L"MammonDefens");
		graphics::Texture* MammonHurtTex = Resources::Find<graphics::Texture>(L"MammonHurt");
		graphics::Texture* MammonRunTex = Resources::Find<graphics::Texture>(L"MammonRun");
		graphics::Texture* MammonStandTex = Resources::Find<graphics::Texture>(L"MammonStand");

		petAnimator->CreateAnimation(L"MammonAttack_F", MammonAttackTex,
			Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"MammonDead_F", MammonDeadTex,
			Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammonDefens_F", MammonDefenseTex,
			Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MammonHurt_F", MammonHurtTex,
			Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"MammonRun_F", MammonRunTex,
			Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammonStand_F", MammonStandTex,
			Vector2(0.0f, 0.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 47, 0.2f);

		petAnimator->CreateAnimation(L"MammonAttack_LF", MammonAttackTex,
			Vector2(0.0f, 220.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"MammonDead_LF", MammonDeadTex,
			Vector2(0.0f, 220.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammonDefens_LF", MammonDefenseTex,
			Vector2(0.0f, 220.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MammonHurt_LF", MammonHurtTex,
			Vector2(0.0f, 220.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"MammonRun_LF", MammonRunTex,
			Vector2(0.0f, 220.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammonStand_LF", MammonStandTex,
			Vector2(0.0f, 220.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 47, 0.2f);

		petAnimator->CreateAnimation(L"MammonAttack_L", MammonAttackTex,
			Vector2(0.0f, 440.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"MammonDead_L", MammonDeadTex,
			Vector2(0.0f, 440.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammonDefens_L", MammonDefenseTex,
			Vector2(0.0f, 440.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MammonHurt_L", MammonHurtTex,
			Vector2(0.0f, 440.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"MammonRun_L", MammonRunTex,
			Vector2(0.0f, 440.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammonStand_L", MammonStandTex,
			Vector2(0.0f, 440.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 47, 0.2f);

		petAnimator->CreateAnimation(L"MammonAttack_LB", MammonAttackTex,
			Vector2(0.0f, 660.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"MammonDead_LB", MammonDeadTex,
			Vector2(0.0f, 660.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammonDefens_LB", MammonDefenseTex,
			Vector2(0.0f, 660.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MammonHurt_LB", MammonHurtTex,
			Vector2(0.0f, 660.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"MammonRun_LB", MammonRunTex,
			Vector2(0.0f, 660.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammonStand_LB", MammonStandTex,
			Vector2(0.0f, 660.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 47, 0.2f);

		petAnimator->CreateAnimation(L"MammonAttack_B", MammonAttackTex,
			Vector2(0.0f, 880.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"MammonDead_B", MammonDeadTex,
			Vector2(0.0f, 880.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammonDefens_B", MammonDefenseTex,
			Vector2(0.0f, 880.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MammonHurt_B", MammonHurtTex,
			Vector2(0.0f, 880.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"MammonRun_B", MammonRunTex,
			Vector2(0.0f, 880.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammonStand_B", MammonStandTex,
			Vector2(0.0f, 880.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 47, 0.2f);

		petAnimator->CreateAnimation(L"MammonAttack_RB", MammonAttackTex,
			Vector2(0.0f, 1100.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"MammonDead_RB", MammonDeadTex,
			Vector2(0.0f, 1100.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammonDefens_RB", MammonDefenseTex,
			Vector2(0.0f, 1100.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MammonHurt_RB", MammonHurtTex,
			Vector2(0.0f, 1100.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"MammonRun_RB", MammonRunTex,
			Vector2(0.0f, 1100.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammonStand_RB", MammonStandTex,
			Vector2(0.0f, 1100.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 47, 0.2f);

		petAnimator->CreateAnimation(L"MammonAttack_R", MammonAttackTex,
			Vector2(0.0f, 1320.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"MammonDead_R", MammonDeadTex,
			Vector2(0.0f, 1320.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammonDefens_R", MammonDefenseTex,
			Vector2(0.0f, 1320.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MammonHurt_R", MammonHurtTex,
			Vector2(0.0f, 1320.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"MammonRun_R", MammonRunTex,
			Vector2(0.0f, 1320.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammonStand_R", MammonStandTex,
			Vector2(0.0f, 1320.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 47, 0.2f);

		petAnimator->CreateAnimation(L"MammonAttack_RF", MammonAttackTex,
			Vector2(0.0f, 1540.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 10, 0.2f);
		petAnimator->CreateAnimation(L"MammonDead_RF", MammonDeadTex,
			Vector2(0.0f, 1540.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammonDefens_RF", MammonDefenseTex,
			Vector2(0.0f, 1540.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 1, 0.2f);
		petAnimator->CreateAnimation(L"MammonHurt_RF", MammonHurtTex,
			Vector2(0.0f, 1540.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 2, 0.2f);
		petAnimator->CreateAnimation(L"MammonRun_RF", MammonRunTex,
			Vector2(0.0f, 1540.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 6, 0.2f);
		petAnimator->CreateAnimation(L"MammonStand_RF", MammonStandTex,
			Vector2(0.0f, 1540.0f), Vector2(220.0f, 220.0f), Vector2::Zero, 47, 0.2f);



		//敲饭捞绢
		Animator* playerAnimator = new Animator();
		mPlayerAnimators.insert(std::make_pair(L"BlueBasic", playerAnimator));
		//BlueType
		//BlueBasic
		graphics::Texture* BlueAttackBasicTex = Resources::Find<graphics::Texture>(L"BlueAttackBasic");
		graphics::Texture* BlueDeadBasicTex = Resources::Find<graphics::Texture>(L"BlueDeadBasic");
		graphics::Texture* BlueDefenseBasicTex = Resources::Find<graphics::Texture>(L"BlueDefenseBasic");
		graphics::Texture* BlueHurtBasicTex = Resources::Find<graphics::Texture>(L"BlueHurtBasic");
		graphics::Texture* BlueRunBasicTex = Resources::Find<graphics::Texture>(L"BlueRunBasic");
		graphics::Texture* BlueStandBasicTex = Resources::Find<graphics::Texture>(L"BlueStandBasic");

		playerAnimator->CreateAnimation(L"BlueAttackBasic_F", BlueAttackBasicTex
			, Vector2(0.0f, 0.0f), Vector2(203.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDeadBasic_F", BlueDeadBasicTex
			, Vector2(0.0f, 0.0f), Vector2(174.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDefenseBasic_F", BlueDefenseBasicTex
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueHurtBasic_F", BlueHurtBasicTex
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueRunBasic_F", BlueRunBasicTex
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueStandBasic_F", BlueStandBasicTex
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 4, 0.2f);

		playerAnimator->CreateAnimation(L"BlueAttackBasic_LF", BlueAttackBasicTex
			, Vector2(0.0f, 100.0f), Vector2(203.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDeadBasic_LF", BlueDeadBasicTex
			, Vector2(0.0f, 100.0f), Vector2(174.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDefenseBasic_LF", BlueDefenseBasicTex
			, Vector2(0.0f, 100.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueHurtBasic_LF", BlueHurtBasicTex
			, Vector2(0.0f, 100.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueRunBasic_LF", BlueRunBasicTex
			, Vector2(0.0f, 100.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueStandBasic_LF", BlueStandBasicTex
			, Vector2(0.0f, 100.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 4, 0.2f);

		playerAnimator->CreateAnimation(L"BlueAttackBasic_L", BlueAttackBasicTex
			, Vector2(0.0f, 200.0f), Vector2(203.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDeadBasic_L", BlueDeadBasicTex
			, Vector2(0.0f, 200.0f), Vector2(174.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDefenseBasic_L", BlueDefenseBasicTex
			, Vector2(0.0f, 200.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueHurtBasic_L", BlueHurtBasicTex
			, Vector2(0.0f, 200.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueRunBasic_L", BlueRunBasicTex
			, Vector2(0.0f, 200.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueStandBasic_L", BlueStandBasicTex
			, Vector2(0.0f, 200.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 4, 0.2f);

		playerAnimator->CreateAnimation(L"BlueAttackBasic_LB", BlueAttackBasicTex
			, Vector2(0.0f, 300.0f), Vector2(203.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDeadBasic_LB", BlueDeadBasicTex
			, Vector2(0.0f, 300.0f), Vector2(174.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDefenseBasic_LB", BlueDefenseBasicTex
			, Vector2(0.0f, 300.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueHurtBasic_LB", BlueHurtBasicTex
			, Vector2(0.0f, 300.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueRunBasic_LB", BlueRunBasicTex
			, Vector2(0.0f, 300.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueStandBasic_LB", BlueStandBasicTex
			, Vector2(0.0f, 300.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 4, 0.2f);

		playerAnimator->CreateAnimation(L"BlueAttackBasic_B", BlueAttackBasicTex
			, Vector2(0.0f, 400.0f), Vector2(203.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDeadBasic_B", BlueDeadBasicTex
			, Vector2(0.0f, 400.0f), Vector2(174.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDefenseBasic_B", BlueDefenseBasicTex
			, Vector2(0.0f, 400.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueHurtBasic_B", BlueHurtBasicTex
			, Vector2(0.0f, 400.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueRunBasic_B", BlueRunBasicTex
			, Vector2(0.0f, 400.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueStandBasic_B", BlueStandBasicTex
			, Vector2(0.0f, 400.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 4, 0.2f);

		playerAnimator->CreateAnimation(L"BlueAttackBasic_RB", BlueAttackBasicTex
			, Vector2(0.0f, 500.0f), Vector2(203.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDeadBasic_RB", BlueDeadBasicTex
			, Vector2(0.0f, 500.0f), Vector2(174.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDefenseBasic_RB", BlueDefenseBasicTex
			, Vector2(0.0f, 500.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueHurtBasic_RB", BlueHurtBasicTex
			, Vector2(0.0f, 500.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueRunBasic_RB", BlueRunBasicTex
			, Vector2(0.0f, 500.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueStandBasic_RB", BlueStandBasicTex
			, Vector2(0.0f, 500.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 4, 0.2f);

		playerAnimator->CreateAnimation(L"BlueAttackBasic_R", BlueAttackBasicTex
			, Vector2(0.0f, 600.0f), Vector2(203.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDeadBasic_R", BlueDeadBasicTex
			, Vector2(0.0f, 600.0f), Vector2(174.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDefenseBasic_R", BlueDefenseBasicTex
			, Vector2(0.0f, 600.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueHurtBasic_R", BlueHurtBasicTex
			, Vector2(0.0f, 600.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueRunBasic_R", BlueRunBasicTex
			, Vector2(0.0f, 600.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueStandBasic_R", BlueStandBasicTex
			, Vector2(0.0f, 600.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 4, 0.2f);

		playerAnimator->CreateAnimation(L"BlueAttackBasic_RF", BlueAttackBasicTex
			, Vector2(0.0f, 700.0f), Vector2(203.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDeadBasic_RF", BlueDeadBasicTex
			, Vector2(0.0f, 700.0f), Vector2(174.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDefenseBasic_RF", BlueDefenseBasicTex
			, Vector2(0.0f, 700.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueHurtBasic_RF", BlueHurtBasicTex
			, Vector2(0.0f, 700.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueRunBasic_RF", BlueRunBasicTex
			, Vector2(0.0f, 700.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueStandBasic_RF", BlueStandBasicTex
			, Vector2(0.0f, 700.0f), Vector2(87.0f, 100.0f), Vector2::Zero, 4, 0.2f);

		//BlueClub
		playerAnimator = new Animator();
		mPlayerAnimators.insert(std::make_pair(L"BlueClub", playerAnimator));
		graphics::Texture* BlueAttackClubTex = Resources::Find<graphics::Texture>(L"BlueAttackClub");
		graphics::Texture* BlueDeadClubTex = Resources::Find<graphics::Texture>(L"BlueDeadClub");
		graphics::Texture* BlueDefenseClubTex = Resources::Find<graphics::Texture>(L"BlueDefenseClub");
		graphics::Texture* BlueHurtClubTex = Resources::Find<graphics::Texture>(L"BlueHurtClub");
		graphics::Texture* BlueRunClubTex = Resources::Find<graphics::Texture>(L"BlueRunClub");
		graphics::Texture* BlueStandClubTex = Resources::Find<graphics::Texture>(L"BlueStandClub");

		playerAnimator->CreateAnimation(L"BlueAttackClub_F", BlueAttackClubTex
			, Vector2(0.0f, 0.0f), Vector2(348.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDeadClub_F", BlueDeadClubTex
			, Vector2(0.0f, 0.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDefenseClub_F", BlueDefenseClubTex
			, Vector2(0.0f, 0.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueHurtClub_F", BlueHurtClubTex
			, Vector2(0.0f, 0.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueRunClub_F", BlueRunClubTex
			, Vector2(0.0f, 0.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueStandClub_F", BlueStandClubTex
			, Vector2(0.0f, 0.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 4, 0.2f);

		playerAnimator->CreateAnimation(L"BlueAttackClub_LF", BlueAttackClubTex
			, Vector2(0.0f, 130.0f), Vector2(348.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDeadClub_LF", BlueDeadClubTex
			, Vector2(0.0f, 130.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDefenseClub_LF", BlueDefenseClubTex
			, Vector2(0.0f, 130.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueHurtClub_LF", BlueHurtClubTex
			, Vector2(0.0f, 130.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueRunClub_LF", BlueRunClubTex
			, Vector2(0.0f, 130.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueStandClub_LF", BlueStandClubTex
			, Vector2(0.0f, 130.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 4, 0.2f);

		playerAnimator->CreateAnimation(L"BlueAttackClub_L", BlueAttackClubTex
			, Vector2(0.0f, 260.0f), Vector2(348.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDeadClub_L", BlueDeadClubTex
			, Vector2(0.0f, 260.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDefenseClub_L", BlueDefenseClubTex
			, Vector2(0.0f, 260.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueHurtClub_L", BlueHurtClubTex
			, Vector2(0.0f, 260.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueRunClub_L", BlueRunClubTex
			, Vector2(0.0f, 260.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueStandClub_L", BlueStandClubTex
			, Vector2(0.0f, 260.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 4, 0.2f);

		playerAnimator->CreateAnimation(L"BlueAttackClub_LB", BlueAttackClubTex
			, Vector2(0.0f, 390.0f), Vector2(348.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDeadClub_LB", BlueDeadClubTex
			, Vector2(0.0f, 390.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDefenseClub_LB", BlueDefenseClubTex
			, Vector2(0.0f, 390.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueHurtClub_LB", BlueHurtClubTex
			, Vector2(0.0f, 390.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueRunClub_LB", BlueRunClubTex
			, Vector2(0.0f, 390.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueStandClub_LB", BlueStandClubTex
			, Vector2(0.0f, 390.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 4, 0.2f);

		playerAnimator->CreateAnimation(L"BlueAttackClub_B", BlueAttackClubTex
			, Vector2(0.0f, 520.0f), Vector2(348.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDeadClub_B", BlueDeadClubTex
			, Vector2(0.0f, 520.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDefenseClub_B", BlueDefenseClubTex
			, Vector2(0.0f, 520.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueHurtClub_B", BlueHurtClubTex
			, Vector2(0.0f, 520.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueRunClub_B", BlueRunClubTex
			, Vector2(0.0f, 520.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueStandClub_B", BlueStandClubTex
			, Vector2(0.0f, 520.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 4, 0.2f);

		playerAnimator->CreateAnimation(L"BlueAttackClub_RB", BlueAttackClubTex
			, Vector2(0.0f, 650.0f), Vector2(348.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDeadClub_RB", BlueDeadClubTex
			, Vector2(0.0f, 650.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDefenseClub_RB", BlueDefenseClubTex
			, Vector2(0.0f, 650.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueHurtClub_RB", BlueHurtClubTex
			, Vector2(0.0f, 650.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueRunClub_RB", BlueRunClubTex
			, Vector2(0.0f, 650.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueStandClub_RB", BlueStandClubTex
			, Vector2(0.0f, 650.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 4, 0.2f);

		playerAnimator->CreateAnimation(L"BlueAttackClub_R", BlueAttackClubTex
			, Vector2(0.0f, 780.0f), Vector2(348.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDeadClub_R", BlueDeadClubTex
			, Vector2(0.0f, 780.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDefenseClub_R", BlueDefenseClubTex
			, Vector2(0.0f, 780.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueHurtClub_R", BlueHurtClubTex
			, Vector2(0.0f, 780.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueRunClub_R", BlueRunClubTex
			, Vector2(0.0f, 780.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueStandClub_R", BlueStandClubTex
			, Vector2(0.0f, 780.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 4, 0.2f);

		playerAnimator->CreateAnimation(L"BlueAttackClub_RF", BlueAttackClubTex
			, Vector2(0.0f, 910.0f), Vector2(348.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDeadClub_RF", BlueDeadClubTex
			, Vector2(0.0f, 910.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDefenseClub_RF", BlueDefenseClubTex
			, Vector2(0.0f, 910.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueHurtClub_RF", BlueHurtClubTex
			, Vector2(0.0f, 910.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueRunClub_RF", BlueRunClubTex
			, Vector2(0.0f, 910.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueStandClub_RF", BlueStandClubTex
			, Vector2(0.0f, 910.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 4, 0.2f);

		//BlueHatchat
		playerAnimator = new Animator();
		mPlayerAnimators.insert(std::make_pair(L"BlueHatchat", playerAnimator));
		graphics::Texture* BlueAttackHatchatTex = Resources::Find<graphics::Texture>(L"BlueAttackHatchat");
		graphics::Texture* BlueDeadHatchatTex = Resources::Find<graphics::Texture>(L"BlueDeadHatchat");
		graphics::Texture* BlueDefenseHatchatTex = Resources::Find<graphics::Texture>(L"BlueDefenseHatchat");
		graphics::Texture* BlueHurtHatchatTex = Resources::Find<graphics::Texture>(L"BlueHurtHatchat");
		graphics::Texture* BlueRunHatchatTex = Resources::Find<graphics::Texture>(L"BlueRunHatchat");
		graphics::Texture* BlueStandHatchatTex = Resources::Find<graphics::Texture>(L"BlueStandHatchat");

		playerAnimator->CreateAnimation(L"BlueAttackHatchat_F", BlueAttackHatchatTex
			, Vector2(0.0f, 0.0f), Vector2(348.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDeadHatchat_F", BlueDeadHatchatTex
			, Vector2(0.0f, 0.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDefenseHatchat_F", BlueDefenseHatchatTex
			, Vector2(0.0f, 0.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueHurtHatchat_F", BlueHurtHatchatTex
			, Vector2(0.0f, 0.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueRunHatchat_F", BlueRunHatchatTex
			, Vector2(0.0f, 0.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueStandHatchat_F", BlueStandHatchatTex
			, Vector2(0.0f, 0.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 4, 0.2f);

		playerAnimator->CreateAnimation(L"BlueAttackHatchat_LF", BlueAttackHatchatTex
			, Vector2(0.0f, 130.0f), Vector2(348.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDeadHatchat_LF", BlueDeadHatchatTex
			, Vector2(0.0f, 130.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDefenseHatchat_LF", BlueDefenseHatchatTex
			, Vector2(0.0f, 130.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueHurtHatchat_LF", BlueHurtHatchatTex
			, Vector2(0.0f, 130.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueRunHatchat_LF", BlueRunHatchatTex
			, Vector2(0.0f, 130.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueStandHatchat_LF", BlueStandHatchatTex
			, Vector2(0.0f, 130.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 4, 0.2f);

		playerAnimator->CreateAnimation(L"BlueAttackHatchat_L", BlueAttackHatchatTex
			, Vector2(0.0f, 260.0f), Vector2(348.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDeadHatchat_L", BlueDeadHatchatTex
			, Vector2(0.0f, 260.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDefenseHatchat_L", BlueDefenseHatchatTex
			, Vector2(0.0f, 260.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueHurtHatchat_L", BlueHurtHatchatTex
			, Vector2(0.0f, 260.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueRunHatchat_L", BlueRunHatchatTex
			, Vector2(0.0f, 260.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueStandHatchat_L", BlueStandHatchatTex
			, Vector2(0.0f, 260.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 4, 0.2f);

		playerAnimator->CreateAnimation(L"BlueAttackHatchat_LB", BlueAttackHatchatTex
			, Vector2(0.0f, 390.0f), Vector2(348.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDeadHatchat_LB", BlueDeadHatchatTex
			, Vector2(0.0f, 390.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDefenseHatchat_LB", BlueDefenseHatchatTex
			, Vector2(0.0f, 390.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueHurtHatchat_LB", BlueHurtHatchatTex
			, Vector2(0.0f, 390.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueRunHatchat_LB", BlueRunHatchatTex
			, Vector2(0.0f, 390.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueStandHatchat_LB", BlueStandHatchatTex
			, Vector2(0.0f, 390.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 4, 0.2f);

		playerAnimator->CreateAnimation(L"BlueAttackHatchat_B", BlueAttackHatchatTex
			, Vector2(0.0f, 520.0f), Vector2(348.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDeadHatchat_B", BlueDeadHatchatTex
			, Vector2(0.0f, 520.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDefenseHatchat_B", BlueDefenseHatchatTex
			, Vector2(0.0f, 520.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueHurtHatchat_B", BlueHurtHatchatTex
			, Vector2(0.0f, 520.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueRunHatchat_B", BlueRunHatchatTex
			, Vector2(0.0f, 520.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueStandHatchat_B", BlueStandHatchatTex
			, Vector2(0.0f, 520.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 4, 0.2f);

		playerAnimator->CreateAnimation(L"BlueAttackHatchat_RB", BlueAttackHatchatTex
			, Vector2(0.0f, 650.0f), Vector2(348.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDeadHatchat_RB", BlueDeadHatchatTex
			, Vector2(0.0f, 650.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDefenseHatchat_RB", BlueDefenseHatchatTex
			, Vector2(0.0f, 650.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueHurtHatchat_RB", BlueHurtHatchatTex
			, Vector2(0.0f, 650.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueRunHatchat_RB", BlueRunHatchatTex
			, Vector2(0.0f, 650.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueStandHatchat_RB", BlueStandHatchatTex
			, Vector2(0.0f, 650.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 4, 0.2f);

		playerAnimator->CreateAnimation(L"BlueAttackHatchat_R", BlueAttackHatchatTex
			, Vector2(0.0f, 780.0f), Vector2(348.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDeadHatchat_R", BlueDeadHatchatTex
			, Vector2(0.0f, 780.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDefenseHatchat_R", BlueDefenseHatchatTex
			, Vector2(0.0f, 780.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueHurtHatchat_R", BlueHurtHatchatTex
			, Vector2(0.0f, 780.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueRunHatchat_R", BlueRunHatchatTex
			, Vector2(0.0f, 780.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueStandHatchat_R", BlueStandHatchatTex
			, Vector2(0.0f, 780.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 4, 0.2f);

		playerAnimator->CreateAnimation(L"BlueAttackHatchat_RF", BlueAttackHatchatTex
			, Vector2(0.0f, 910.0f), Vector2(348.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDeadHatchat_RF", BlueDeadHatchatTex
			, Vector2(0.0f, 910.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueDefenseHatchat_RF", BlueDefenseHatchatTex
			, Vector2(0.0f, 910.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueHurtHatchat_RF", BlueHurtHatchatTex
			, Vector2(0.0f, 910.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"BlueRunHatchat_RF", BlueRunHatchatTex
			, Vector2(0.0f, 910.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"BlueStandHatchat_RF", BlueStandHatchatTex
			, Vector2(0.0f, 910.0f), Vector2(110.0f, 130.0f), Vector2::Zero, 4, 0.2f);

		//RedType
		//RedBasic
		playerAnimator = new Animator();
		mPlayerAnimators.insert(std::make_pair(L"RedBasic", playerAnimator));
		graphics::Texture* RedAttackBasicTex = Resources::Find<graphics::Texture>(L"RedAttackBasic");
		graphics::Texture* RedDeadBasicTex = Resources::Find<graphics::Texture>(L"RedDeadBasic");
		graphics::Texture* RedDefenseBasicTex = Resources::Find<graphics::Texture>(L"RedDefenseBasic");
		graphics::Texture* RedHurtBasicTex = Resources::Find<graphics::Texture>(L"RedHurtBasic");
		graphics::Texture* RedRunBasicTex = Resources::Find<graphics::Texture>(L"RedRunBasic");
		graphics::Texture* RedStandBasicTex = Resources::Find<graphics::Texture>(L"RedStandBasic");

		//局聪皋捞记 父甸扁

		//菊
		playerAnimator->CreateAnimation(L"RedAttackBasic_F", RedAttackBasicTex
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 12, 0.2f);
		playerAnimator->CreateAnimation(L"RedDeadBasic_F", RedDeadBasicTex
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedDefenseBasic_F", RedDefenseBasicTex
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedHurtBasic_F", RedHurtBasicTex
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedRunBasic_F", RedRunBasicTex
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedStandBasic_F", RedStandBasicTex
			, Vector2(0.0f, 0.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 4, 0.2f);


		playerAnimator->CreateAnimation(L"RedAttackBasic_LF", RedAttackBasicTex
			, Vector2(0.0f, 84.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 12, 0.2f);
		playerAnimator->CreateAnimation(L"RedDeadBasic_LF", RedDeadBasicTex
			, Vector2(0.0f, 84.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedDefenseBasic_LF", RedDefenseBasicTex
			, Vector2(0.0f, 84.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedHurtBasic_LF", RedHurtBasicTex
			, Vector2(0.0f, 84.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedRunBasic_LF", RedRunBasicTex
			, Vector2(0.0f, 84.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedStandBasic_LF", RedStandBasicTex
			, Vector2(0.0f, 84.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 4, 0.2f);


		playerAnimator->CreateAnimation(L"RedAttackBasic_L", RedAttackBasicTex
			, Vector2(0.0f, 168.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 12, 0.2f);
		playerAnimator->CreateAnimation(L"RedDeadBasic_L", RedDeadBasicTex
			, Vector2(0.0f, 168.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedDefenseBasic_L", RedDefenseBasicTex
			, Vector2(0.0f, 168.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedHurtBasic_L", RedHurtBasicTex
			, Vector2(0.0f, 168.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedRunBasic_L", RedRunBasicTex
			, Vector2(0.0f, 168.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedStandBasic_L", RedStandBasicTex
			, Vector2(0.0f, 168.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 4, 0.2f);


		playerAnimator->CreateAnimation(L"RedAttackBasic_LB", RedAttackBasicTex
			, Vector2(0.0f, 252.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 12, 0.2f);
		playerAnimator->CreateAnimation(L"RedDeadBasic_LB", RedDeadBasicTex
			, Vector2(0.0f, 252.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedDefenseBasic_LB", RedDefenseBasicTex
			, Vector2(0.0f, 252.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedHurtBasic_LB", RedHurtBasicTex
			, Vector2(0.0f, 252.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedRunBasic_LB", RedRunBasicTex
			, Vector2(0.0f, 252.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedStandBasic_LB", RedStandBasicTex
			, Vector2(0.0f, 252.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 4, 0.2f);


		playerAnimator->CreateAnimation(L"RedAttackBasic_B", RedAttackBasicTex
			, Vector2(0.0f, 336.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 12, 0.2f);
		playerAnimator->CreateAnimation(L"RedDeadBasic_B", RedDeadBasicTex
			, Vector2(0.0f, 336.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedDefenseBasic_B", RedDefenseBasicTex
			, Vector2(0.0f, 336.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedHurtBasic_B", RedHurtBasicTex
			, Vector2(0.0f, 336.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedRunBasic_B", RedRunBasicTex
			, Vector2(0.0f, 336.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedStandBasic_B", RedStandBasicTex
			, Vector2(0.0f, 336.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 4, 0.2f);


		playerAnimator->CreateAnimation(L"RedAttackBasic_RB", RedAttackBasicTex
			, Vector2(0.0f, 420.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 12, 0.2f);
		playerAnimator->CreateAnimation(L"RedDeadBasic_RB", RedDeadBasicTex
			, Vector2(0.0f, 420.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedDefenseBasic_RB", RedDefenseBasicTex
			, Vector2(0.0f, 420.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedHurtBasic_RB", RedHurtBasicTex
			, Vector2(0.0f, 420.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedRunBasic_RB", RedRunBasicTex
			, Vector2(0.0f, 420.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedStandBasic_RB", RedStandBasicTex
			, Vector2(0.0f, 420.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 4, 0.2f);


		playerAnimator->CreateAnimation(L"RedAttackBasic_R", RedAttackBasicTex
			, Vector2(0.0f, 504.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 12, 0.2f);
		playerAnimator->CreateAnimation(L"RedDeadBasic_R", RedDeadBasicTex
			, Vector2(0.0f, 504.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedDefenseBasic_R", RedDefenseBasicTex
			, Vector2(0.0f, 504.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedHurtBasic_R", RedHurtBasicTex
			, Vector2(0.0f, 504.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedRunBasic_R", RedRunBasicTex
			, Vector2(0.0f, 504.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedStandBasic_R", RedStandBasicTex
			, Vector2(0.0f, 504.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 4, 0.2f);


		playerAnimator->CreateAnimation(L"RedAttackBasic_RF", RedAttackBasicTex
			, Vector2(0.0f, 588.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 12, 0.2f);
		playerAnimator->CreateAnimation(L"RedDeadBasic_RF", RedDeadBasicTex
			, Vector2(0.0f, 588.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedDefenseBasic_RF", RedDefenseBasicTex
			, Vector2(0.0f, 588.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedHurtBasic_RF", RedHurtBasicTex
			, Vector2(0.0f, 588.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedRunBasic_RF", RedRunBasicTex
			, Vector2(0.0f, 588.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedStandBasic_RF", RedStandBasicTex
			, Vector2(0.0f, 588.0f), Vector2(87.0f, 84.0f), Vector2::Zero, 4, 0.2f);


		//RedClub
		playerAnimator = new Animator();
		mPlayerAnimators.insert(std::make_pair(L"RedClub", playerAnimator));
		graphics::Texture* RedAttackClubTex = Resources::Find<graphics::Texture>(L"RedAttackClub");
		graphics::Texture* RedDeadClubTex = Resources::Find<graphics::Texture>(L"RedDeadClub");
		graphics::Texture* RedDefenseClubTex = Resources::Find<graphics::Texture>(L"RedDefenseClub");
		graphics::Texture* RedHurtClubTex = Resources::Find<graphics::Texture>(L"RedHurtClub");
		graphics::Texture* RedRunClubTex = Resources::Find<graphics::Texture>(L"RedRunClub");
		graphics::Texture* RedStandClubTex = Resources::Find<graphics::Texture>(L"RedStandClub");

		//局聪皋捞记 父甸扁
		playerAnimator->CreateAnimation(L"RedAttackClub_F", RedAttackClubTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 12, 0.2f);
		playerAnimator->CreateAnimation(L"RedDeadClub_F", RedDeadClubTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedDefenseClub_F", RedDefenseClubTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedHurtClub_F", RedHurtClubTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedRunClub_F", RedRunClubTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedStandClub_F", RedStandClubTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);


		playerAnimator->CreateAnimation(L"RedAttackClub_LF", RedAttackClubTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 12, 0.2f);
		playerAnimator->CreateAnimation(L"RedDeadClub_LF", RedDeadClubTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedDefenseClub_LF", RedDefenseClubTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedHurtClub_LF", RedHurtClubTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedRunClub_LF", RedRunClubTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedStandClub_LF", RedStandClubTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);


		playerAnimator->CreateAnimation(L"RedAttackClub_L", RedAttackClubTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 12, 0.2f);
		playerAnimator->CreateAnimation(L"RedDeadClub_L", RedDeadClubTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedDefenseClub_L", RedDefenseClubTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedHurtClub_L", RedHurtClubTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedRunClub_L", RedRunClubTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedStandClub_L", RedStandClubTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);

		playerAnimator->CreateAnimation(L"RedAttackClub_LB", RedAttackClubTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 12, 0.2f);
		playerAnimator->CreateAnimation(L"RedDeadClub_LB", RedDeadClubTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedDefenseClub_LB", RedDefenseClubTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedHurtClub_LB", RedHurtClubTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedRunClub_LB", RedRunClubTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedStandClub_LB", RedStandClubTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);

		playerAnimator->CreateAnimation(L"RedAttackClub_B", RedAttackClubTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 12, 0.2f);
		playerAnimator->CreateAnimation(L"RedDeadClub_B", RedDeadClubTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedDefenseClub_B", RedDefenseClubTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedHurtClub_B", RedHurtClubTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedRunClub_B", RedRunClubTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedStandClub_B", RedStandClubTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);


		playerAnimator->CreateAnimation(L"RedAttackClub_RB", RedAttackClubTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 12, 0.2f);
		playerAnimator->CreateAnimation(L"RedDeadClub_RB", RedDeadClubTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedDefenseClub_RB", RedDefenseClubTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedHurtClub_RB", RedHurtClubTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedRunClub_RB", RedRunClubTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedStandClub_RB", RedStandClubTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);


		playerAnimator->CreateAnimation(L"RedAttackClub_R", RedAttackClubTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 12, 0.2f);
		playerAnimator->CreateAnimation(L"RedDeadClub_R", RedDeadClubTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedDefenseClub_R", RedDefenseClubTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedHurtClub_R", RedHurtClubTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedRunClub_R", RedRunClubTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedStandClub_R", RedStandClubTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);


		playerAnimator->CreateAnimation(L"RedAttackClub_RF", RedAttackClubTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 12, 0.2f);
		playerAnimator->CreateAnimation(L"RedDeadClub_RF", RedDeadClubTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedDefenseClub_RF", RedDefenseClubTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedHurtClub_RF", RedHurtClubTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedRunClub_RF", RedRunClubTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedStandClub_RF", RedStandClubTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);

		//RedHatchat
		playerAnimator = new Animator();
		mPlayerAnimators.insert(std::make_pair(L"RedHatchat", playerAnimator));
		graphics::Texture* RedAttackHatchatTex = Resources::Find<graphics::Texture>(L"RedAttackHatchat");
		graphics::Texture* RedDeadHatchatTex = Resources::Find<graphics::Texture>(L"RedDeadHatchat");
		graphics::Texture* RedDefenseHatchatTex = Resources::Find<graphics::Texture>(L"RedDefenseHatchat");
		graphics::Texture* RedHurtHatchatTex = Resources::Find<graphics::Texture>(L"RedHurtHatchat");
		graphics::Texture* RedRunHatchatTex = Resources::Find<graphics::Texture>(L"RedRunHatchat");
		graphics::Texture* RedStandHatchatTex = Resources::Find<graphics::Texture>(L"RedStandHatchat");

		//局聪皋捞记 父甸扁
		//菊
		playerAnimator->CreateAnimation(L"RedAttackHatchat_F", RedAttackHatchatTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 12, 0.2f);
		playerAnimator->CreateAnimation(L"RedDeadHatchat_F", RedDeadHatchatTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedDefenseHatchat_F", RedDefenseHatchatTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedHurtHatchat_F", RedHurtHatchatTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedRunHatchat_F", RedRunHatchatTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedStandHatchat_F", RedStandHatchatTex
			, Vector2(0.0f, 0.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);

		//谅菊
		playerAnimator->CreateAnimation(L"RedAttackHatchat_LF", RedAttackHatchatTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 12, 0.2f);
		playerAnimator->CreateAnimation(L"RedDeadHatchat_LF", RedDeadHatchatTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedDefenseHatchat_LF", RedDefenseHatchatTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedHurtHatchat_LF", RedHurtHatchatTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedRunHatchat_LF", RedRunHatchatTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedStandHatchat_LF", RedStandHatchatTex
			, Vector2(0.0f, 100.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);

		//谅
		playerAnimator->CreateAnimation(L"RedAttackHatchat_L", RedAttackHatchatTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 12, 0.2f);
		playerAnimator->CreateAnimation(L"RedDeadHatchat_L", RedDeadHatchatTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedDefenseHatchat_L", RedDefenseHatchatTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedHurtHatchat_L", RedHurtHatchatTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedRunHatchat_L", RedRunHatchatTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedStandHatchat_L", RedStandHatchatTex
			, Vector2(0.0f, 200.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);

		//谅第
		playerAnimator->CreateAnimation(L"RedAttackHatchat_LB", RedAttackHatchatTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 12, 0.2f);
		playerAnimator->CreateAnimation(L"RedDeadHatchat_LB", RedDeadHatchatTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedDefenseHatchat_LB", RedDefenseHatchatTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedHurtHatchat_LB", RedHurtHatchatTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedRunHatchat_LB", RedRunHatchatTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedStandHatchat_LB", RedStandHatchatTex
			, Vector2(0.0f, 300.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);

		//第
		playerAnimator->CreateAnimation(L"RedAttackHatchat_B", RedAttackHatchatTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 12, 0.2f);
		playerAnimator->CreateAnimation(L"RedDeadHatchat_B", RedDeadHatchatTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedDefenseHatchat_B", RedDefenseHatchatTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedHurtHatchat_B", RedHurtHatchatTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedRunHatchat_B", RedRunHatchatTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedStandHatchat_B", RedStandHatchatTex
			, Vector2(0.0f, 400.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);

		//快第
		playerAnimator->CreateAnimation(L"RedAttackHatchat_RB", RedAttackHatchatTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 12, 0.2f);
		playerAnimator->CreateAnimation(L"RedDeadHatchat_RB", RedDeadHatchatTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedDefenseHatchat_RB", RedDefenseHatchatTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedHurtHatchat_RB", RedHurtHatchatTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedRunHatchat_RB", RedRunHatchatTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedStandHatchat_RB", RedStandHatchatTex
			, Vector2(0.0f, 500.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);

		//快
		playerAnimator->CreateAnimation(L"RedAttackHatchat_R", RedAttackHatchatTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 12, 0.2f);
		playerAnimator->CreateAnimation(L"RedDeadHatchat_R", RedDeadHatchatTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedDefenseHatchat_R", RedDefenseHatchatTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedHurtHatchat_R", RedHurtHatchatTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedRunHatchat_R", RedRunHatchatTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedStandHatchat_R", RedStandHatchatTex
			, Vector2(0.0f, 600.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);

		//快菊
		playerAnimator->CreateAnimation(L"RedAttackHatchat_RF", RedAttackHatchatTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 12, 0.2f);
		playerAnimator->CreateAnimation(L"RedDeadHatchat_RF", RedDeadHatchatTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedDefenseHatchat_RF", RedDefenseHatchatTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedHurtHatchat_RF", RedHurtHatchatTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 2, 0.2f);
		playerAnimator->CreateAnimation(L"RedRunHatchat_RF", RedRunHatchatTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 6, 0.2f);
		playerAnimator->CreateAnimation(L"RedStandHatchat_RF", RedStandHatchatTex
			, Vector2(0.0f, 700.0f), Vector2(100.0f, 100.0f), Vector2::Zero, 4, 0.2f);
	}

}