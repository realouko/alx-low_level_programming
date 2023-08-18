#include "main.h"
/**
* print_line - to use _ character to print a line
* n mumber of times
* If n is 0, only newline will be printed
*
* @n: is the number of times the _ character
* will be printed on the line
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

