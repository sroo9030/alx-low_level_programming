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
	int f, w, len = 0;

	if (filename == NULL)
		return (-1);

	while (text_content[len])
		len++;

	if (text_content == NULL)
		text_content = "";

	f = open(filename, O_RDONLY | O_CREAT | O_TRUNC, 0600);
	if (f == -1)
		return (-1);

	w = write(f, text_content, len);
	if (w == -1)
		return (-1);
	close(f);
	return (1);
}
