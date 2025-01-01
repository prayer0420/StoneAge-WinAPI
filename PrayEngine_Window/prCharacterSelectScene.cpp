#include "prCharacterSelectScene.h"
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
	CharacterSelectScene::CharacterSelectScene()
	{
	}
	CharacterSelectScene::~CharacterSelectScene()
	{
	}
	
	void CharacterSelectScene::Initialize()
	{
		{
			GameObject* player = object::Instantiate<Player>(enums::eLayerType::Player, Vector2(-100, -100));

			SpriteRenderer* sr = player->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");

			//AddPlayer(player, enums::eLayerType::Player);
		}

		//¹è°æ
		{
			GameObject* bg = object::Instantiate<UI>(enums::eLayerType::BackGround, Vector2(0, 0));

			SpriteRenderer* sr = bg->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");

			graphics::Texture* bgTex = Resources::Find<graphics::Texture>(L"CharacterSelect");
			sr->SetTexture(bgTex);

			//AddUI(bg,enums::eLayerType::BackGround);
		}

		Scene::Initialize();
	}

	void CharacterSelectScene::Update()
	{
		Scene::Update();
	}
	void CharacterSelectScene::LateUpdate()
	{
		Scene::LateUpdate();
	}
	void CharacterSelectScene::Render(HDC hdc)
	{
		Scene::Render(hdc);
	}

	void CharacterSelectScene::OnEnter()
	{
	}
	void CharacterSelectScene::OnExit()
	{

	}
}

