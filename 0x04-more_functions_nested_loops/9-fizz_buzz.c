#include <stdio.h>

/**
* main - function that prints the numbers from 1 to 100
* followed by a new line
* for multiples of 3, print fizz
* for multiples of 5, print buzz
* for multiples of both 3 and 5, print fizzbuzz
*
*/ 

int main()
{
	int i;

	for (int i = 1; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 == 0) 
	{
	printf("FizzBuzz ");
	}
	else if (i % 3 == 0)
	{
	printf("Fizz ");
	}
	else if (i % 5 == 0)
	{
	printf("Buzz ");
	}
	else
	{
	printf("%d ", i);
	}
	}
	printf("\n");
	return 0;
}

