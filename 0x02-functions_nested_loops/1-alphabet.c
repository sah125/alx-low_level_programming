#include "main.h"
/**
 * main - A program that display letters 
 *
 * Return: 0
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
