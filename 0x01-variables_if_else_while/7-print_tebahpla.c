#include <stdio.h>

/**
 * main - entry
 * Return zero
 */
int main(void)
	/*main function*/
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
