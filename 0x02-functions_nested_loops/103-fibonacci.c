#include <stdio.h>
/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int first = 1;
	long int second = 2;
	long int third = 3;
	long int sum = 0;
	long limit = 4000000;

	while (second <= limit)
	{
		if (second % 2 == 0)
		{
			sum += second;
		}
		third = first + second;
		first = second;
		second = third;
	}
	printf("%lu\n", sum);
	return (0);
}
