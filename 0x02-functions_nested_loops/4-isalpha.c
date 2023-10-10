#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c  is a letter, lowercase or uppercase
 *
 * Retuen: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
