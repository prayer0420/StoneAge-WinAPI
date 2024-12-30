#include "prScene.h"

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

	void Scene::AddNPC(GameObject* gameObject, eLayerType type)
	{
		mLayers[(UINT)type]->AddNPC(gameObject);
	}

	void Scene::AddEnemyPet(GameObject* gameObject, eLayerType type)
	{
		mLayers[(UINT)type]->AddEnemyPet(gameObject);
	}

	void Scene::AddMyPet(GameObject* gameObject, eLayerType type)
	{
		mLayers[(UINT)type]->AddMyPet(gameObject);
	}

	void Scene::AddUI(GameObject* gameObject, eLayerType type)
	{
		mLayers[(UINT)type]->AddUI(gameObject);
	}

	void Scene::AddPlayer(GameObject* gameObject, eLayerType type)
	{
		mLayers[(UINT)type]->AddPlayer(gameObject);
	}

	void Scene::CreateLayers()
	{
		mLayers.resize((UINT)eLayerType::Max);

	std:for_each(mLayers.begin(), mLayers.end(),
		[](Layer*& layer)
		{
			layer = new Layer();
		});
	}
}