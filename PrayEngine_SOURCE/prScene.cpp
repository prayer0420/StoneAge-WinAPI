#include "prScene.h"
#include "prSceneManager.h"


namespace pr
{

	Scene::Scene()
		:mLayers{}
	{
		CreateLayers();
	}

	Scene::~Scene()
	{
	}

	void Scene::Initialize()
	{
		for (Layer* layer : mLayers)
		{
			if (layer == nullptr)
				continue;
			layer->Initialize();
		}
	}

	void Scene::Update()
	{
		for (Layer* layer : mLayers)
		{
			if (layer == nullptr)
				continue;
			layer->Update();
		}
	}

	void Scene::LateUpdate()
	{
		for (Layer* layer : mLayers)
		{
			if (layer == nullptr)
				continue;
			layer->LateUpdate();
		}
	}

	void Scene::Render(HDC hdc)
	{
		for (Layer* layer : mLayers)
		{
			if (layer == nullptr)
				continue;
			layer->Render(hdc);
		}
		RenderName(hdc);
	}

	void Scene::RenderName(HDC hdc)
	{
		const wchar_t* str2 = GetName().c_str();
		TextOut(hdc, 0, 20, str2, wcslen(str2));
	}

	void Scene::OnEnter()
	{

	}

	void Scene::OnExit()
	{

	}

	void Scene::AddNPC(GameObject* gameObject, enums::eLayerType type)
	{
		mLayers[(UINT)type]->AddNPC(gameObject);
	}

	void Scene::AddEnemyPet(GameObject* gameObject, enums::eLayerType type)
	{
		mLayers[(UINT)type]->AddEnemyPet(gameObject);
	}

	void Scene::AddMyPet(GameObject* gameObject, enums::eLayerType type)
	{
		mLayers[(UINT)type]->AddMyPet(gameObject);
	}

	void Scene::AddUI(GameObject* gameObject, enums::eLayerType type)
	{
		mLayers[(UINT)type]->AddUI(gameObject);
	}

	void Scene::AddPlayer(GameObject* gameObject, enums::eLayerType type)
	{
		mLayers[(UINT)type]->AddPlayer(gameObject);
	}


	//void Scene::AddGameObject(GameObject* gameObject, enums::eLayerType type)
	//{
	//	Scene* activeScene = SceneManager::GetActiveScene();
	//	Layer* layer = activeScene->GetLayer(type);

	//	if (dynamic_cast<Player*>(gameObject))
	//	{
	//		Player* player = dynamic_cast<Player*>(gameObject);
	//		layer->AddPlayer(gameObject);
	//	}

	//	else if (dynamic_cast<MyPet*>(gameObject))
	//	{
	//		MyPet* pet = (dynamic_cast<MyPet*>(gameObject));
	//		layer->AddMyPet(gameObject);
	//	}
	//	else if (dynamic_cast<EnemyPet*>(gameObject))
	//	{
	//		MyPet* pet = (dynamic_cast<MyPet*>(gameObject));
	//		layer->AddEnemyPet(gameObject);
	//	}
	//	else if (dynamic_cast<NPC*>(gameObject))
	//	{
	//		NPC* npc = (dynamic_cast<NPC*>(gameObject));
	//		layer->AddEnemyPet(gameObject);
	//	}
	//	else if (dynamic_cast<UI*>(gameObject))
	//	{
	//		UI* ui = (dynamic_cast<UI*>(gameObject));
	//		layer->AddUI(gameObject);
	//	}

	//}

	void Scene::CreateLayers()
	{
		mLayers.resize((UINT)enums::eLayerType::Max);

	std:for_each(mLayers.begin(), mLayers.end(),
		[](Layer*& layer)
		{
			layer = new Layer();
		});
	}
}