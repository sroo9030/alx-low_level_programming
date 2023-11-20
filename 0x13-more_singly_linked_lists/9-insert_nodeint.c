#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: A pointer hold a pointer to the head
  * @idx: index of the list where the new node should be added
  * @n: the data of the node
  *
  * Return: the address of the new node, or NULL if it failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new, *prev, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		return (new);
	}
	if (idx == 0)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	temp = *head;
	prev = NULL;
	while (temp != NULL && count < idx)
	{
		prev = temp;
		temp = temp->next;
		count++;
	}
	if (count == idx)
	{
		prev->next = new;
		new->next = temp;
		return (new);
	}
	else
	{
		free(new);
		return (NULL);
	}
}
