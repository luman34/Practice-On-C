#include <stdio.h>
#include <math.h>

double f(double x)
{
	if (x <= 0)
		return abs(-pow(x,2) + 3 * x + 8);
	else if (x > 0)
		return sqrt(pow(x,2) + 1 / x);
}