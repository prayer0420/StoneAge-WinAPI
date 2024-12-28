#include "prTitleScene.h"
#include "prGameObject.h"
#include "prPlayer.h"
#include "prTransform.h"
#include "prSpriteRenderer.h"
#include "prUI.h"

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
			tr->SetPos({ -100, -100});
			tr->SetName(L"TR");

			SpriteRenderer* sr = mPlayer->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");
		}

		{
			UI* bg = new UI();
			Transform* tr = bg->AddComponent<Transform>();
			tr->SetPos(Vector2(0, 0));

			tr->SetName(L"TR");

			SpriteRenderer* sr = bg->AddComponent<SpriteRenderer>();
			sr->SetName(L"SR");
			sr->ImageLoad(L"C:\\Users\\User\\Desktop\\WinApi\\PrayEngine\\Resources\\main.bmp");

			AddUI(bg);
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