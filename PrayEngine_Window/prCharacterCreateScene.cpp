#include "prCharacterCreateScene.h"
#include "prGameObject.h"
#include "prScene.h"
#include "prTransform.h"
#include "prSpriteRenderer.h"
#include "prUI.h"
#include "prObject.h"
#include "prTexture.h"
#include "prResources.h"

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
			GameObject* bg = object::Instantiate<UI>(enums::eLayerType::BackGround, Vector2(0, 0));

			SpriteRenderer* sr = bg->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");
			graphics::Texture* bgTex = Resources::Find<graphics::Texture>(L"CharacterCreate");
			sr->SetTexture(bgTex);

			//AddUI(bg, enums::eLayerType::BackGround);
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

