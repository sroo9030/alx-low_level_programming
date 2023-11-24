#include "main.h"

/**
  * flip_bits - function flips to get from one number to another
  * @n: the number to flip
  * @m: number to get to
  *
  * Return:  the number of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int result = n ^ m;

	while (result > 0)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);
}
