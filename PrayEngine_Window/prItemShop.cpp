#include "prItemShop.h"
#include "prGameObject.h"
#include "prNPC.h"

namespace pr
{
	ItemShop::ItemShop()
	{
	}
	ItemShop::~ItemShop()
	{
	}
	void ItemShop::Initialize()
	{
		for (int i = 0; i < 2; i++)
		{
			GameObject* npc = new NPC();
			npc->SetPosition(800+(i*200), 50+(i*200));
			AddNPC(npc);
		}

		mPlayer->SetPosition(200, 500);
		Scene::Initialize();
	}
	void ItemShop::Update()
	{
		Scene::Update();
	}
	void ItemShop::LateUpdate()
	{
		Scene::LateUpdate();
	}
	void ItemShop::Render(HDC hdc)
	{
		Scene::Render(hdc);
	}
}