#include <stdio.h>

/**
  * main - prints the first 50 Fibonacci numbers
  *
  * Return: The summation
  */
int main(void)
{
	unsigned long num1 = 1;
	unsigned long num2 = 2;
	unsigned long sum;
	int i;

	for (i = 1; i <= 98; i++)
	{
		sum = num1 + num2;
		if (i == 98)
			printf("%lu\n", sum);

		else if (i < 3)
			printf("%d, ", i);

		else
		{
			sum = num1 + num2;
			printf("%lu, ", sum);
			num1 = num2;
			num2 = sum;
		}
	}
	return (0);
}
