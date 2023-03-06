#include "main.h"

/**
 * print_square - function that prints a square
 * @size: Size is a variable
 * Return: Always 0 .
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		if (i < (i - size))
			_putchar('\n');
	}
	_putchar('\n');
}
