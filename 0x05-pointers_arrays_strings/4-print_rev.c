#include "main.h"
/**
* print_rev - a function that prints a string, in reverse,
* followed by a new line
* totcount - variable used to count the number of characters
* in the input string
* @s: string input
* Return: prints string in reverse
*/
void print_rev(char *s)
{
	int totcount = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		totcount++;
	}

	for (n = (totcount - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
