
#include <math.h>
#include <head.h>

double summeps(double eps)
{
	double sum = 0;
	int i = 0;
	do
	{
		sum += a(i);
		++i;
	} while (fabs(a(i + 1) - a(i)) >= eps);
	return sum;
}