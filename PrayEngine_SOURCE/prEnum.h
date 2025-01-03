#pragma once
namespace pr::enums
{
	enum class eComponentType
	{
		Transform,
		Script,
		SpriteRenderer,
		Animator,
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
		Particle,
		Max = 16,
	};


	enum class eResourceType
	{
		Texture,
		AudioClip,
		Animation,
		Prefab,
		End,
	};



}