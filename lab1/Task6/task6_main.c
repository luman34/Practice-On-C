
#include <stdio.h>
#include <math.h>
void f(void);
extern double x;
extern double result;
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