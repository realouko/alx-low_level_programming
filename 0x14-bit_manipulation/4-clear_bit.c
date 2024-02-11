#include "main.h"
#include <stdio.h>

/**
 * clear_bit - function that sets the value of a bit
 * to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change
 *
 * Return: 1 if it worked, or -1 if error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;
	unsigned int tempint;

	if (index > 64)
		return (-1);
	tempint = index;
	for (a = 1; tempint > 0; a *= 2, tempint--)
		;

	if ((*n >> index) & 1)
		*n -= a;

	return (1);
}

