#include "prCamera.h"
#include "prGameObject.h"
#include "prTransform.h"
#include "prApplication.h"

extern pr::Application application;

namespace pr
{
	Camera::Camera()
		: Component(enums::eComponentType::Camera)
		, mDistance(Vector2::Zero)
		, mResolution(Vector2::Zero)
		, mLookPosition(Vector2::Zero)
		, mTarget(nullptr)
	{

	}
	Camera::~Camera()
	{
	}
	void Camera::Initialize()
	{
		mResolution.x = application.GetWidth();
		mResolution.y = application.GetHeight();

		Transform* cameraTr = GetOwner()->GetComponent<Transform>();
		cameraTr->SetPosition(mResolution / 2.0f);
	}
	void Camera::Update()
	{
		if (mTarget)
		{
			Transform* tr = mTarget->GetComponent<Transform>();
			mLookPosition = tr->GetPosition();
		}
		else
		{
			Transform* cameraTr = GetOwner()->GetComponent<Transform>();
			mLookPosition = cameraTr->GetPosition();
		}

		mDistance = mLookPosition - (mResolution / 2.0f);
	}
	void Camera::LateUpdate()
	{

	}
	void Camera::Render(HDC hdc)
	{
	}
}