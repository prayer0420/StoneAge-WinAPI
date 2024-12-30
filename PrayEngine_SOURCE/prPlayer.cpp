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

	const int speed = 100.0f;

	Transform* tr = GetComponent<Transform>();
	Vector2 pos = tr->GetPosition();

	if (Input::GetKey(eKeyCode::A) || Input::GetKey(eKeyCode::Left))
	{
		pos.x -= speed * Time::DeltaTime();
		tr->SetPos({ pos });
	}

	if (Input::GetKey(eKeyCode::D) || Input::GetKey(eKeyCode::Right))
	{
		pos.x += speed * Time::DeltaTime();
		tr->SetPos({ pos });
	}

	if (Input::GetKey(eKeyCode::W) || Input::GetKey(eKeyCode::Up))
	{
		pos.y -= speed * Time::DeltaTime();
		tr->SetPos({ pos });
	}

	if (Input::GetKey(eKeyCode::S) || Input::GetKey(eKeyCode::Down))
	{
		pos.y += speed * Time::DeltaTime();
		tr->SetPos({ pos });
	}
}

void pr::Player::Render(HDC hdc)
{
	GameObject::Render(hdc);

}
