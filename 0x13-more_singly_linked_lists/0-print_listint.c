#include "lists.h"

/**
  * print_listint - prints all the elements of a list
  * @h: points to the head of the node
  *
  * Return: the number of nodes
  */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
