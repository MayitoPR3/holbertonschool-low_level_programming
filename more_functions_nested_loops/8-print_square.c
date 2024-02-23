#include "main.h"
/**
 *print_square- prints a square
 *@size: size of the square
 */
void print_square(int size)
{
	int m, o;

	if (size > 0)
	{
		for (m = 0; m < size; m++)
		{
			for (o = 0; o < size; o++)
			{
				_putchar('#');
			}
				_putchar('\n');
		}
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
