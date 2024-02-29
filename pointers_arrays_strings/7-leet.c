#include "main.h"
/**
 *leet- encode into 1337
 *@n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int j, m;
	char s1[] = "aAeEoOtTiL";
	char s2[] = "4433007711";

	for (j = 0; n[j] != '\0'; j++)
	{
		for (m = 0; m < 10; m++)
		{
			if (n[j] == s1[m])
			{
				n[j] = s2[m];
			}
		}
	}
	return (n);
}
