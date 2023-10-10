#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * description print alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');
}
