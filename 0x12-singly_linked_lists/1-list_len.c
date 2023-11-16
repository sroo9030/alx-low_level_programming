#include "lists.h"

/**
  * list_len - returns the number of elements in a list
  * @h: a structure type point to linked list
  *
  * Return: Number of elements
  */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
