#include <stdio.h>
#include <f.h>
void main()
{
    double x, y;
	switch (_getch())
	{
	case '1':
		printf("Selected case 1\n");
		scanf_s("%lf", &x);
		scanf_s("%lf", &y);
		hit(x, y);
		if (hit(x, y))
		{
			printf("Bingooo\n");
		}
		else
		{
			printf("looser\n");
		}
		break;
	case '2':
		printf("Selected case 2\n");
		scanf_s("%lf", &x);
		printf("f(x)=%lf\n", f(x));
		break;
	}
	system("pause");
}
