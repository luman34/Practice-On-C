
#include <stdio.h>
#include <math.h>
double x = 0.25;
double result;
void f(void);
void main()
{
	printf("x=%lf\n", x);
	f();
	printf("result=%lf\n x=", result);
	scanf_s("%lf", &x);
	f();
	printf("result=%lf\n", result);
	system("pause");
}

void f(void)
{
	result = tan(2 * x) + 1 / cos(2 * x);
}