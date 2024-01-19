#include "main.h"

/**
* _isupper - checks if character is lower or uppercase
* @c: character in argument
*
* Return: returns 1 if c is uppercase
* returns 0 if c is lowercase
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
