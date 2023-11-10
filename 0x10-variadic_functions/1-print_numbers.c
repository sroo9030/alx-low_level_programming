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

	va_start(nums, n);
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(nums, unsigned int));
			if (i != n - 1)
				printf("%s ", p);
		}
	}
	printf("\n");
	va_end(nums);
}
