#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *tempnode;

	if (head == NULL)
		return;
	while (*head)
	{
		tempnode = (*head)->next;
		free(*head);
		*head = tempnode;
	}
	*head = NULL;
}
