#include "prBattleManager.h"
#include "prSceneManager.h"

namespace pr
{
	pr::BattleManager::BattleManager()
		:mPlayer{}
		, mMyPet{}
		, mEnemyPet{}
		, mPlayerNumber(0)
		, mEnemyNumber(0)
	{
		mPlayer.reserve(1);
		mMyPet.reserve(5);
		mEnemyPet.reserve(5);
	}

	pr::BattleManager::~BattleManager()
	{
	}

	void pr::BattleManager::Battle()
	{
		while (true)
		{
			//플레이어 & 내 펫 활동
			PlayerTurn();

			//배틀 상태 점검
			BattleStateCheck();

			//적 펫 행동
			EnemyTurn();

			//배틀 상태 점검
			BattleStateCheck();
		}

		//배틀 종료되면 마을씬으로 전환
		SceneManager::LoadScene(L"vilageScene");
	}

	void pr::BattleManager::BattleStateCheck()
	{
		//캐릭터 수 점검
		//캐릭터 수 가 0보다 같거나작으면 종료
		if (mPlayerNumber <= 0)
		{
			return;
		}

		//적 수 점검
		//적 수가 0보다 같거나작으면 종료
		if (mEnemyNumber <= 0)
		{
			return;
		}
	}

	void pr::BattleManager::PlayerTurn()
	{

	}

	void pr::BattleManager::EnemyTurn()
	{

	}
}