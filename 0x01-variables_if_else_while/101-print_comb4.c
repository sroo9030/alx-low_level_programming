#include <stdio.h>
/**
  * main - print different combinations of three digits
  *
  * Return: Always 0
  */
int main(void)
{
	int x, y, z;

	for (x = 0; x < 9; x++)
	{
		for (y = x + 1 ; y < 10; y++)
		{
			for (z = y + 1; z < 11; z++)
			{
				putchar((x % 10) + '0');
				putchar((y % 10) + '0');
				putchar((z % 10) + '0');
				if (x == 8 && y == 9 && z ==10)
					continue;
				putchar(',');
				putchar(' ');
			}
		}

	}

	putchar('\n');
	return (0);
}
