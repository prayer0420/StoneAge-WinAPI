
#include "..\\PrayEngine_SOURCE\\prAnimator.h"


namespace pr
{
	class LoadAnimation
	{
	public:
		static void LoadAnimations();
		//static void GetPlayerAnimator();

	public:
		static std::map<std::wstring, Animator*> mPlayerAnimators;
		static std::map<std::wstring, Animator*> mPetAnimators;
	};
}