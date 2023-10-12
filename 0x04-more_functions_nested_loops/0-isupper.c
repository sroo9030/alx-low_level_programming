#include <stdio.h>
#include "main.h"

/**
  * _isupper - Checks for uppercase character.
  *
  * Return: Always 0
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
			i++;
	}
	return (0);
}
