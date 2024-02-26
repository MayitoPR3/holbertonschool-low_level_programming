#include "main.h"
/**
 *print_rev- print a string in reverse
 *@s: string in reverse
 */
void print_rev(char *s)
{
	int rev = 0;

	while (s[rev] != '\0')
	{
		rev++;
	}
	for (rev -= 1; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
