#include "prCharacterSelectScene.h"
#include "prGameObject.h"
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
		mPlayer->SetPosition(400, 400);
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

