#include "main.h"

/**
 * _pow_recursion - returns the value 
 * @x: value 1
 * @y: value 2
 * Return: values
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else
		return (x * _por_recursion(x, y - 1));
}
