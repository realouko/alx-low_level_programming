#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: filename
 * @text_content: content written in the file
 *
 * Return: 1 if successful, and -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int a, b, c;



	if (!filename)
		return (-1);

	a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (a == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (b = 0; text_content[b]; b++)
		;

	c = write(a, text_content, b);

	if (c == -1)
		return (-1);

	close(a);

	return (1);
}

