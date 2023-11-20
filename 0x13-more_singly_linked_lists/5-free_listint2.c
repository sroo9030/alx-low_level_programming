#include "lists.h"

/**
  * free_listint2 - a function that frees a list
  * @head: A pointer hold a pointer to the head
  */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head == NULL)
		return;

	current = *head;
	while (current)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	*head = NULL;
}
