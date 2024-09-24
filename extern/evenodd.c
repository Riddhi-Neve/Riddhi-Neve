#include "even_header.h"
int evenodd(int a)
{
	if (a%2==0)
		return 1;
	else if (!(a%2==0))
		return 0;
	return -1;
}
