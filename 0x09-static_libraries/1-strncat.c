#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * *_strncat - concatenates two strings use at most n bytes
  * @dest: a char type parameter
  * @src: a char type parameter
  * @n: an int type parameter
  *
  * Return:  The value string1, the concatenated string
  */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr;

	ptr = strncat(dest, src, n);
	return (ptr);
}
