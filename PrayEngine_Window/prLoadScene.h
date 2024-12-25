#pragma once
#include "..\\PrayEngine_SOURCE\\prSceneManager.h"

#include "prBeginnerDungeonScene.h"
#include "prCharacterCreateScene.h"
#include "prCharacterSelectScene.h"
#include "prFightScene.h"
#include "prItemShop.h"
#include "prPetShopScene.h"
#include "prTitleScene.h"
#include "prvillageScene.h"
#include "prHeadManHouseScene.h"

namespace pr
{
	void LoadScenes()
	{
		SceneManager::CreateScene<TitleScene>(L"TitleScene");
		SceneManager::CreateScene<CharacterSelectScene>(L"CharacterSelectScene");
		SceneManager::CreateScene<CharacterCreateScene>(L"CharacterCreateScene");
		SceneManager::CreateScene<HeadManHouseScene>(L"HeadManHouseScene");
		SceneManager::CreateScene<villageScene>(L"villageScene");
		SceneManager::CreateScene<ItemShop>(L"ItemShop");
		SceneManager::CreateScene<PetShopScene>(L"PetShopScene");
		SceneManager::CreateScene<BeginnerDungeonScene>(L"BeginnerDungeonScene");
		SceneManager::CreateScene<FightScene>(L"FightScene");

		SceneManager::LoadScene(L"TitleScene");
	}
}

//<·Îµå¾À>
//- Å¸ÀÌÆ² ¾À
//- Ä³¸¯ÅÍ ¼±ÅÃ ¾À
//- Ä³¸¯ÅÍ »ı¼º ¾À
//- ÃÌÀå Áı ¾À
//- ¸¶À» ¾À
//- ¾ÆÀÌÅÛ »óÁ¡ ¾À
//- Æê »óÁ¡ ¾À
//- ´øÀü ¾À
//- ½Î¿ò ¾À