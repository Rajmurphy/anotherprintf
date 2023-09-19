#include "main.h"

/**
* get_len - string lenght
* @str: input
* Return: Always 0
*/
int get_len(char *str)
{
	int x = 0;

	while (str[x] != '\0')
		x++;
	return (x);
}
