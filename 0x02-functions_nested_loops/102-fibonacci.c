#include <stdio.h>

/**
  * main - prints the first 50 Fibonacci numbers
  *
  * Return: The summation
  */
int main(void)
{
	long int num1 = 1;
	long int num2 = 2;
	long int sum;
	int i;

	for( i = 1; i <= 50; i++)
	{
		if (i == 50)
			printf("%lu \n", sum);

		else if (i < 3)
			printf("%d, ", i);

		else
		{
			sum = num1 + num2;
			printf("%lu, ", sum);
		num1 = num2;
		num2 = sum;
		sum = num1 + num2;
		}
	}
	return (0);
}
