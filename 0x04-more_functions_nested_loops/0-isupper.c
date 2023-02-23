#include "main.h"

/**
 * _isupper - Checks for uppercase character.
 * @c:  single letter input
 * Return: 1 if c is uppercase else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
