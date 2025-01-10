#pragma once
#include "..\\PrayEngine_SOURCE\\prScript.h"
#include "..\\PrayEngine_SOURCE\\prTransform.h"


namespace pr
{
	class MonsterScript : public Script
	{
	public:

		enum class eState
		{
			Idle,
			Walk,
			Attack,
			Dead,
			Hurt,
			Guard,
			Escape
		};

		enum class eDirection
		{
			F,
			LF,
			L,
			LB,
			B,
			RB,
			R,
			RF,
		};

		MonsterScript();
		~MonsterScript();

		void Initialize() override;
		void Update() override;
		void LateUpdate() override;
		void Render(HDC hdc) override;


	private:

		void idle();
		void walk();
		void attack();
		void dead();
		void hurt();
		void guard();
		void escape();

		void RandomBehaviour();
		void PlayWalkAnimationBydirection(eDirection dir);
		void translate(Transform* tr);

	private:
		eState mState;
		class Animator* mAnimator;
		eDirection mDirection;
		float mTime;
		int nonBattleState = 5;
		int BattleState = 6;
	};
}
