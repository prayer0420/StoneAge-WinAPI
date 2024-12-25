#include "prNPC.h"

pr::NPC::NPC()
{
}

pr::NPC::~NPC()
{
}

void pr::NPC::Update()
{
}

void pr::NPC::LateUpdate()
{
}

void pr::NPC::Render(HDC hdc)
{
	HBRUSH blueBrush = CreateSolidBrush(RGB(0,0,255));

	HBRUSH oldBrush = (HBRUSH)SelectObject(hdc, blueBrush);

	Ellipse(hdc, mX, mY, 100 + mX, 100 + mY);

	SelectObject(hdc, oldBrush);

	DeleteObject(blueBrush);
}
