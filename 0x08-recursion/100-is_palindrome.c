#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * palindrome - check a string is a palindrome
  * @str: string to check
  * @s: index of the start of the string
  * @e: index of the end of the atring
  *
  * Return: 1 if it palindrome, 0 otherwise
  */
int palindrome(char *str, int s, int e)
{
	if (str[s] != str[e])
		return (0);

	if (s < e + 1)
		return (palindrome(str, s + 1, e - 1));

	return (1);
}

/**
  * is_palindrome - check if a string is a palindrome
  * @s: a string
  *
  * Return: 1 if it palindrome, 0 otherwise
  */
int is_palindrome(char *s)
{
	int n = strlen(s);

	if (n == 0)
		return (1);

	return (palindrome(s, 0, n - 1));
}
