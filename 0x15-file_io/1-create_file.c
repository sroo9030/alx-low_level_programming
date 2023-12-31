#include "main.h"

/**
  * create_file - a function creates a file
  * @filename: name of the file to create
  * @text_content: the content of the file
  *
  * Return: 1 if success, -1 otherwise
  */
int create_file(const char *filename, char *text_content)
{
	int f, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[len])
		len++;
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (f == -1)
		return (-1);

	write(f, text_content, len);
	close(f);
	return (1);
}
