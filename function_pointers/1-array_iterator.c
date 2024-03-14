#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @array: integer array
 * @size: size of array
 * @:action: pointer to function
 *
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m;

	if (array && action)
		for (m = 0; m < size; m++)
			action(array[m]);
}
