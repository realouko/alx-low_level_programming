#include <stdio.h>
#include <stdlib.h>

/**
* main - function to print opcodes
* @argc: total no. of arguments
* @argv: argument vector
*
* Return: to to return zero value
*/

int main(int argc, char *argv[])
{
	int i, bytenumber;
	char *opc = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytenumber = atoi(argv[1]);

	if (bytenumber < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytenumber; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != bytenumber - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}

