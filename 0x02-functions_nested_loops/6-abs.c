#include "main.h"
/**
* _abs - prints the absolute value of an integer
* @n: reads integer value n from stdin
* Return: returns 1 if n is greater than 0
* returns 0 if n is equal to 0
*/

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

