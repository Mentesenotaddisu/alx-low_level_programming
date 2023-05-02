#include "lists.h"
/**
 * free_listint - entr
 * @head: ..
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (h)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
