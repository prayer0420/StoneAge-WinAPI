#include "prSceneManager.h"
#include "prInput.h"

namespace pr
{
	std::map<std::wstring, Scene*> SceneManager::mScene = {};
	Scene* SceneManager::mActiveScene = nullptr;
	
	Scene* SceneManager::LoadScene(const std::wstring& name)
	{
		if (mActiveScene)
			mActiveScene->OnExit();

		std::map<std::wstring, Scene*>::iterator iter
			= mScene.find(name);

		if (iter == mScene.end())
			return nullptr;

		mActiveScene = iter->second;
		mActiveScene->OnEnter();

		return iter->second;
	}


	void SceneManager::Initialize()
	{
	}

	void SceneManager::Update()
	{
		ChangeScene();
		if(mActiveScene)
			mActiveScene->Update();
	}

	void SceneManager::LateUpdate()
	{
		if (mActiveScene)
			mActiveScene->LateUpdate();
	}

	void SceneManager::Render(HDC hdc)
	{
		if (mActiveScene)
			mActiveScene->Render(hdc);
	}

	void SceneManager::ChangeScene()
	{
		if(Input::GetKeyDown(eKeyCode::Num0))
		{
			LoadScene(L"TitleScene");
		}
		else if (Input::GetKeyDown(eKeyCode::Num1))
		{
			LoadScene(L"CharacterSelectScene");
		}

		else if (Input::GetKeyDown(eKeyCode::Num2))
		{
			LoadScene(L"CharacterCreateScene");
		}

		else if (Input::GetKeyDown(eKeyCode::Num3))
		{
			LoadScene(L"HeadManHouseScene");
		}

		else if (Input::GetKeyDown(eKeyCode::Num4))
		{
			LoadScene(L"villageScene");
		}

		else if (Input::GetKeyDown(eKeyCode::Num5))
		{
			LoadScene(L"ItemShopScene");
		}

		else if (Input::GetKeyDown(eKeyCode::Num6))
		{
			LoadScene(L"PetShopScene");
		}

		else if (Input::GetKeyDown(eKeyCode::Num7))
		{
			LoadScene(L"BeginnerDungeonScene");
		}

		else if (Input::GetKeyDown(eKeyCode::Num8))
		{
			LoadScene(L"BattleScene");
		}
	}
}