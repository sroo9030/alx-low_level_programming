#include <stdio.h>
/**
  * main - print different combinations of two two-digit numbers.
  *
  * Return: Always 0
  */
int main(void)
{
	int x, y;

	for (x = 0; x <= 98; x++)
	{
		for (y = 0; y <= 99; y++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(' ');
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');

			if (x == 98 && y == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
