#include "main.h"
/**
 * print_alphabet - A program that display letters
 * Return: on succes
 */

void print_alphabet(void)
{
	char sh;

	for (sh = 'a' ; sh <= 'z' ; sh++)
	{
		_putchar(sh);
	}
	_putchar('\n');	
}
