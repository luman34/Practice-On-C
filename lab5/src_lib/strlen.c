#include <head.h>

int strlen(const char *str)
{
	const char *s = str;
	while (*str++);
	return str - s - 1;
}