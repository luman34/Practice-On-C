#include <head.h>

void main(void)
{
	double x = 0.25;
	double result;
	f(&x, &result);
	printf("x=%lf\n", x);
	printf("result=%lf\nx=", result);
	scanf_s("%lf", &x);
	f(&x, &result);
	printf("result=%lf\n", result);
	system("pause");
}