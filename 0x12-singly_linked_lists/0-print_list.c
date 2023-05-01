#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all linked list elements
 * @h: pointer to list_t to print the list
 * Return: nodes number printed
*/

size_t print_list(const list_t *h)
{
	size_t s;

	for (s = 0; h; s++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (s);
}
