#include <stdio.h>
#include "main.h"

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = 0; n <= 98; n++)
		{
			printf("%d", n);
			if ( n != 98)
			{
				printf(", ");
			}
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		n--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");

}
