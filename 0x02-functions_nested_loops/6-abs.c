#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @ab: integer input
 * Return: absolute value of ab
 */
int _abs(int x)
{
	if (x < 0)
	{
		return (x-(x*2));
	}
	else
	{
		return (x);
	}
}
