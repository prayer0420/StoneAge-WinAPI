#include "prTitleScene.h"
#include "prGameObject.h"
#include "prPlayer.h"

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
		GameObject* player = new Player();
		mPlayer = player;

		mPlayer->SetPosition(-100, -100);

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
}