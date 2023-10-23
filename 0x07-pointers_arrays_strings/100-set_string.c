#include <stdio.h>
#include "main.h"

/**
  * set_string - sets the value of a pointer to a char
  * @s: a char type pointer point to string to be change
  * @to: a char type pointer point to string to change to
  */
void set_string(char **s, char *to)
{
	*s = to;
}
