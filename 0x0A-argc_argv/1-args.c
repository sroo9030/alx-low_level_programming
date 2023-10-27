#include <stdio.h>
#include "main.h"

/**
  * main - prints the number of arguments passed into it
  * @argc: an int type argument
  * @argv: a char type argument
  *
  * Return: Always 0
  */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
