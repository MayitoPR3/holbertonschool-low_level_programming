#include "main.h"
/**
 * int factorial - returns given number
 * @n: number to return
 * Return: given number
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
