#include "main.h"
#include <stdio.h>

/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that was needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tempint;
	int count;

	tempint = n ^ m;
	count = 0;

	while (tempint)
	{
		count++;
		tempint &= (tempint - 1);
	}

	return (count);
}

