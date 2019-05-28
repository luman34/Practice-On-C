#include <math.h>
#include <head.h>

int findFirstNegativeElement(double eps)
{
	int i = 0;
	while (1)
	{
		if (a(i) < 0 && fabs(a(i)) <= eps)
		{
			break;
		}
		++i;
	}
	return i;
}