#include "main.h"

/**
* *_memset - fills memory with a constant byte
* @s: pointer
* @b: constant to be filled in pointer
* @n: bytes of memory area pointed to by s
* Return: to return no value
*/


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (0);
}

