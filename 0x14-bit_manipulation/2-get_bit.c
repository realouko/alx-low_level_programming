#include "main.h"
#include <stdio.h>

/**
 * get_bit - function that gets the value
 * of a bit at a given index
 * @n: number to evaluate
 * @index: index starting from 0, of the bit we want to get
 * Returns: the value of the bit at index index,
 * or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tempint;

	if (index > 64)
		return (-1);

	tempint = n >> index;

	return (tempint & 1);
}

