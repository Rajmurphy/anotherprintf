#include "main.h"

/**
 * print_size - calculates the size
 * @format: formatted string
 * @li: list of arguments
 *
 * Return: Always 0
 */
int print_size(const char *format, int *li)
{
	int aaa = *li + 1;
	int size = 0;

	if (format[aaa] == 'l')
		size = Len1;
	else if (format[aaa] == 'h')
		size = Len2;

	if (size == 0)
		*li = aaa - 1;
	else
		*li = aaa;

	return (size);
}
