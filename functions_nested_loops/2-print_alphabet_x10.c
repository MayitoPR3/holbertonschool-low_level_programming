#include "main.h"
/**
 *print_alphabet_x10 - Print the alphabet in lower case 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char a;
	int b = 0;

	while (b <= 9)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		b++;
	}
}
