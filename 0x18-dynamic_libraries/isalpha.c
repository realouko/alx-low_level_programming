#include "main.h"

/**
* _isalpha - checks for alphabetic character
* @c: reads character input
*
* Return: 1 if c is a lowercase or uppercase letter
* Otherwise, returns 0
*/

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
