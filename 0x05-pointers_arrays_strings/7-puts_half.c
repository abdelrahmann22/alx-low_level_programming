#include "main.h"
/**
 * puts_half - print second half of a string
 * @str: char array string type
 * Description: If odd number of chars, print (length - 1) / 2
 */
void puts_half(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		count++;
	}

	if (count % 2 == 0)
	{
		count /= 2;
		while (*(str + count))
		{
			_putchar(*(str + count));
			count++;
		}
	}
	else if (count % 2 != 0)
	{
		count = (count - 1) / 2;
		while (*(str + count) != '\0')
		{
			_putchar(*(str + count));
			count++;
		}
	}
	_putchar('\n');
}
