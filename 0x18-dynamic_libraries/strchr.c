#include "main.h"

/**
* *_strchr - locates character c
* in the string s
* @s: string to be scanned
* @c: character to be located
* Return: pointer to the character
* or NULL IF caracter isn't located
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'  ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (0);
}
