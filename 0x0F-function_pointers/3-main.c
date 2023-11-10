#include "3-calc.h"

/**
  * main - perform math operation
  * @argc: an int type argument
  * @argv: a char type argument
  *
  * Return: the result of the operation
  */
int main(int argc, char **argv)
{
	int a, b;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", op(a, b));
	return (0);
}
