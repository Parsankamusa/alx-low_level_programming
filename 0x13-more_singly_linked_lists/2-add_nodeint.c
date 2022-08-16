#include "lists.h"

/**
 * *add_nodeint - add new node at  beggining
 * @head: head of node
 * @n: int n of elements
 *
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
