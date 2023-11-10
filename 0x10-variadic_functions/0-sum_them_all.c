#include "variadic_functions.h"

/**
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start (ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg (ap, unsigned int);

	va_end (ap);
	return (sum);
}
