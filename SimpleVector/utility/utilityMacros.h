#pragma once

//#include <assert.h>
//#define ASSERT(X) assert(X)

#define ASSERT(X) \
if(!X)  \
{ \
	throw ; \
}
	




