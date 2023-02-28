#include <stdio.h>
/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * Return: 0
 */

int main(void)
{
	int first = 1;
	int second = 2;
	int next = first + second;
	int count = 3;

	printf("%d, ", first);
	printf("%d, ", second);

	while (count <= 50)
	{
		if (count == 0)
		{
			printf("%d \n", next);
		}
		else
		{
			printf("%d, ", next);
		}

		first = second;
		second = next;

		next = first + second;
		count++;
	}

	return (0);
}
