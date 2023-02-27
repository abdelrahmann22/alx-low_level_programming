#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @x: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int x)
{
	x = (x % 10);

	if (x < 0)
	{
		x = (-1 * x);
	}

	_putchar(x + '0');
	return (x);
}
