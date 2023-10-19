#include <stdio.h>
#include "main.h"

/**
  * *leet - encodes a string into 1337
  * @s: a char type string
  *
  * Return: Encoded string
  */
char *leet(char *s)
{
	int i = 0, j;
	char str1[] = "aeotl";
	char str2[] = "AEOTL";
	char str3[] = "43071";

	while (s[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == str1[j] || s[i] == str2[j])
				s[i] = str3[j];
		}

		i++;
	}
	return (s);
}
