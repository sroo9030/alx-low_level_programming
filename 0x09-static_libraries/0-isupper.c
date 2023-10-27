#include <stdio.h>
#include "main.h"

/**
  * _isupper - Checks for uppercase character
  * @c: int type number
  *
  * Return: 1 if the character is uppercase 0 otherwise
  */
int _isupper(int c)
{
	int i = 'A';

	while (i <= 'Z')
	{
		if (i == c)
			return (1);
		i++;
	}
	return (0);
}
