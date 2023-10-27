#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * *_strchr -  locates a character in a string
  * @s: a char type string
  * @c: a char type character to be located
  *
  * Return: If successful returns a pointer to the first occurrence
  * of c otherwise return NULL
  */
char *_strchr(char *s, char c)
{
	char *ptr;

	ptr = strchr(s, c);
	return (ptr);
}
