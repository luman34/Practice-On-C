#include <head.h>


void main(void)
{
	do
	{
		printf("Press to select task:\n1 - Select task 1\n2 - Exit");
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