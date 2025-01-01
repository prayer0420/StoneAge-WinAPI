#include "prCharacterCreateScene.h"
#include "prGameObject.h"
#include "prScene.h"
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
	CharacterCreateScene::CharacterCreateScene()
		:mCamera(nullptr)
	{
	}
	CharacterCreateScene::~CharacterCreateScene()
	{
	}
	void CharacterCreateScene::Initialize()
	{
		//카메라
		GameObject* camera = object::Instantiate<GameObject>(enums::eLayerType::None, Vector2(800, 450));
		Camera* cameraComp = camera->AddComponent<Camera>();
		renderer::mainCamera = cameraComp;
		mCamera = cameraComp;

		//배경
		GameObject* bg = object::Instantiate<UI>(enums::eLayerType::BackGround, Vector2(0, 0));
		SpriteRenderer* bgSr = bg->AddComponent<SpriteRenderer>();
		bgSr->SetName(L"SR");
		graphics::Texture* bgTex = Resources::Find<graphics::Texture>(L"CharacterCreate");
		bgSr->SetTexture(bgTex);

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
		renderer::mainCamera = mCamera;
	}

	void CharacterCreateScene::OnExit()
	{
		renderer::mainCamera = nullptr;
	}
}

