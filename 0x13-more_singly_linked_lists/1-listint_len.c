#include "lists.h"

/**
  * listint_len - returns the number of elements in a linked list
  * @h: points to the head of the node
  *
  * Return: number of elements
  */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
