#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	int n = 0 , x =0 , i , j;
	char *str;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[n] != '\0')
		n++;
	while (s2[x] != '\0')
		x++;
	
	str = (char *)malloc(sizeof(char) * (n + x + 1));

	if (str ==  NULL)
	{
		free(str);
		return(NULL);
	}
	for (i = 0; i < n; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < x; j++)
	{
		str[i++] = s2[j];
	}

	return (str);
}
