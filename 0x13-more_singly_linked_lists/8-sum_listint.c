#include "lists.h"

/**
  * sum_listint - a function sum of all the data
  * @head: A pointer point to the head
  *
  * Return: the sum, if empty return 0
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
