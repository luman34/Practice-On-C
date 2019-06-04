#include <head.h>

void main(void)
{
	const char str[] = "1234567890";
		const char substr[] = "345";
		char dest[] = "";
		int len = 5;

		do
		{
			printf("Press to select:\n1 - for select task 1\n2 - for select task 2\n3 - for select task 3\n4 - for select task 4\n5 - for select task 5\n6 - for select task 6\n7 - exit\n");
			switch (_getch())
			{
			case'1':
				system("cls");
				printf("lenght = %d\n", strlen(str));
				break;
			case'2':
				system("cls");
				printf("position of substr in str %d %x", find(str, substr));
				break;
			case'3':
				system("cls");
				delete(str, substr);
				printf("after delete: %s %s\n", str, substr);
				break;
			case'4':
				system("cls");
				strcpy(dest, len, str);
				printf("dest = %s\n", dest);
				break;
			case'5':
				system("cls");
				strcat(dest, 11, str, substr);
				printf("dest = %s\n", dest);
				break;
			case '6':
				system("cls");
				if (insert(str, substr, 4, dest, 13))
				{
					printf("dest = %s\n", dest);
				}
				else
				{
					printf("ERROR: len < index or size of dest < len\n");
				}
				break;
			case'7':
				exit(0);
            }
			system("pause");
			system("cls");
		} while (1);
}