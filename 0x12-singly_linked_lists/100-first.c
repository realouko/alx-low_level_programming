#include <stdio.h>
#include "lists.h"

void before_main(void) __attribute__((constructor));
/**
* before_main -function that prints a string
* before the main function is executed
*
* return - to return void
*/

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
	return;
}


