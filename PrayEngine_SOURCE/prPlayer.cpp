#include "prPlayer.h"
#include "prInput.h"
#include "prTime.h"

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
	//const int speed = 100.0f;

	//if (Input::GetKey(eKeyCode::A) || Input::GetKey(eKeyCode::Left))
	//{
	//	mX -= speed * Time::DeltaTime();
	//}

	//if (Input::GetKey(eKeyCode::D) || Input::GetKey(eKeyCode::Right))
	//{
	//	mX += speed * Time::DeltaTime();
	//}

	//if (Input::GetKey(eKeyCode::W) || Input::GetKey(eKeyCode::Up))
	//{
	//	mY -= speed * Time::DeltaTime();
	//}

	//if (Input::GetKey(eKeyCode::S) || Input::GetKey(eKeyCode::Down))
	//{
	//	mY += speed * Time::DeltaTime();
	//}
}

void pr::Player::Render(HDC hdc)
{
	GameObject::Render(hdc);

}
