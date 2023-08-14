#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* DESCRIPTION: This program will generate a random
* integer number using the srand function
*
* It will then perform a logical operation on
* the last digit of the random integer to check
* whether it is less than 5, greater than 5, or
* equal to 0
*
* Finally, it will print out the result of this
* operation on the screen along with the initial
* random integer generated
*/

/* main function: Beginning of the program*/

/* Return: End of program to return a value of 0 (Success)*/
int main(void)
{
	/*main - generates random nimber*/
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d", n, n % 10);

	if (n % 10 > 5)
	{
	printf(" and is greater than 5\n");
	}

	else if (n % 10 == 0)
	{
	printf(" and is 0\n");
	}

	else
	{
	printf(" and is less than 6 and not 0\n");
	}

	return (0);
}

