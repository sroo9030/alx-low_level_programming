#include <stdio.h>
#include "main.h"

/**
  * _strlen - the length of a string
  * @s: a chat type parameter
  *
  * Return: The length
  */
int _strlen(char *s)
{
	int len = 0, i = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
