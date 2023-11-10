#include "variadic_functions.h"

/**
  * print_strings - prints strings, followed by a new line
  * @separator: the string to be printed between strings
  * @n: number of strings passed to the function
  *
  * Return: Nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	char *s;

	if (n > 0)
	{
		va_start(str, n);
		for (i = 0; i < n; i++)
		{
			s = va_arg(str, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);

			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}
		va_end(str);
	}
	printf("\n");
}
