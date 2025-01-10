#pragma once
#include "..\\PrayEngine_SOURCE\\prScript.h"
#include "..\\PrayEngine_SOURCE\\prTransform.h"


namespace pr
{
	class FakePlayerScript : public Script
	{
	public:

		enum class eState
		{
			Idle,
			Run,
			Cry,
			Angry,
			Happy,
			Hello,
			Seat,
			End = 7
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


		FakePlayerScript();
		~FakePlayerScript();

		void Initialize() override;
		void Update() override;
		void LateUpdate() override;
		void Render(HDC hdc) override;


	private:

		void idle();
		void walk();
		void cry();
		void angry();
		void happy();
		void hello();
		void seat();


		void PlayWalkAnimationBydirection(eDirection dir);
		void translate(Transform* tr);
		void nextBehaviour();
		std::wstring StateToWstring(eState state);
		std::wstring DirToWstring(eDirection dir);

	private:
		eState mState;
		class Animator* mAnimator;
		eDirection mDirection;
		float mTime;
	};
}
