#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */

/**
* main - beginning of the program
*
* Description: This program generates a random number
* and then says whether it is positive or negative
*
* Return: Always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d is ", n);

	if (n > 0)
	{
	printf("positive\n");
	}

	else if (n == 0)
	{
	printf("zero\n");
	}

	else
	{
	printf("negative\n");
	}

	return (0);
}

