#include "prCharacterCreateScene.h"
#include "prGameObject.h"
#include "prScene.h"
#include "prTransform.h"
#include "prSpriteRenderer.h"
#include "prUI.h"
#include "prObject.h"

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
			GameObject* bg = object::Instantiate<UI>(enums::eLayerType::BackGround, Vector2(-100, -100));

			SpriteRenderer* sr = bg->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");
			sr->ImageLoad(L"C:\\Users\\User\\Desktop\\WinApi\\PrayEngine\\Resources\\character_create.bmp");

			AddUI(bg, enums::eLayerType::BackGround);
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

	void CharacterCreateScene::OnEnter()
	{
	}
	void CharacterCreateScene::OnExit()
	{

	}
}

