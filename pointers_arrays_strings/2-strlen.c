#include "main.h"
/**
 *_strlen- returns the length of a string
 *@s: length value
 * Return: Always 0
 */
int _strlen(char *s)
{
	int len = 0;
	while (*s++)
	{
		len++;
	}
	return (len);
}
