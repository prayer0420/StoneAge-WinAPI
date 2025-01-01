#include "prPlayerScript.h"
#include "prInput.h"
#include "prTransform.h"
#include "prTime.h"
#include "prGameObject.h"

namespace pr
{
	PlayerScript::PlayerScript()
	{
	}
	PlayerScript::~PlayerScript()
	{
	}
	void PlayerScript::Initialize()
	{
	}
	void PlayerScript::Update()
	{

		const int speed = 100.0f;

		Transform* tr = GetOwner()->GetComponent<Transform>();
		Vector2 pos = tr->GetPosition();

		if (Input::GetKey(eKeyCode::A) || Input::GetKey(eKeyCode::Left))
		{
			pos.x -= speed * Time::DeltaTime();
			tr->SetPosition({ pos });
		}

		if (Input::GetKey(eKeyCode::D) || Input::GetKey(eKeyCode::Right))
		{
			pos.x += speed * Time::DeltaTime();
			tr->SetPosition({ pos });
		}

		if (Input::GetKey(eKeyCode::W) || Input::GetKey(eKeyCode::Up))
		{
			pos.y -= speed * Time::DeltaTime();
			tr->SetPosition({ pos });
		}

		if (Input::GetKey(eKeyCode::S) || Input::GetKey(eKeyCode::Down))
		{
			pos.y += speed * Time::DeltaTime();
			tr->SetPosition({ pos });
		}
	}
	void PlayerScript::LateUpdate()
	{
	}
	void PlayerScript::Render(HDC hdc)
	{
	}
}