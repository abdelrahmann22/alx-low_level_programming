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
	int n, i;
	char *ptr;

	while (*(str + n) != '\0')
		n++;
	if (str == NULL)
		return (NULL);

	ptr = (char *)malloc(n * sizeof(char));

	for (i = 0; i < n; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
	free(ptr);
}
