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

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n",  h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
