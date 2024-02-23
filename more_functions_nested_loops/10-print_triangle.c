#include "main.h"
/**
 *print_triangle- prints a triangle
 *@size: size of the triangle
 */
void print_triangle(int size)
{
	int m, o;

	if (size > 0)
	{
		for (m = 0; m < size; m++)
		{
			for (o = 0; o < size; o++)
			{
				if (o < size - (m + 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
