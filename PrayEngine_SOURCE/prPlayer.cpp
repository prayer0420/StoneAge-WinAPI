#include "prPlayer.h"
#include "prInput.h"
#include "prTime.h"
#include "prComponent.h"
#include "prTransform.h"

pr::Player::Player()
{
}

pr::Player::~Player()
{
}

void pr::Player::Initialize()
{
	GameObject::Initialize();

}

void pr::Player::Update()
{
	GameObject::Update();
}

void pr::Player::LateUpdate()
{
	GameObject::LateUpdate();
}

void pr::Player::Render(HDC hdc)
{
	GameObject::Render(hdc);

}
