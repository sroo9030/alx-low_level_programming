#include <stdio.h>
/**
  * main - prints combinations of single-digit
  *
  * Return: Always 0
  */
int main(void)
{
	int i;	
	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
