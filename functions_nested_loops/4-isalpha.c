#include "main.h"
/**
 *_isalpha - checks for alphabetic character
 * @c: character
 * Return: (1) if c is lowercase or uppercase and (0) otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
