#include <head.h>

void sortStackArray()
{
	int n;
	int arr[8];
	n = sizeof(arr) / sizeof(int);
	printf("%d\n", n);
	readArray(arr, n);
	sort(arr, n);
	writeArray(arr, n);
}