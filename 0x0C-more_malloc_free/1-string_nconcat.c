#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
  * *string_nconcat - a function that concatenates two strings
  * @s1: a chat point tp string 1
  * @s2: a chat point tp string 2
  * @n: an int type parameter
  *
  * Return: A pointer point to a new string contain s1 & s2
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s, n1, n2, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	n1 = strlen(s1);
	n2 = strlen(s2);

	if (n > n2)
	{
		s = n1 + n2;
		ptr = malloc((s + 1) * sizeof(char));
	} else
	{
		s = n1 + n;
		ptr = malloc((s + 1) * sizeof(char));
	}

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n1; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n2 && j < n; j++, i++)
		ptr[i] = s2[j];

	ptr[s] = '\0';
	return (ptr);
}
