#include <stdio.h>

/**
  * main - prints the first 50 Fibonacci numbers
  *
  * Return: The summation
  */
int main(void)
{
	unsigned long num1 = 0;
	unsigned long num2 = 1;
	unsigned long sum;
	int total;

	while (1)
	{
		sum = num1 + num2;
		if (sum > 4000000)
			break;

		if (sum % 2 == 0)
			total += sum;

		num1 = num2;
		num2 = sum;
	}
	printf("%d\n", total);
	return (0);
}
