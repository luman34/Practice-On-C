#include <math.h>
#include <head.h>

int findFirstNegativeElement(double eps)
{
	int i;
	for (i = 0; ; ++i)
	{
		if (a(i) < 0 && fabs(a(i)) <= eps)
		{
			break;
		}
	}
	return i;
}