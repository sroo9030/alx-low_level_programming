#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print the alphabet
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
