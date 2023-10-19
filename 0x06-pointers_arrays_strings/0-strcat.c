#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * *_strcat - concatenates two strings
  * @dest: a char type parameter
  * @src: a char type parameter
  *
  * Return:  pointer to the concatenated string (dest)
  */
char *_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = strcat(dest, src);
	return (ptr);
}
