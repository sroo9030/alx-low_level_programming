#include <stdio.h>
#include "main.h"

/**
  * main - prints all arguments it receives 
  * @argc: an int type argument
  * @argv: a char type argument
  *
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
