#include "main.h"

/**
  * read_textfile - function that reads a text file and prints it to the POSIX stdout
  * @filename: pointer to name of file
  * @letters:  number of letters it should read and print
  *
  * Return: number of letters it could print
  * if write fails or does not write the expected amount of bytes, return 0
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int drct, soma, andika;
	char *escrw;

	if (filename == NULL)
		return (0);

	drct = open(filename, O_RDONLY);
	if (drct == -1)
		return (0);

	escrw = malloc(sizeof(char) * letters + 1);
	if (escrw == NULL)
		return (0);

	soma = read(drct, escrw, letters);
	if (soma == -1)
		return (0);

	escrw[letters] = '\0';

	andika = write(STDOUT_FILENO, escrw, soma);
	if (andika == -1)
		return (0);

	close(drct);
	free(escrw);
	return (andika);
}

