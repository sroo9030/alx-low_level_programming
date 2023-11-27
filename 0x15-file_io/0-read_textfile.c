#include "main.h"

/**
  * read_textfile - function reads a text file and
  * prints it to standard output
  * @filename: a pointer to the file
  * @letters: the size of the text file
  *
  * Return: actual number of letters it could read and print
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, r, w;
	char *s;

	if (filename == NULL || letters == 0)
		return (0);

	s = malloc(letters * sizeof(char));
	if (s == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		free(s);
		return (0);
	}

	r = read(f, s, letters);
	if (r == -1)
	{
		free(s);
		return (0);
	}

	w = write(STDOUT_FILENO, s, r);
	if (w == -1)
	{
		free(s);
		return (0);
	}
	close(f);
	return (w);
}
