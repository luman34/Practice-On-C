#include <stdio.h>
#include <math.h>

_Bool hit(double x, double y)
{
	if ((x >= -1 && x <= 1 && y >= 0 && y <= 1) || (y <= 0 && x * x + y * y == 1))
		return 1;
	else
		return 0;
}
