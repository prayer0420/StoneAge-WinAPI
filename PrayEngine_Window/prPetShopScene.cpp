#include "prPetShopScene.h"
#include "prGameObject.h"
#include "prNPC.h"

namespace pr
{
	PetShopScene::PetShopScene()
	{
	}
	PetShopScene::~PetShopScene()
	{
	}
	void PetShopScene::Initialize()
	{
		for (int i = 0; i < 2; i++)
		{
			GameObject* npc = new NPC();
			npc->SetPosition(300 + (i * 200), 350 + (i * -200));
			AddNPC(npc);
		}

		mPlayer->SetPosition(1300, 600);

		Scene::Initialize();
	}
	void PetShopScene::Update()
	{
		Scene::Update();
	}
	void PetShopScene::LateUpdate()
	{
		Scene::LateUpdate();
	}
	void PetShopScene::Render(HDC hdc)
	{
		Scene::Render(hdc);
	}
}