#include "prHeadManHouseScene.h"
#include "prGameObject.h"
#include "prNPC.h"
#include "prPlayer.h"

namespace pr
{
	HeadManHouseScene::HeadManHouseScene()
	{
	}
	HeadManHouseScene::~HeadManHouseScene()
	{
	}

	void HeadManHouseScene::Initialize()
	{
		GameObject* npc = new NPC();
		npc->SetPosition(800, 50);
		AddNPC(npc);

		mPlayer->SetPosition(800, 200);

		Scene::Initialize();
	}

	void HeadManHouseScene::Update()
	{
		Scene::Update();
	}
	void HeadManHouseScene::LateUpdate()
	{
		Scene::LateUpdate();
	}
	void HeadManHouseScene::Render(HDC hdc)
	{
		Scene::Render(hdc);
	}
}