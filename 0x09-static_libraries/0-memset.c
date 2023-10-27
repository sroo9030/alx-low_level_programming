#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * *_memset -  fills memory with a constant byte
  * @s: a char type parameter
  * @b: a char type parameter
  * @n: an int type parameter
  *
  * Return: A ointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
