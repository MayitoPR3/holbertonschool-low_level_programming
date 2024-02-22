#include "main.h"
/**
 *print_line- function that draws a stright line in terminal
 *@n: is the number of times the character
 */
void print_line(int n)
{
	int a;

		for (a = 0; a < n; a++)
		{
			if (n > 0)
			{
				_putchar('_');
			}
		}
		_putchar('\n');
}
