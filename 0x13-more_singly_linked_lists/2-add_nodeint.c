#include "lists.h"
/**
 * listint_t - entry
 * @head: new node
 * @n: int
 * @add_nodeint: ..
 * Return: null or adress
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
		return (new);
}
