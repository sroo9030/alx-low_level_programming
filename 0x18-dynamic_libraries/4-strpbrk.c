#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * *_strpbrk - searches a string for any of a set of bytes
  * @s: a char type pointer point to string1
  * @accept: a char type pointer point to string2
  *
  * Return: A pointer to the byte in s that matches one
  * of the bytes in accept, or NULL otherwise
  */
char *_strpbrk(char *s, char *accept)
{
	char *result;

	result = strpbrk(s, accept);
	return (result);
}
