#include "prvillageScene.h"
#include "prGameObject.h"

namespace pr
{
	villageScene::villageScene()
	{
	}
	villageScene::~villageScene()
	{
	}
	void villageScene::Initialize()
	{
		Scene::Initialize();
		mPlayer->SetPosition(800, 200);
	}
	void villageScene::Update()
	{
		Scene::Update();
	}
	void villageScene::LateUpdate()
	{
		Scene::LateUpdate();
	}
	void villageScene::Render(HDC hdc)
	{
		Scene::Render(hdc);
	}
}
