#include "lists.h"

/**
  * get_nodeint_at_index - function returns the nth node of a list
  * @head: A pointer point to the head
  * @index: index of the node
  *
  * Return: data of selected node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *ptr;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (index == count)
		{
			ptr = head;
			printf("%d\n", head->n);
			return (ptr);
		}
		else
		{
			count++;
			head = head->next;
		}
	}
	return (NULL);
}
