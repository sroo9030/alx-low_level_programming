#include "lists.h"

/**
  * free_list - a function that frees a linked list
  * @head: A pointer point to the head
  */
void free_list(list_t *head)
{
	list_t *c, *n;

	c = head;
	while (c != NULL)
	{
		n = c->next;
		free(c->str);
		free(c);
		c = n;
	}
}
