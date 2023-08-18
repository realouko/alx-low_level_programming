#include "main.h"
/**
* print_diagonal - uses the \ character n times to print
* a diaginal line on the terminal
*
* @n: is the number if times the \ character
* will be printed on the terminal
*/

void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

