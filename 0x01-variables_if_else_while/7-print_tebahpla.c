#include <stdio.h>
#include <stdlib.h>
/**
 * main - A prom That reverse
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
