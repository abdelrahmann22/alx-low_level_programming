#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * 10 times.
 * Return: Always 0.
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
				_putchar((b / 10) + 48);
			_putchar((b % 10) + 48);
		}
		_putchar('\n');
	}
}
