#include <math.h>
#include <head.h>

int findFirstNegativeElement(double eps)
{
	int i = 0;
	do
	{
		if (a(i) < 0 && fabs(a(i)) <= eps)
		{
			break;
		}
		++i;
	} while (1);
	return i;
}