#include "stdio.h"
/**
 *main - prints the name of the file
 *
 *Return: always 0
*/
int main(void)
{
	#define __File__

	printf("%s", __FILE__);
	return (0);
}
