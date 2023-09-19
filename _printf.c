#include "main.h"
#include <stdarg.h>
/**
 * _printf - function that produces output according to a format
 * @format: parameter
 * Return - the number of characters printed
 * Return: count
 */

int _printf(const char *format, ...)
{
	unsigned int i, str_count, count = 0;

	va_list welc;

	if (format == NULL)
		return (-1);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	va_start(welc, *format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_pchar(format[i]);
		}
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			_pchar(va_arg(welc, int));
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			str_count = _myput(va_arg(welc, char*));
			i++;
			count += str_count - 1;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_myput("%%");
			count++;
		}
		count += 1;
	}
	va_end(welc);
	return (count);
}
