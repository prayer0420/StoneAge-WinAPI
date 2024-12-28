#include "prTitleScene.h"
#include "prGameObject.h"
#include "prPlayer.h"
#include "prTransform.h"
#include "prSpriteRenderer.h"
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

		{
			Transform* tr = mPlayer->AddComponent<Transform>();
			tr->SetPos(-100, -100);
			tr->SetName(L"TR");

			SpriteRenderer* sr = mPlayer->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");
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
}