#include "main.h"

/**
* string_toupper - function that
* changes lowercase lerrters in a
* string to uppercase
* @s: character to make upper
* Return: return value of upper
*/

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
	}
	return (s);
}

