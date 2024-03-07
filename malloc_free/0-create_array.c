#include "main.h"
<<<<<<< HEAD
#include <stdlib.h>
/**
 * create_array - creates an array
 * @size: size of array
 * @c: storage char
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *jm;
	unsigned int i;

	if (size == 0)
		return (NULL);

	jm = malloc(sizeof(c) * size);

	if (jm == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		jm[i] = c;

	return (jm);
}

=======
/**
 *
>>>>>>> refs/remotes/origin/main
