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
	long int num = 4000000;
	long int sum = num1 + num2;

	while (sum < num)
	{
		if (num2 ==2)
			printf("%lu", num2);

		else if (sum % 2 == 0)
			printf(" ,%lu", sum);

		num1 = num2;
		num2 = sum;
		sum = num1 + num2;
	}
	printf("\n");
	return (0);
}
