#include <stdio.h>
/**
* main - prints the first 50 Fibonacci numbers
* starting with 1 and 2, followed by a new line
* Return: returns zero
*/

int main(void)
{
	long int a, b, c, nextfib;

	b = 1;
	c = 2;

	for (a = 1; a <= 50; ++a)
	{
		if (b != 20365011074)
		{
			printf("%ld, ", b);
		}
		else
		{
			printf("%ld\n", b);
		}

		nextfib = b + c;
		b = c;
		c = nextfib;
	}

	return (0);
}

