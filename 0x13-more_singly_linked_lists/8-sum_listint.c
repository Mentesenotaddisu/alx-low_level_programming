#include "lists.h"
/**
 *sum_listint - entry
 *@head: ..
 *
 *Return: ..
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp)
	{

	sum += temp->n;
	temp = temp->next;
	}
	return (sum);
}
