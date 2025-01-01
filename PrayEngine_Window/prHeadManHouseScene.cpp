#include "prHeadManHouseScene.h"
#include "prGameObject.h"
#include "prNPC.h"
#include "prPlayer.h"
#include "prTransform.h"
#include "prSpriteRenderer.h"
#include "prUI.h"
#include "prObject.h"
#include "prTexture.h"
#include "prResources.h"
#include "prPlayerScript.h"
#include "prCamera.h"
#include "prRenderer.h"


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
		{
			GameObject* player = object::Instantiate<Player>(enums::eLayerType::Player, Vector2(800, 200));
			mplayer = dynamic_cast<Player*>(player);
			SpriteRenderer* sr = player->AddComponent<SpriteRenderer>();
			player->AddComponent<PlayerScript>();
			sr->SetName(L"SR");

		}

		//카메라
		{
			GameObject* camera = object::Instantiate<GameObject>(enums::eLayerType::None, Vector2(0, 0));
			Camera* cameraComp = camera->AddComponent<Camera>();
			renderer::mainCamera = cameraComp;
			cameraComp->SetTarget(mplayer);			//카메라 타겟지정
		}

		{
			GameObject* npc = object::Instantiate<NPC>(enums::eLayerType::Npc, Vector2(800, 50));

			SpriteRenderer* sr = npc->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");

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

	void HeadManHouseScene::OnEnter()
	{
	}
	void HeadManHouseScene::OnExit()
	{

	}
}