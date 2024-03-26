#include "main.h"

/**
* _isdigit - function to check whether
* a character named c is a digit
*
* @c: character that will be checked by the function
*
* Return: to return 1 if character is digit
* Or else to return 0 if character isn't a digit
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
