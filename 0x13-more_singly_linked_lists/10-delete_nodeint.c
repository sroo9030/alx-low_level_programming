#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at index
  * @head: A pointer hold a pointer to the head
  * @idx: index of the list where the new node should be added
  *
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *prev, *temp;

	if (*head == NULL)
		return (-1);

	temp = *head;
	prev = NULL;

	while (temp != NULL && count < index)
	{
		prev = temp;
		temp = temp->next;
		count++;
	}

	if (temp == NULL)
		return (-1);

	if (prev == NULL)
		*head = temp->next;
	else
		prev->next = temp->next;

	free(temp);
	return (1);
}
