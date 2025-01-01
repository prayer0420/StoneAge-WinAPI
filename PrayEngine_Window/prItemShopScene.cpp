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
#include "prPlayerScript.h"
#include "prCamera.h"
#include "prRenderer.h"


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
		//NPC
		for (int i = 0; i < 2; i++)
		{
			GameObject* npc = object::Instantiate<NPC>(enums::eLayerType::Npc, 
								Vector2({ 800 + (i * 200), 50 + (i * 200) }));
			SpriteRenderer* sr = npc->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");

			
		}
		//플레이어
		{
			GameObject* player = object::Instantiate<Player>(enums::eLayerType::Player, Vector2(200, 500));
			mplayer = dynamic_cast<Player*>(player);
			SpriteRenderer* sr = player->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");
			player->AddComponent<PlayerScript>();

			
		}

		//카메라
		{
			GameObject* camera = object::Instantiate<GameObject>(enums::eLayerType::None, Vector2(0, 0));
			Camera* cameraComp = camera->AddComponent<Camera>();
			renderer::mainCamera = cameraComp;
			cameraComp->SetTarget(mplayer);			//카메라 타겟지정
		}

		//배경
		{
			GameObject* bg = object::Instantiate<UI>(enums::eLayerType::BackGround, Vector2(0, 0));

			SpriteRenderer* sr = bg->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");

			graphics::Texture* bgTex = Resources::Find<graphics::Texture>(L"Tile");
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