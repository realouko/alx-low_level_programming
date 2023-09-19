#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
* print_numbers - prints numbers.
* @separator: string to be printed between numbers.
* @n: number of integers passed to the function.
*
* Return: no return.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(numbers, int);
		char num_str[12];

		snprintf(num_str, sizeof(num_str), "%d", num);

		for (int j = 0; num_str[j] != '\0'; j++)
	{
		_putchar(num_str[j]);
		if (i < n - 1 && separator != NULL)
		_putchar(separator[0]);
	}
	}
	_putchar('\n');

	va_end(numbers);
}

