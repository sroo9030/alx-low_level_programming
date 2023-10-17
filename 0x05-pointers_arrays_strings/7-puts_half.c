#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * puts_half - prints half of a string
  * @str: a char typr parameter
  *
  * Return: Always 0
  */
void puts_half(char *str)
{
	int i = 0;
	int len = strlen(str);
	int j;

	if (len % 2 == 0)
		j = len / 2;

	else
		j = (len + 1) / 2;

	for (i = j; i < len; i++)
		putchar(str[i]);

	putchar('\n');
}
