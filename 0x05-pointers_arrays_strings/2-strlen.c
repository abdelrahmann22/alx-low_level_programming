#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 */
int _strlen(char *s){
	int counter, i = 0;
	
	while (*(s + i) != '\0')
	{
		counter += 1;
		i++;
	}
	return (counter);
}
