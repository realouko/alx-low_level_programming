#include <stdio.h>
#include "lists.h"

void before_main(void) __attribute__((constructor));
/**
*before_main -function that prints a string
*before the main function is executed
*
* return - to return void
*/

void before_main()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}

/**
* main - prints a string on stdout after
* the first function
* return - to return void
*
*/

int main(void)
{
	printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
	return (0);
}
