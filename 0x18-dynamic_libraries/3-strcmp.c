#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * _strcmp - compares two strings
  * @s1: a char type paramter
  * @s2: a char type paramter
  *
  * Return: A  value indicating the relationship between
  * the two strings
  */
int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);
	return (result);
}
