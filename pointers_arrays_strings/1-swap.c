#include "main.h"
/**
 *swap_int- swaps values of two integers
 *@a: is 98
 *@b: is 42
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	 c = *a;
	*a = *b;
	*b = c;
}
