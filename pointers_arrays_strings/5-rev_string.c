#include "main.h"
/**
 *rev_string- function that reverses string
 *@s: strig
 */
void rev_string(char *s)
{
	int l = 0, in = 0;
	char m;

	while (s[in++])
		l++;
	for (in = l - 1; in >= l / 2; in--)
	{
		m = s[in];
		s[in] = s[l - in - 1];
		s[l - in - 1] = m;
	}
}
