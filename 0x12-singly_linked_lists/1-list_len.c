#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: Pointer to the list_t list
 * 
 * Return: number of elements in h
*/

size_t list_len(const list_t *h)
{
	list_t *temp;
	int count = 0;

	temp = h;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
