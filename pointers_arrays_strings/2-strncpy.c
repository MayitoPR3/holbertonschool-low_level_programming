#include "main.h"
/**
 *_strncpy- copy one string to another
 *@dest: destination
 *@src: source
 *@n: number of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0, m = 0;

	for (j = 0; src[j] && j < n; j++)
	{
		dest[j] = src[j];
		m++;
	}
	for (j = m; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
