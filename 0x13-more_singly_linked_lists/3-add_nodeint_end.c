#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end
  * @head: A pointer point to a pointer to the head
  * @n: the new element
  *
  * Return: address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if ((*head) == NULL)
	{
		*head = new;
	}
	else
	{
		temp = (*head);
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (new);
}
