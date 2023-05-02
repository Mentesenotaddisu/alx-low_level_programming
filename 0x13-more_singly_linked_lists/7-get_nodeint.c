#include "lists.h"
/**
 *get_nodeint_at_index - entry
 *@head: ..
 *@index: ..
 *Return: ..
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int x = 0;

	while (temp && x < index)
	{

	temp = temp->next;
	x++;
	}
	return (temp ? temp : NULL);
}
