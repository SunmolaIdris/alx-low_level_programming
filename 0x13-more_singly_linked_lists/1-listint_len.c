#include "lists.h"

/**
 * listint_len - function that returns the
 * number of elements in a linked list.
 * @h: linked list of typelistint_t to go through
 *
 * Return - size_t: number of nodes to return
 */

size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}

	return (length);
}
