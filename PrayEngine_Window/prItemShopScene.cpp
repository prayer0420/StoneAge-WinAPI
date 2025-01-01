#include "prItemShopScene.h"
#include "prGameObject.h"
#include "prNPC.h"
#include "prTransform.h"
#include "prSpriteRenderer.h"
#include "prUI.h"
#include "prPlayer.h"
#include "prObject.h"
#include "prTexture.h"
#include "prResources.h"

namespace pr
{
	ItemShopScene::ItemShopScene()
	{
	}
	ItemShopScene::~ItemShopScene()
	{
	}
	void ItemShopScene::Initialize()
	{
		for (int i = 0; i < 2; i++)
		{
			GameObject* npc = object::Instantiate<NPC>(enums::eLayerType::Npc, 
								Vector2({ 800 + (i * 200), 50 + (i * 200) }));
			SpriteRenderer* sr = npc->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");

			//AddNPC(npc, enums::eLayerType::Npc);
		}

		{
			GameObject* player = object::Instantiate<Player>(enums::eLayerType::Player, Vector2(200, 500));
			
			SpriteRenderer* sr = player->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");

			//AddPlayer(player, enums::eLayerType::Player);
		}

		//¹è°æ
		{
			GameObject* bg = object::Instantiate<UI>(enums::eLayerType::BackGround, Vector2(0, 0));

			SpriteRenderer* sr = bg->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");

			graphics::Texture* bgTex = Resources::Find<graphics::Texture>(L"TileBG");
			sr->SetTexture(bgTex);

			//AddUI(bg, enums::eLayerType::BackGround);
		}

		Scene::Initialize();
	}
	void ItemShopScene::Update()
	{
		Scene::Update();
	}
	void ItemShopScene::LateUpdate()
	{
		Scene::LateUpdate();
	}
	void ItemShopScene::Render(HDC hdc)
	{
		Scene::Render(hdc);
	}

	void ItemShopScene::OnEnter()
	{
	}
	void ItemShopScene::OnExit()
	{

	}
}