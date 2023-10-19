#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
  * *string_toupper - changes all lowercase letters to uppercasa
  *
  * Return: The uppercase string
  */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}
