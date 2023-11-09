#include "function_pointers.h"

/**
  * print_name - a callback function to print a name
  * @name: the name to print
  * @f: a function pointer
  *
  * Return: Nothing
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
