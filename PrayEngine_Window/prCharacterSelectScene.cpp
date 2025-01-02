#include "prCharacterSelectScene.h"
#include "prGameObject.h"
#include "prPlayer.h"
#include "prTransform.h"
#include "prSpriteRenderer.h"
#include "prUI.h"
#include "prObject.h"
#include "prTexture.h"
#include "prResources.h"
#include "prCamera.h"
#include "prRenderer.h"

namespace pr
{
	CharacterSelectScene::CharacterSelectScene()
		:mCamera(nullptr)
	{
	}
	CharacterSelectScene::~CharacterSelectScene()
	{
	}

	void CharacterSelectScene::Initialize()
	{

		GameObject* player = object::Instantiate<Player>(enums::eLayerType::Player, Vector2(-100, -100));

		SpriteRenderer* playerSr = player->AddComponent<SpriteRenderer>();
		playerSr->SetName(L"SR");

		//카메라
		GameObject* camera = object::Instantiate<GameObject>(enums::eLayerType::None);
		Camera* cameraComp = camera->AddComponent<Camera>();
		renderer::mainCamera = cameraComp;
		mCamera = cameraComp;

		//배경
		GameObject* bg = object::Instantiate<UI>(enums::eLayerType::BackGround, Vector2(0, 0));

		SpriteRenderer* bgSr = bg->AddComponent<SpriteRenderer>();
		bgSr->SetName(L"SR");

		graphics::Texture* bgTex = Resources::Find<graphics::Texture>(L"CharacterSelect");
		bgSr->SetTexture(bgTex);

		Scene::Initialize();
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

	void CharacterSelectScene::OnEnter()
	{
		renderer::mainCamera = mCamera;
	}

	void CharacterSelectScene::OnExit()
	{
		renderer::mainCamera = nullptr;
	}
}

