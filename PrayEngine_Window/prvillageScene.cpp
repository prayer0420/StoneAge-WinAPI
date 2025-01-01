#include "prvillageScene.h"
#include "prGameObject.h"
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
	villageScene::villageScene()
	{
	}
	villageScene::~villageScene()
	{
	}
	void villageScene::Initialize()
	{
		//플레이어
		{
			GameObject* player = object::Instantiate<Player>(enums::eLayerType::Player, Vector2(800, 200));
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
	void villageScene::Update()
	{
		Scene::Update();
	}
	void villageScene::LateUpdate()
	{
		Scene::LateUpdate();
	}
	void villageScene::Render(HDC hdc)
	{
		Scene::Render(hdc);
	}

	void villageScene::OnEnter()
	{
	}
	void villageScene::OnExit()
	{

	}
}

