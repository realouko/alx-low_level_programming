#include "main.h"
/**
* print_square - program to print a square on the terminal
* using the # character
*
*
* @size: determines the dimensions of the square
*/

void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (a = 0; a < size; a++)
	{
	for (b = 0; b < size; b++)
	{
		_putchar('#');
	}
		_putchar('\n');
	}
	}
}

