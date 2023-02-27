#include "main.h"

int print_last_digit(int x)
{
	x = (x % 10);

	if (x < 0)
	{
		x = ( -1 * x);
	}

	_putchar(x + '0');
	return (x);
}
