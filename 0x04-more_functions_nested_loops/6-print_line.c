#include "main.h"
/**
 * print_line - A program that draws a straight line in the terminal.
 * @n: Single input
 * Return: straight line
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
