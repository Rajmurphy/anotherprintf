#ifndef MAIN_HEADER_H
#define MAIN_HEADER_H

/* C Standard library header files*/
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int _printf(const char *format, ...);
int _pchar(char a);
int _myput(const char *str);
int print_char(va_list types, char buffer[],int flags, int width, int precision, int size)

#endif
