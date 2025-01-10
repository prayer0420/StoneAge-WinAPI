#pragma once
#include "..\\PrayEngine_SOURCE\\prScript.h"


namespace pr
{
	class PlayerScript : public Script
	{
	public:

		enum class eState
		{
			Idle,
			Run,
			Attack,
			Dead,
			Hurt,
			Guard,
			UsingItem,
			ChangingPet,
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



		PlayerScript();
		~PlayerScript();

		void Initialize() override;
		void Update() override;
		void LateUpdate() override;
		void Render(HDC hdc) override;

		void PlayAnimationBydirectionAndstate();
		std::wstring StateToWstring(eState state);
		std::wstring DirToWstring(eDirection dir);

	private:

		void idle();
		void Run();
		void attack();
		void dead();
		void hurt();
		void guard();
		void usingItem();
		void changingPet();
		void escape();

		void keyboardMove();

	private:
		bool battling;
		eState mState;
		eDirection mDirection;
		class Animator* mAnimator;
	};
}
