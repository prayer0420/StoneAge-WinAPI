#pragma once
#include "..\\PrayEngine_SOURCE\\prGameObject.h"
#include "..\\PrayEngine_SOURCE\\CommonInclude.h"

namespace pr
{
	class BattleManager
	{
	public:
		BattleManager();
		~BattleManager();

		void Battle();
		void BattleStateCheck();

	private:
		void PlayerTurn();
		void EnemyTurn();

	private:
		std::vector<GameObject> mPlayer;
		std::vector<GameObject> mMyPet;
		std::vector<GameObject> mEnemyPet;
		int mPlayerNumber;
		int mEnemyNumber;

	};
}
