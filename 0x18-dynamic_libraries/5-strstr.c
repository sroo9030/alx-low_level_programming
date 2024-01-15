#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * *_strstr - locates a substring
  * @haystack: a char type pointer
  * @needle: a char type pointer
  *
  * Return: A pointer to the beginning of the first occurrence
  * of string2 in string1, NULL otherwise
  */
char *_strstr(char *haystack, char *needle)
{
	char *result;

	result = strstr(haystack, needle);
	return (result);
}
