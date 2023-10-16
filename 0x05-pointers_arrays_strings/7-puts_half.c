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
	int j = (len - 1) / 2;

	if (len % 2 == 0)
	{
		while (str[i] != '\0')
		{
			putchar(str[i + j + 1]);
			i++;
		}
	} else
		putchar(str[j]);

	putchar('\n');
}
