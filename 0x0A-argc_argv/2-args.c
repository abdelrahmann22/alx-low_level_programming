#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	while(argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
