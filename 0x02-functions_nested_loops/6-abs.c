#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 *
 * @i - input number as an integer
 *
 * Return: Absolute value
 */
int _abs(int i)
{
	int i;

	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
