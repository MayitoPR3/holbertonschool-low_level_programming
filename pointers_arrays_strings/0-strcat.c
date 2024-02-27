#include "main.h"
/**
 *_strcat- concatenates two strings
 *@dest: destination
 *@src: source
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int j, m = 0;

	while (dest[m])
	{
		m++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[m] = src[j];
		m++;
	}
	dest[m] = '\0';
	return (dest);
}
