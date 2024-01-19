#include "main.h"
#include <unistd.h> // For the write system call

/*
* _putchar - function for putchar
* return - to return
*
*/

int _putchar(char c)
	{
	return write(1, &c, 1);
	}

