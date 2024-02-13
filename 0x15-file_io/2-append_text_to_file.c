#include "main.h"

/**
  * append_text_to_file - function that appends text at
  * the end of a file
  *
  * @filename: pointer to the name of the file
  * @text_content: null terminated string to be appended
  *
  * Return: 1 if successful, and -1 if it fails
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int drctry, addtxt, i;

	if (filename == NULL)
		return (-1);

	drctry = open(filename, O_WRONLY | O_EXCL | O_APPEND);
	if (drctry < 0)
		return (-1);

	if (text_content)
	{
		i = 0;
		while (text_content[i])
			i++;

		addtxt = write(drctry, text_content, i);
		if (addtxt < 0)
		{
			close(drctry);
			return (-1);
		}
	}

	close(drctry);
	return (1);
}

