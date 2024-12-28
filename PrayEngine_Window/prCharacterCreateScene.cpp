#include "prCharacterCreateScene.h"
#include "prGameObject.h"
#include "prScene.h"
#include "prTransform.h"
#include "prSpriteRenderer.h"
#include "prUI.h"

namespace pr
{
	CharacterCreateScene::CharacterCreateScene()
	{
	}
	CharacterCreateScene::~CharacterCreateScene()
	{
	}
	void CharacterCreateScene::Initialize()
	{
		//¹è°æ
		{
			UI* bg = new UI();
			Transform* tr = bg->AddComponent<Transform>();
			tr->SetPos({ -100, -100 });
			tr->SetName(L"TR");

			SpriteRenderer* sr = bg->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");
			sr->ImageLoad(L"C:\\Users\\User\\Desktop\\WinApi\\PrayEngine\\Resources\\character_create.bmp");

			AddUI(bg);
		}

		Scene::Initialize();
	}
	void CharacterCreateScene::Update()
	{
		Scene::Update();
	}
	void CharacterCreateScene::LateUpdate()
	{
		Scene::LateUpdate();
	}
	void CharacterCreateScene::Render(HDC hdc)
	{
		Scene::Render(hdc);
	}
}

