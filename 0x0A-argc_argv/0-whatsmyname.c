#include <stdio.h>
#include "main.h"

/**
  * main - a program that prints its name
  * @argc: an int type argument
  * @argv: a char type argument
  *
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
