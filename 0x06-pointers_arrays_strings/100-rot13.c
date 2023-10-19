#include <stdio.h>
#include "main.h"

/**
  * *rot13 - encodes a string using rot13
  * @s: a char type string
  *
  * Return: Encoded string
  */
char *rot13(char *s)
{
	int i, j;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 53; j++)
		{
			if (s1[j] == s[i])
				s[i] = s2[j];
		}
	}
	return (s);
}
