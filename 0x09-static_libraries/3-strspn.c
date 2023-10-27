#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * _strspn - gets the length of a prefix substring
  * @s: a char type point to string1
  * @accept: a char type point to string2
  *
  * Return: the length of the substring found
  */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	i = strspn(s, accept);
	return (i);
}
