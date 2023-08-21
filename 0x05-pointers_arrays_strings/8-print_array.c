#include "main.h"
#include <stdio.h>
/**
* print_array - prints n elements of an array of integers
* @a: pointer to an integer value
* @n: number of elements contained in an array
* Return: prints specified number of elements
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i == (n - 1))
		{
			break;
		}
		else
		{
			printf(", ");
		}
	}
	printf("\n");
}

