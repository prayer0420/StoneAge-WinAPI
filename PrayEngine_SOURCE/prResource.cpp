#include "prResource.h"

namespace pr
{
	Resource::Resource(enums::eResourceType type)
		: mType(type)
		, mPath{}
	{
	}
	Resource::~Resource()
	{
	}
}