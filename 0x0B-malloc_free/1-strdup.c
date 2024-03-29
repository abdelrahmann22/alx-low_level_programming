#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	unsigned int n = 0, i;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[n] != '\0')
		n++;

	ptr = (char *)malloc((n + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		ptr[i] = str[i];

	return (ptr);
}
