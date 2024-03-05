#include "main.h"

/**
 * factorial - returns given number
 * @n: number input
 * Return: factorial number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));
}
