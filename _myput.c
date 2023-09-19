#include "main.h"

/**
 * _myputs - a functon to return a string
 * @str: parameter
 * Return - 0 if succesful
 */

int _myput(const char *str)
{
	int increment;

	for (increment = 0; str[increment] != '\0'; increment++)
	{
		_pchar(str[increment]);
	}
	return (increment);
}
