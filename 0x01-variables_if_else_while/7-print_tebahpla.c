#include <stdio.h>

/**
 * main - entry point of the program
 * Return: always zero
 */
int main(void)
	/*main function return always 0*/
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
	putchar(letter);
	}
	putchar('\n');
	/*Return always zero*/
	return (0);
}
