#include <stdio.h>

int main(void)
{
	int n;
	double eps;
	int k;
	do
	{
		printf("Press to select task:\n1 - for select task 1;\n2 - for select task 2;\n3 - for select task 3;\n4 - for select task 4;\n5 - for select task 5;\n6 - for exit.\n");
		switch (_getch())
		{
		case '1':
			system("cls");
			printf("Selected case 1\nEnter n: ");
			scanf_s("%d", &n);
			printf("Sum 'n': %.4lf\n", summ(n));
			break;
		case '2':
			system("cls");
			printf("Selected case 2\nEnter eps:");
			scanf_s("%lf", &eps);
			printf("Sum 'n': %.4lf\n", summeps(eps));
			break;
		case '3':
			system("cls");
			printf("Selected case 3\nEnter n:");
			scanf_s("%d", &n);
			printf("write k:");
			scanf_s("%d", &k);
			print(n, k);
			break;
		case '4':
			system("cls");
			printf("Selected case 4\nEnter eps:");
			scanf_s("%lf", &eps);
			printf("Firstelement 'n': %d\n", findFirstElement(eps));
			break;
		case '5':
			system("cls");
			printf("Selected case 5\nEnter eps:");
			scanf_s("%lf", &eps);
			printf("FirstNegativeelement 'n': %d\n", findFirstNegativeElement(eps));
			break;
		case '6':
			exit(0);
		}
		system("pause");
		system("cls");
	} while (1);
	system("pause");
}
