#include "prPetShopScene.h"
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
	PetShopScene::PetShopScene()
	{
	}
	PetShopScene::~PetShopScene()
	{
	}
	void PetShopScene::Initialize()
	{
		//NPC
		for (int i = 0; i < 2; i++)
		{
			GameObject* npc = object::Instantiate<NPC>(enums::eLayerType::Npc, Vector2({ 300 + (i * 200) , 350 + (i * -200) }));
			
			SpriteRenderer* sr = npc->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");
		//AddNPC(npc, enums::eLayerType::Npc);
		}
		//플레이어
		{
			GameObject* player = object::Instantiate<Player>(enums::eLayerType::Player, Vector2(1300, 600));
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

		}
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

	void PetShopScene::OnEnter()
	{
	}
	void PetShopScene::OnExit()
	{

	}
}