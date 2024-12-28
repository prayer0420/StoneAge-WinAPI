#include "prUI.h"

pr::UI::UI()
{
}

pr::UI::~UI()
{
}

void pr::UI::Initialize()
{
	GameObject::Initialize();

}

void pr::UI::Update()
{
	GameObject::Update();
}

void pr::UI::LateUpdate()
{
	GameObject::LateUpdate();
}

void pr::UI::Render(HDC hdc)
{
	GameObject::Render(hdc);
}
