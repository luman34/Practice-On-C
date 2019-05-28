
#include <head.h>

void f(const double *x, double *result)
{
	*result= tan(2 * (*x)) + 1 / cos(2 * (*x));
}