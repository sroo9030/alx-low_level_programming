#include "lists.h"

/**
  * free_dlistint -  a function that frees a dlistint
  * @head: A pointer to the head of the list
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
