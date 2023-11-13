#include "variadic_functions.h"

/**
  * print_all - a function that prints anything
  * @format:  list of types of arguments passed
  *
  * Return: Nothing
  */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0;
	va_list args;
	char *s = "";
	f_tp formats[] = {{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}};

	va_start(args, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *formats[j].specifier)
			{
				formats[j].f(s, args);
				s = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

/**
  * print_char - print a char type parameters
  * @separator: the separator of characters
  * @args: a list of variadic arguments
  *
  * Return: Nothing
  */
void print_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
  * print_int - print an int type parameters
  * @separator: the separator of intgers
  * @args: a list of variadic arguments
  *
  * Return: Nothing
  */
void print_int(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}

/**
  * print_float - print a float type parameters
  * @separator: the separator of intgers
  * @args: a list of variadic arguments
  *
  * Return: Nothing
  */
void print_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
  * print_string - print a string type parameters
  * @separator: the separator of characters
  * @args: a list of variadic arguments
  *
  * Return: Nothing
  */
void print_string(char *separator, va_list args)
{
	char *ptr = va_arg(args, char *);

	if (ptr == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}
	printf("%s%s", separator, ptr);
}
