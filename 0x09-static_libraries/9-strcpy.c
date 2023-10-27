#include <stdio.h>
#include "main.h"
#include <string.h>

/**
  * *_strcpy - copies the string including terminating null byte (\0)
  * @dest: a char type parameter
  * @src: a char type parameter
  *
  * Return: Copied string
  */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
