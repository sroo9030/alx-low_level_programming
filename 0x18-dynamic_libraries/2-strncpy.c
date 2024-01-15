#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * *_strncpy - copies a string
  * @dest: a char type parameter
  * @src: a char type parameter
  * @n: an int type parameter
  *
  * Return: A pointer to a string1
  */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr;

	ptr = strncpy(dest, src, n);
	return (ptr);
}
