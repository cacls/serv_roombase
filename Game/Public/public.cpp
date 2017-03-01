
#include "public.h"

using namespace Public;

void* 
Alloc(int32 size)
{
	return nullptr;
}

void 
Free(void* mem)
{
	if (mem==nullptr)
	{
		return;
	}
}
