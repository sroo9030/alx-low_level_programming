#include "main.h"

/**
  * append_text_to_file - a function appends text at the end of file
  * @filename: name of the file
  * @text_content: the content of the file
  *
  * Return: 1 if success, -1 otherwise
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[len])
		len++;

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);

	write(f, text_content, len);
	close(f);
	return (1);
}
