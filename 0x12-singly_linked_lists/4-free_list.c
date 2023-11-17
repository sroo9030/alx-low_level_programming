#include "lists.h"

/**
  * free_list - a function that frees a linked list
  * @head: A pointer point to the head
  */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_list(head->next);

		free(head->str);
		free(head);
	}
}
