#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * _print_rev_recursion - prints a string in reverse
  * @s: a string
  */
void _print_rev_recursion(char *s)
{
	int len = strlen(s);

	while (len - 1 >= 0)
	{
		putchar(s[len - 1]);
		len--;
	}
	putchar('\n');
}
