#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>

/**
* _putchar - custom function to write a character to stdout.
* @c: the character to print
*
* Return: 1 on success, -1 on error
*/

int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
* print_strings - prints strings.
* @separator: string to be printed between the strings.
* @n: number of strings passed to the function.
*
* Return: no return.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
	str = va_arg(valist, char *);

	if (str)
	{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	}
	else
	{
		char *nil = "(nil)";
		while (*nil)
	{
		_putchar(*nil);
		nil++;
	}
	}

	if (i < n - 1 && separator)
	{
		while (*separator)
		{
		_putchar(*separator);
		separator++;
		}
	}
	}

	_putchar('\n');
	va_end(valist);

}


