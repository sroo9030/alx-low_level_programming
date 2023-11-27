#include "main.h"

/**
  * main - program that copies the content of a file to another file
  * @ac: number of arguments
  * @av: string of arguments
  *
  * Return: Alawys 0
  */
int main(int ac, char **av)
{
	int f1, f2;
	int s1 = 1024, s2 = 0;
	char buf[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	f1 = open(av[1], O_RDONLY);
	if (f1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	f2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH);
	if (f2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]),
			close(f1), exit(99);
	while (s1 == 1024)
	{
		s1 = read(f1, buf, 1024);
		if (s1 == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

		s2 = write(f2, buf, s1);
		if (s2 < s1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	if (close(f1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1), exit(100);
	if (close(f2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2), exit(100);
	return (0);
}
