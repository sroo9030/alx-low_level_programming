#include <stdio.h>
/**
  * main - Computes and prints the sum of multiples of 3 or 5
  * @n: The number that multiply by 3, 5, or 15
  *
  * Return: The sum all the multiples of 3 or 5 below 1024
  */
int main(void)
{
	int n;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0 || n % 15 == 0)
		{
			n +=n;
		}
	}
	return (n);
}
