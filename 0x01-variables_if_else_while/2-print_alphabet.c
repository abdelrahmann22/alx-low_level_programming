#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	while ( a<= 122 )
	{
		putchar(a);
		putchar('\n');
		a++;
	}
	return (0);
}
