
#include <math.h>
double a(int i)
{
	return pow(-1, i) * pow(2, i) / (pow(i, i + 1.0) + 1);
}