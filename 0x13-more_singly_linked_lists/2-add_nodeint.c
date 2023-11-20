#include "lists.h"

/**
  * add_nodeint - adds a new node at the beginning
  * @head: A pointer point to a pointer to the head
  * @n: the new element
  *
  * Return: address of the new element, or NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (n < 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
