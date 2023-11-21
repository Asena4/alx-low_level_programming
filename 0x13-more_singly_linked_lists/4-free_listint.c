#include "lists.h"

/**
 * free_listint - function that frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *tempnode;

	while (head)
	{
		tempnode = head->next;
		free(head);
		head = tempnode;
	}
}
