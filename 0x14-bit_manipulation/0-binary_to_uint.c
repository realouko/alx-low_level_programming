#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts
 * a binary number to an unsigned int
 * where b is pointing to a string of 0 and 1 chars
 * @b: char string
 * Return: converted number,
 * or 0 if there is one or more characters in the string
 * b that isn't 1 or 0
 * also returns 0 if b is null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int total, exponent;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (exponent = 1, total = 0, len--; len >= 0; len--, exponent *= 2)
	{
		if (b[len] == '1')
			total += exponent;
	}

	return (total);
}

