#include "main.h"
/**
* _islower - returns 1 for lowercase character and 0 for uppercase
* @c: reads character input
* Return: 1 if character is lowercase and 0 if uppercase
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

