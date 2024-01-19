#include "main.h"

/**
* _strcpy - function that copies the string pointed to by src
* @dest: input
* @src: input
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b;

	while (src[a] != '\0')
	{
		a++;
	}
	for (b = 0; b <= a; b++)
	{
		dest[b] = src[b];
	}
	return (dest);
}

