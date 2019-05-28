
#include <stdio.h>
#include <math.h>
double f(double x)
{
	return tan(2 * x) + 1 / cos(2 * x);
}
void main()
{
	double x = 0.25;
	printf("x=%lf\n", x);
	printf("f(x)=%lf\n x=", f(x));
	scanf_s("%lf", &x);
	printf("f(x)=%lf\n", f(x));
	system("pause");
}