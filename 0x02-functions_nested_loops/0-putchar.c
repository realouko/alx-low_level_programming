#include "main.h"
/**
* main - top function
* @void: nothing in arguments
* Return: 0
**/

int main(void)
{
	char alx[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(alx[c]);
	}
	_putchar('\n');
	return (0);
}
