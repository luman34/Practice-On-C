#include <head.h>

void main(void)
{
	do
	{
		printf("Press to select task:\n1 - for select task 1\n2 - for select task 2");
			switch (_getch())
			{
			case '1':
				system("cls");
				sortStackArray();
				break;
			case '2':
				exit(0);
			} system("pause");
	} while (1);
}