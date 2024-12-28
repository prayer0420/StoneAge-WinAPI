#include "prCharacterSelectScene.h"
#include "prGameObject.h"
#include "prPlayer.h"
#include "prTransform.h"
#include "prSpriteRenderer.h"

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
			Transform* tr = mPlayer->GetComponent<Transform>();
			tr->SetPos(400, 400);
		}
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

