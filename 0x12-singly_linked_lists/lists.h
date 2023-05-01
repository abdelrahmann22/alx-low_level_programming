#ifndef _LISTS_H_
#define _LISTS_H_

/**
 * struct list_t - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
*/

typedef struct list_t
{
	char *str;
	int len;
	struct list_t *next;
}list_t;

size_t print_list(const list_t *h);

#endif
