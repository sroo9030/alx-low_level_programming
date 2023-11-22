#include "lists.h"

/**
  * print_listint_safe - a function that prints a list
  * @head: a pointer to the head node
  *
  * Return: number of node
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current;

	current = head;
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (count > 8)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
		current = current->next;
	}
	return (count);
}
