#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string which is a duplicate
 * @str: string
 * Return: Null if str equals NULL
 */
char *_strdup(char *str);
{
	char *strout;
	unsigned int j, m;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)

	strout = (char *)malloc(sizeof(char) * (j + 1));

	if (strout == NULL)
		return (NULL);

	for (m = 0; m <= j; m++)
		strout[m] = str[m];

	return (strout);
}
