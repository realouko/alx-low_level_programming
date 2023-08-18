#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @n: reads the integer value
* Return: returns the last digit of the integer
*/

int print_last_digit(int n)
{
	int lst = n % 10;

	if (n < 0)
		lst = lst * -1;
	_putchar(lst + '0');
	return (lst);
}

