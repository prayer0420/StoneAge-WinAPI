#include "prBeginnerDungeonScene.h"
#include "prGameObject.h"

namespace pr
{
	BeginnerDungeonScene::BeginnerDungeonScene()
	{
	}
	BeginnerDungeonScene::~BeginnerDungeonScene()
	{
	}
	void BeginnerDungeonScene::Initialize()
	{
		//플레이어 위치
		mPlayer->SetPosition(1100, 200);

		Scene::Initialize();
	}
	void BeginnerDungeonScene::Update()
	{
		Scene::Update();
	}
	void BeginnerDungeonScene::LateUpdate()
	{
		Scene::LateUpdate();
	}
	void BeginnerDungeonScene::Render(HDC hdc)
	{
		Scene::Render(hdc);
	}
}

