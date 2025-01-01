#include "prTitleScene.h"
#include "prGameObject.h"
#include "prPlayer.h"
#include "prTransform.h"
#include "prSpriteRenderer.h"
#include "prUI.h"
#include "prObject.h"
#include "prTexture.h"
#include "prResources.h"
#include "prCamera.h"
#include "prRenderer.h"

namespace pr
{
	TitleScene::TitleScene()
	{
	}
	TitleScene::~TitleScene()
	{
	}
	void TitleScene::Initialize()
	{
		
		//플레이어
		{
			GameObject* player = object::Instantiate<Player>(enums::eLayerType::Player, Vector2(-100.0f, -100.0f));

			SpriteRenderer* sr = player->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");
		}

		//카메라
		{
			GameObject* camera = object::Instantiate<GameObject>(enums::eLayerType::None, Vector2(800, 450));
			Camera* cameraComp = camera->AddComponent<Camera>();
			renderer::mainCamera = cameraComp;
		}

		//배경
		{
			GameObject* bg = object::Instantiate<UI>(enums::eLayerType::BackGround, Vector2(0, 0));
			
			SpriteRenderer* sr = bg->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");
			
			graphics::Texture* bgTex = Resources::Find<graphics::Texture>(L"Main");
			sr->SetTexture(bgTex);
		}

		Scene::Initialize();
	}
	void TitleScene::Update()
	{
		Scene::Update();
	}
	void TitleScene::LateUpdate()
	{
		Scene::LateUpdate();
	}
	void TitleScene::Render(HDC hdc)
	{
		Scene::Render(hdc);
	}

	void TitleScene::OnEnter()
	{
	}
	void TitleScene::OnExit()
	{

	}
}