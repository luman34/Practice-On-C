#include <stdio.h>
#include <math.h>
void main()
{
	double f;
	double x = 0.25;
	printf("x=%lf\n", x);
	f = tan(2 * x) + 1 / cos(2 * x);
	printf("f(x)=%lf\n x=", f);
	scanf_s("%lf",&x);
	f = tan(2 * x) + 1 / cos(2 * x);
	printf("f(x)=%lf\n", f);
	system("pause");
}