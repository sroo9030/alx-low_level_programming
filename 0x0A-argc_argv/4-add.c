#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
  * main - adds positive numbers
  * @argc: an int type argument
  * @argv: a char type argument
  *
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
				else
				{
					sum += atoi(argv[i]);
				}
			}
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");

	return (0);
}
