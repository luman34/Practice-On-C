
#include <math.h>
#include <head.h>

double summeps(double eps)
{
	double sum = 0;
	for (int i = 0; fabs(a(i+1)-a(i)) >= eps; ++i)
	{
		sum += a(i);
	}
	return sum;
}