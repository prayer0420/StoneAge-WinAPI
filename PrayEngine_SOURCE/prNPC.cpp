#include "prNPC.h"

pr::NPC::NPC()
{
}

pr::NPC::~NPC()
{
}

void pr::NPC::Initialize()
{
	GameObject::Initialize();
}

void pr::NPC::Update()
{
	GameObject::Update();
}

void pr::NPC::LateUpdate()
{
	GameObject::LateUpdate();
}

void pr::NPC::Render(HDC hdc)
{
	GameObject::Render(hdc);
}
