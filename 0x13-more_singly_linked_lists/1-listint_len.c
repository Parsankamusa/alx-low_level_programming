#include "lists.h"

/**
 * listint_len - prints elements
 * @h: linked lists
 *
 * Return: numbers of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
