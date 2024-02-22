#include "main.h"
/**
 *more_numbers- prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int t, m;

	for (t = 0; t <= 10; t++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m >= 10)
			{
				_putchar((m / 10) + '0');
			}
			_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}
