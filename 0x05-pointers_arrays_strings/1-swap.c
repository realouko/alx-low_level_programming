#include "main.h"
/**
* swap_int - a function that swaps the values of two integers
* @a: integer 1
* @b: interger 2
* Return: swapped values of the two integers
*/
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}

