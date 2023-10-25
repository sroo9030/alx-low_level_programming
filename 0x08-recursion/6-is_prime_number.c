#include <stdio.h>
#include "main.h"

/**
  * prime - checks if the integer is prime
  * @p: an int number iterates to ckeck with
  * @n: the integer to check
  *
  * Return: 1 if it is a prime number, 0 otherwise
  */
int prime(int p, int n)
{
	if (p == n)
		return (1);

	if (n % p == 0)
		return (0);

	return (prime(p + 1, n));
}

/**
  * is_prime_number - check if an integer is a prime number
  * @n: the number to check
  *
  * Return: 1 if n prime number, 0 otherwise
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime(2, n));
}
