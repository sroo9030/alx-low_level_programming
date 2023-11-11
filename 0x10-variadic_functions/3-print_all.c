#include "variadic_functions.h"

/**
  */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list args;
	char *s;

	if (format != NULL)
	{
		va_start(args, format);
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);
					if (s == NULL)
						printf("(nil)");
					else
						printf("%s", s);
					break;
			}
			i++;
			if (format[i] != '\0' && 
					(format[i] == 'c' || 
					 format[i] == 'i' || 
					 format[i] == 'f' || 
					 format[i] == 's'))
				printf(", ");
		}
		va_end(args);		
	}
	printf("\n");
}
