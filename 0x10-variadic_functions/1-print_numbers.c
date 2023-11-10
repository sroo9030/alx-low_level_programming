#include "variadic_functions.h"

/**
  * print_numbers - prints numbers, followed by a new line
  * @separator: the string to be printed between numbers
  * @n: number of integers passed to the function
  *
  * Return: Nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;
	char *p;

	if (separator == NULL || *separator == 0)
		p = "";
	else
		p = (char *)separator;

	if (n > 0)
	{
		va_start(nums, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(nums,int));
			if (i != n - 1)
				printf("%s ", p);
		}
		va_end(nums);
	}
	printf("\n");
}
