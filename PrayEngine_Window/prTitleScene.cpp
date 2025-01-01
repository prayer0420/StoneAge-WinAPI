#include "prTitleScene.h"
#include "prGameObject.h"
#include "prPlayer.h"
#include "prTransform.h"
#include "prSpriteRenderer.h"
#include "prUI.h"
#include "prObject.h"
#include "prTexture.h"
#include "prResources.h"

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
		
		{
			GameObject* player = object::Instantiate<Player>(enums::eLayerType::Player, Vector2(-100.0f, -100.0f));

			SpriteRenderer* sr = player->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");

			//AddPlayer(player, enums::eLayerType::Player);
		}

		{
			GameObject* bg = object::Instantiate<UI>(enums::eLayerType::BackGround, Vector2(0, 0));
			
			SpriteRenderer* sr = bg->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");
			
			graphics::Texture* bgTex = Resources::Find<graphics::Texture>(L"Main");
			sr->SetTexture(bgTex);

			//AddUI(bg,enums::eLayerType::BackGround);
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