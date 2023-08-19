#include "main.h"

/**
* print_triangle - program for printing a triangle using
* the # character
*
* @size: an interger to determine the height of the triangle
*
* Return: to return a triangle whose height is determined
* by the interger valued stored in the size variable
*/

void print_triangle(int size)
{
	int empty, rows, howmany;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (rows = 0; rows <= (size - 1); rows++)
	{
	for (empty = 0; empty < (size - 1) - rows; empty++)
	{
	_putchar(' ');
	}
	for (howmany = 0; howmany <= rows; howmany++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}

