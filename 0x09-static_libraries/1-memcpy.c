#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * *_memcpy - copies memory area
  * @dest: a char type point to memory location to copy to
  * @src: a char type point to memory location to copy from
  * @n: an int type parameter, number of bytes
  *
  * Return: A pointer
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
