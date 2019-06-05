#include <stdio.h>
#include <f.h>
void main()
{
    double x, y;
	printf("switch 1 to start task1\nswitch 2 to start task2\n");
	switch (_getch())
	{
	case '1':
		system("cls");
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
		system("cls");
		printf("Selected case 2\n");
		scanf_s("%lf", &x);
		printf("f(x)=%lf\n", f(x));
		break;
	}
	system("pause");
}
