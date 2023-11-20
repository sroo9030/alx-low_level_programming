#include "lists.h"

/**
  * free_listint - frees a linked list
  * @head: A pointer point to the head
  */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_listint(head->next);
		free(head);
	}
}
