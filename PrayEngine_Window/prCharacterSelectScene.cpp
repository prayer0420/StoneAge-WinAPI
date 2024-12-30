#include "prCharacterSelectScene.h"
#include "prGameObject.h"
#include "prPlayer.h"
#include "prTransform.h"
#include "prSpriteRenderer.h"
#include "prUI.h"
#include "prPlayer.h"

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
			Player* player = new Player();

			Transform* tr = player->AddComponent<Transform>();
			tr->SetPos({ -100, -100 });	
			tr->SetName(L"TR");

			SpriteRenderer* sr = player->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");

			AddPlayer(player, eLayerType::BackGround);
		}

		//¹è°æ
		{
			UI* bg = new UI();
			Transform* tr = bg->AddComponent<Transform>();
			tr->SetPos(Vector2(0, 0));

			tr->SetName(L"TR");

			SpriteRenderer* sr = bg->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");
			sr->ImageLoad(L"C:\\Users\\User\\Desktop\\WinApi\\PrayEngine\\Resources\\character_select.bmp");

			AddUI(bg,eLayerType::BackGround);
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
}

