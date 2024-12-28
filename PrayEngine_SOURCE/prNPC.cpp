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

	//HBRUSH blueBrush = CreateSolidBrush(RGB(0,0,255));

	//HBRUSH oldBrush = (HBRUSH)SelectObject(hdc, blueBrush);


	//SelectObject(hdc, oldBrush);

	//DeleteObject(blueBrush);
}
