#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @a: integer input
 * Return: absolute value of ab
 */
int _abs(int a)
{
	int k = a;
	int absvalue;

	if (k < 0)
	{
		k = k * (-1);
	}
	absvalue = k;
	return (absvalue);
}
