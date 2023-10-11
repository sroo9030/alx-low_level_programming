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
	unsigned long sum, num1_h1, num1_h2, num2_h1, num2_h2;
	unsigned long h1, h2; 
	int i;

	num1_h1 = num1 / 10000000000;
	num1_h2 = num1 % 10000000000;
	num2_h1 = num2 / 10000000000;
	num2_h2 = num2 % 10000000000;
	
	for (i = 0; i <= 98; i++)
	{
		if (i == 98)
			printf("%lu\n", sum);
		else if (i >= 92)
		{
			h1 = num1_h1 + num2_h1;
			h2 = num1_h2 + num2_h2;
			if (h2 > 9999999999)
			{
				h1 += 1;
				h2 %= 10000000000;
			}
			printf("%lu%lu", h1, h2);
			num1_h1 = num2_h1;
			num1_h2 = num2_h2;
			num2_h1 = h1;
			num2_h2 = h2;
		}
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
