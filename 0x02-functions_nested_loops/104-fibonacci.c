#include <stdio.h>

/**
  * main - Prints the first 98 Fibonacci numbers
  *
  * Return: Print Fibonacci numbers
  */
int main(void)
{
	unsigned long num1 = 1, num2 = 2;
	unsigned long num_h1 = 0, num_h2 = 0;
	unsigned long sum, h1, h2;
	int i;

	printf("%lu, %lu, ", num1, num2);
	for (i = 0; i <= 98; i++)
	{
		if (i != 98 && i != 0)
			printf(", ");

		if (num1 + num2 > 10000000000 || num_h2 > 0 || num_h1 > 0)
		{
			h1 = (num1 + num2) / 10000000000;
			h2 = (num1 + num2) % 10000000000;
			sum = num_h1 + num_h2 + h1;
			num_h1 = num_h2, num_h2 = sum;
			num1 = num2, num2 = h2;
			printf("%lu%010lu", num_h2, num2);
		}
		else
		{
			sum = num1 + num2;
			printf("%lu", sum);
			num1 = num2;
			num2 = sum;
		}
	}
	printf("\n");
	return (0);
}
