#include "lists.h"

/**
  * add_node - adds a new node at the beginning of linked list
  * @head: A pointer point to the head
  * @str: the new string
  *
  * Return: address of the new element, or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->len = strlen(str);
	ptr->next = (*head);
	*head = ptr;
	return (ptr);
}
