#include "lists.h"

/**
  * reverse_listint - a function that reverses a list
  * @head: A pointer hold a pointer to the head
  *
  * Return: A pointer to tne new head
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *nxt;

	current = *head;
	*head = NULL;
	while (current != NULL)
	{
		nxt = current->next;
		current->next = *head;
		*head = current;
		current = nxt;
	}
	return (*head);
}
