#include "prCharacterInputScene.h"
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
	CharacterInputScene::CharacterInputScene()
		:mCamera(nullptr)
	{
	}
	CharacterInputScene::~CharacterInputScene()
	{
	}
	void CharacterInputScene::Initialize()
	{
		//카메라
		GameObject* camera = object::Instantiate<GameObject>(enums::eLayerType::None);
		Camera* cameraComp = camera->AddComponent<Camera>();
		renderer::mainCamera = cameraComp;
		mCamera = cameraComp;

		//배경
		GameObject* bg = object::Instantiate<UI>(enums::eLayerType::BackGround, Vector2(0, 0));
		SpriteRenderer* bgSr = bg->AddComponent<SpriteRenderer>();
		bgSr->SetName(L"SR");
		graphics::Texture* bgTex = Resources::Find<graphics::Texture>(L"CharacterInput");
		bgSr->SetTexture(bgTex);

		Scene::Initialize();
	}
	void CharacterInputScene::Update()
	{
		Scene::Update();
	}
	void CharacterInputScene::LateUpdate()
	{
		Scene::LateUpdate();
	}
	void CharacterInputScene::Render(HDC hdc)
	{
		Scene::Render(hdc);
	}

	void CharacterInputScene::OnEnter()
	{
		renderer::mainCamera = mCamera;
	}

	void CharacterInputScene::OnExit()
	{
		renderer::mainCamera = nullptr;
	}
}

