#include "main.h"
#include <unistd.h>

/*
* _putchar - function for putchar
*
*/

int _putchar(char c)
	{
	return write(1, &c, 1);
	}
