#include <stdio.h>
#include "main.h"

/**
  * _isupper - Checks for uppercase character.
  * @c: The character to check
  * @i: Hold the upparcase characters
  *
  * Return: 1 if the character is uppercase 0 otherwise
  */
int _isupper(int c)
{
	int i = 'A';
	
	while (i <= 'Z')
	{
		if (i == c)
		{
			return (1);
			break;
		} else
			i++:
	}
	return (0);
}
