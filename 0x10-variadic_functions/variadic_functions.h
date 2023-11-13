#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/* Functions Prototype*/
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(char *separator, va_list args);
void print_int(char *separator, va_list args);
void print_float(char *separator, va_list args);
void print_string(char *separator, va_list args);

/**
  * struct format_type - structure to identify the format
  * @specifier: define the format type
  * @f: a function pointer to print
  */
typedef struct format_type
{
	char *specifier;
	void (*f)(char *specifier, va_list args);
} f_tp;
#endif
