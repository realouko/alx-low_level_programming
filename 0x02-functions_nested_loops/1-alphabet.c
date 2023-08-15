#include "main.h"

/**
* void - Entry point of the program
*
* Return: void
*/
void print_alphabet(void)
{
	char letter;

	{
	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
	}

	_putchar('\n');
}
