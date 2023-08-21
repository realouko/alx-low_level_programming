#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: string input
 * Return: to return string in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int totcount = 0;
	int i;

	while (s[totcount] != '\0')
		totcount++;

	for (i = 0; i < totcount; i++)
	{
		totcount--;
		rev = s[i];
		s[i] = s[totcount];
		s[totcount] = rev;
	}
}

