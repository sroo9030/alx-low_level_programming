#include "lists.h"

/**
  * print_list - prints all the elements of list
  * @h: a structure type point to linked list
  *
  * Return: Number of elements
  */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	list_t *l;

	l = malloc(sizeof(list_t));
	if (l == NULL)
	{
		printf("Error");
		free(l);
		return (1);
	}

	while (h)
	{
		if (h->str == NULL)
		{
			l->len = 0;
			printf("[%u] ", l->len);
			printf("(nil)\n");
		}
		else
		{
			printf("[%u] ", h->len);
			printf("%s\n", h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
