#include "prvillageScene.h"
#include "prGameObject.h"
#include "prTransform.h"
#include "prSpriteRenderer.h"
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
		{
			Transform* tr = mPlayer->GetComponent<Transform>();
			tr->SetPos(800, 200);
		}
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

