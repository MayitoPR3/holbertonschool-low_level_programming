#include "main.h"
/**
 *_strncat- concatenates two strings
 *@dest: destination
 *@src: source
 *@n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int j, m = 0;

	while (dest[m])
	{
		m++;
	}
	for (j = 0; src[j] && j < n; j++)
	{
		dest[m] = src[j];
		m++;
	}
	dest[m] = '\0';
	return (dest);
}
