#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * *@c:  The character to be checked
 *
 * Description: Retuen 1 for alphabetic characters 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
