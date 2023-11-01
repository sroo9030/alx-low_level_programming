#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>
#include "main.h"

/**
  * minCoins - prints the minimum number of coins
  * @coins: an int type array of coins
  * @m: minimum number of coins
  * @v: amount of money
  *
  * Return: Result
  */
int minCoins(int coins[], int m, int v)
{
	int i, sub_res;
	int res = INT_MAX;

	for (i = 0; i < m; i++)
	{
		if (coins[i] <= v)
		{
			sub_res = minCoins(coins, m, v - coins[i]);

			if (sub_res != INT_MAX && sub_res + 1 < res)
			{
				res = sub_res + 1;
			}
		}
	}
	return (res);
}
/**
  * main - prints the minimum number of coins
  * @argc: an int type argument
  * @argv: a char type argument
  *
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	int coins[] = {1, 2, 5, 10, 25};
	int v, m, result;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	v = atoi(argv[1]);
	if (v < 0)
		return (0);

	m = sizeof(coins) / sizeof(coins[0]);
	result = (minCoins(coins, m, v));
	printf("%d\n", result);
	return (0);
}
