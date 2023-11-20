#include "lists.h"

/**
  * pop_listint - a function that deletes the head node
  * @head: A pointer hold a pointer to the head
  *
  * Return: the head node’s data
  */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (data);

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);
	return (data);
}
