#include "main.h"

/**
  * main - a function that copies one file to another file
  *
  * @argc: argument count
  *
  * @argv: vector for the argument
  *
  * Return: 0.
  */

int main(int argc, char *argv[])
{
	int sourcefile, destination, size;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}

	sourcefile =  open(argv[1], O_RDONLY, 0);
	if (sourcefile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	destination = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (destination == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while ((size = read(sourcefile, buf, 1024)) > 0)
	{
		if (write(destination, buf, size) != size)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (size == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(sourcefile) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", sourcefile), exit(100);
	}
	if (close(destination) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", destination), exit(100);
	}
	return (0);
}

