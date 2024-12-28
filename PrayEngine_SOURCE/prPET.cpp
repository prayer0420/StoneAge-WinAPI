#include "prPET.h"

pr::PET::PET()
{
}

pr::PET::~PET()
{
}

void pr::PET::Initialize()
{
	GameObject::Initialize();

}

void pr::PET::Update()
{
	GameObject::Update();

}

void pr::PET::LateUpdate()
{
	GameObject::LateUpdate();

}

void pr::PET::Render(HDC hdc)
{
	GameObject::Render(hdc);

	//HBRUSH redBrush = CreateSolidBrush(RGB(255, 0, 0));

	//HBRUSH oldBrush = (HBRUSH)SelectObject(hdc, redBrush);

	//Ellipse(hdc, mX, mY, 100 + mX, 100 + mY);

	//SelectObject(hdc, oldBrush);

	//DeleteObject(redBrush);
}
