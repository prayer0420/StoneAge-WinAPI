#pragma once
namespace pr::enums
{
	enum class eComponentType
	{
		Transform,
		Script,
		SpriteRenderer,
		Camera,
		End,
	};

	enum class eLayerType
	{
		None,
		BackGround,
		Props,
		Npc,
		Player,
		EnemyPet,
		MyPet,
		Max = 16,
	};


	enum class eResourceType
	{
		Texture,
		AudioClip,
		Prefab,
		End,
	};



}